#include <cstdint>

namespace ara::core {

class ErrorDomain {
    public:
        using IdType = std::uint64_t;
        using CodeType = std::int32_t;

        ~ErrorDomain() = default;
};

}
