#include <cstdint>

namespace ara::crypto {

/**
 * Enumeration of all types of crypto objects,
 * i.e. types of content that can be stored to a key slot.
*/
enum class CryptoObjectType : std::uint8_t {
    kNone = 0,
    kUnknown = 0,
    kDomainParameters = 1,
    kSymmetricKey = 2,
    kPrivateKey = 3,
    kPublicKey = 4,
    kSignature = 5,
    kPasswordHash = 6,
    kSecretSeed = 7,
    kCertSignRequest = 8,
    kCertificate = 9,
};

/**
 * Enumeration of all known Provider types.
*/
enum class ProviderType : std::uint32_t {
    kUndefinedProvider = 0,
    kCryptoProvider = 1,
    kKeyStorageProvider = 2,
    kX509Provider = 3,
};

}
