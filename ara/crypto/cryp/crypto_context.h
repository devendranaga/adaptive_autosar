#include <crypto_provider.h>

namespace ara::crypto::cryp {

class CryptoContext {
    public:
        /**
         * Get a reference to Crypto Provider of this context.
        */
        virtual CryptoProvider MyProvider() const noexcept = 0;
};

}
