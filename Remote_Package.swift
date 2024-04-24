// swift-tools-version: 5.9
import PackageDescription

struct Binary {
    let name: String
    let url: String
    let checksum: String
    var target: String { name + "Target" }
}

let binaries: [Binary] = [
    Binary(
        name: "MessengerTransport",
        url: "https://genesysdx.jfrog.io/artifactory/TransportSDK/MessengerTransport.xcframework-2.5.1.rc.zip",
        checksum: "1295a9c65eb3913bc80d3eb5787f08be689d32b79819a10b252c02e21f489039"
    ),
    Binary(
        name: "GenesysCloudCore",
        url: "https://genesysdx.jfrog.io/artifactory/genesys-cloud-ios.prod/GenesysCloudCore/GenesysCloudCore_version_t1.8.0_commit_c9e94209c4297526b03a4f56f6d7511000d26537.zip",
        checksum: "aa0484ce367ff56b326ab4a300f413412d96c11854d4e5e6471381e10446f96d"
    ),
    Binary(
        name: "GenesysCloudAccessibility",
        url: "https://genesysdx.jfrog.io/artifactory/genesys-cloud-ios.prod/GenesysCloudAccessibility/GenesysCloudAccessibility_version_t1.8.0_commit_e4ce7f5e1e03fe33fa9a334d66e002676161c69b.zip",
        checksum: "8b3539fd5c6bc9d0b15a4d764dc54ff54f2882a7e9e91574a26d17fa798eb01f"
    ),
    Binary(
        name: "GenesysCloudBot",
        url: "https://genesysdx.jfrog.io/artifactory/genesys-cloud-ios.prod/GenesysCloudBot/GenesysCloudBot_version_t1.8.0_commit_0f540b064fa496053ab69f2812ccb800d235b373.zip",
        checksum: "c6d827b90a0a0b158b105c16396c387eb44f125e09c678919c7f935f97d7399a"
    ),
    Binary(
        name: "GenesysCloudBold",
        url: "https://genesysdx.jfrog.io/artifactory/genesys-cloud-ios.prod/GenesysCloudBold/GenesysCloudBold_version_t1.8.0_commit_659a44aae2ab30706cb6c0cf102a3a5315a0e886.zip",
        checksum: "160fdc498ea0ddf32a6c99971aee87e7c920d91852f9458fcfeb466c8a7fbae8"
    ),
    Binary(
        name: "GenesysCloudMessenger",
        url: "https://genesysdx.jfrog.io/artifactory/genesys-cloud-ios.prod/GenesysCloudMessenger/GenesysCloudMessenger_version_t1.8.0_commit_bdb95fd93ddb501769395d0caffd9ed4fa66090b.zip",
        checksum: "786268a65b5e38bc8b08f4f18d5c4bf8f7f819efcf03135394250cd6ff594231"
    ),
    Binary(
        name: "GenesysCloud",
        url: "https://genesysdx.jfrog.io/artifactory/genesys-cloud-ios.prod/GenesysCloud/GenesysCloud_version_t1.8.0_commit_96a25816c4c911c3d0c9fe277a6154cc4a9b70ca.zip",
        checksum: "2bccefdcf9a01fd71b7c4d1fb9e57e12b391f0c2d0a1a2947aaef08badf3f43c"
    ),
]

let package = Package(
    name: "Genesys",
    platforms: [.iOS(.v15)],
    products: binaries.map { Product.library(name: $0.name, targets: [$0.target]) },
//    products: [Product.library(name: "Genesys", targets: binaries.map(\.name))],
    targets: binaries.map { Target.binaryTarget(name: $0.target, url: $0.url, checksum: $0.checksum) }
)
