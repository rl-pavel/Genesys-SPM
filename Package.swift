// swift-tools-version: 5.9
import PackageDescription

let targets: [(name: String, path: String)] = [
    (name: "GenesysCloud", path: "Sources/GenesysCloud.xcframework"),
    (name: "GenesysCloudAccessibility", path: "Sources/GenesysCloudAccessibility.xcframework"),
    (name: "GenesysCloudBold", path: "Sources/GenesysCloudBold.xcframework"),
    (name: "GenesysCloudBot", path: "Sources/GenesysCloudBot.xcframework"),
    (name: "GenesysCloudCore", path: "Sources/GenesysCloudCore.xcframework"),
    (name: "GenesysCloudMessenger", path: "Sources/GenesysCloudMessenger.xcframework"),
    (name: "MessengerTransport", path: "Sources/MessengerTransport.xcframework"),
]

let package = Package(
    name: "Genesys",
    platforms: [.iOS(.v15)],
    products: [
        .library(name: "Genesys", targets: targets.map(\.name))
    ],
    targets: targets.map { Target.binaryTarget(name: $0.name, path: $0.path) }
)
