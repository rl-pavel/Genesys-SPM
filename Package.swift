// swift-tools-version: 5.9
import PackageDescription

struct Binary {
    let name: String
    let path: String
    var target: String { name + "Target" }
}

let binaries: [Binary] = [
    Binary(name: "GenesysCloud", path: "Sources/GenesysCloud.xcframework"),
    Binary(name: "GenesysCloudAccessibility", path: "Sources/GenesysCloudAccessibility.xcframework"),
    Binary(name: "GenesysCloudBold", path: "Sources/GenesysCloudBold.xcframework"),
    Binary(name: "GenesysCloudBot", path: "Sources/GenesysCloudBot.xcframework"),
    Binary(name: "GenesysCloudCore", path: "Sources/GenesysCloudCore.xcframework"),
    Binary(name: "GenesysCloudMessenger", path: "Sources/GenesysCloudMessenger.xcframework"),
    Binary(name: "MessengerTransport", path: "Sources/MessengerTransport.xcframework"),
]

let package = Package(
    name: "Genesys",
    platforms: [.iOS(.v15)],
    products: binaries.map { Product.library(name: $0.name, targets: [$0.target]) },
//    products: [.library(name: "Genesys", targets: targets.map(\.name))],
    targets: binaries.map { Target.binaryTarget(name: $0.target, path: $0.path) }
)
