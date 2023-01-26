#include <cstdint>

namespace ara::crypto::cryp {

/**
 * Starter interface of a stream processing,
 * common for all primitives that supports the streamable
 * processing approach
*/
class StreamStarter {
    public:
        virtual std::size_t GetIvSize() const noexcept = 0;
        virtual std::size_t GetBlockSize() const noexcept = 0;
        virtual bool IsValidIvSize(std::size_t ivSize) const noexcept = 0;
        virtual ~StreamStarter() noexcept = default;
};

}
