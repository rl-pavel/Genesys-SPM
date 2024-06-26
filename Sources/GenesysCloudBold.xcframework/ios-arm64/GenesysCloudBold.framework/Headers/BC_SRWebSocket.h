
// GenesysCloudBold version number: v1.8.0
//
//   Copyright 2012 Square Inc.
//
//   Licensed under the Apache License, Version 2.0 (the "License");
//   you may not use this file except in compliance with the License.
//   You may obtain a copy of the License at
//
//       http://www.apache.org/licenses/LICENSE-2.0
//
//   Unless required by applicable law or agreed to in writing, software
//   distributed under the License is distributed on an "AS IS" BASIS,
//   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//   See the License for the specific language governing permissions and
//   limitations under the License.
//

#import <Foundation/Foundation.h>
#import <Security/SecCertificate.h>

typedef enum {
    BCSR_CONNECTING   = 0,
    BCSR_OPEN         = 1,
    BCSR_CLOSING      = 2,
    BCSR_CLOSED       = 3,
} BCSRReadyState;

@class BC_SRWebSocket;

extern NSString *const BC_SRWebSocketErrorDomain;

#pragma mark - BC_SRWebSocketDelegate

@protocol BC_SRWebSocketDelegate;

#pragma mark - SRWebSocket

@interface BC_SRWebSocket : NSObject <NSStreamDelegate>

@property (nonatomic, assign) id <BC_SRWebSocketDelegate> delegate;

@property (nonatomic, readonly) BCSRReadyState readyState;
@property (nonatomic, readonly, retain) NSURL *url;

// This returns the negotiated protocol.
// It will be nil until after the handshake completes.
@property (nonatomic, readonly, copy) NSString *protocol;

// Protocols should be an array of strings that turn into Sec-WebSocket-Protocol.
- (id)initWithURLRequest:(NSURLRequest *)request protocols:(NSArray *)protocols;
- (id)initWithURLRequest:(NSURLRequest *)request;

// Some helper constructors.
- (id)initWithURL:(NSURL *)url protocols:(NSArray *)protocols;
- (id)initWithURL:(NSURL *)url;

// Delegate queue will be dispatch_main_queue by default.
// You cannot set both OperationQueue and dispatch_queue.
- (void)setDelegateOperationQueue:(NSOperationQueue*) queue;
- (void)setDelegateDispatchQueue:(dispatch_queue_t) queue;

// By default, it will schedule itself on +[NSRunLoop SR_networkRunLoop] using defaultModes.
- (void)scheduleInRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;
- (void)unscheduleFromRunLoop:(NSRunLoop *)aRunLoop forMode:(NSString *)mode;

// SRWebSockets are intended for one-time-use only.  Open should be called once and only once.
- (void)open;

- (void)close;
- (void)closeWithCode:(NSInteger)code reason:(NSString *)reason;

// Send a UTF8 String or Data.
- (void)send:(id)data;

@end

#pragma mark - BC_SRWebSocketDelegate

@protocol BC_SRWebSocketDelegate <NSObject>

// message will either be an NSString if the server is using text
// or NSData if the server is using binary.
- (void)webSocket:(BC_SRWebSocket *)webSocket didReceiveMessage:(id)message;

@optional

- (void)webSocketDidOpen:(BC_SRWebSocket *)webSocket;
- (void)webSocket:(BC_SRWebSocket *)webSocket didFailWithError:(NSError *)error;
- (void)webSocket:(BC_SRWebSocket *)webSocket didCloseWithCode:(NSInteger)code reason:(NSString *)reason wasClean:(BOOL)wasClean;

@end

#pragma mark - NSURLRequest (BCCertificateAdditions)

@interface NSURLRequest (BCCertificateAdditions)

@property (nonatomic, retain, readonly) NSArray *SR_SSLPinnedCertificates;

@end

#pragma mark - NSMutableURLRequest (BCCertificateAdditions)

@interface NSMutableURLRequest (BCCertificateAdditions)

@property (nonatomic, retain) NSArray *SR_SSLPinnedCertificates;

@end

#pragma mark - NSRunLoop (BC_SRWebSocket)

@interface NSRunLoop (BC_SRWebSocket)

+ (NSRunLoop *)SR_networkRunLoop;

@end
