#include <error_domain.h>

namespace ara::core {

class ErrorCode final {
    constexpr ErrorDomain::CodeType Value() const noexcept;
};

}

