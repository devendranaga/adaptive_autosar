/**
 * Implements ara::core::Array type.
*/
#ifndef __ARA_CORE_ARRAY_H__
#define __ARA_CORE_ARRAY_H__

#include <cstdint>

namespace ara::core {

template <typename T, std::size_t N>
class Array {
    public:
        T &operator[](size_t idx) { return array_[idx]; }
        T at(size_t idx) { return array_[idx]; }
        T front() { return array_[0]; }
        T last() { return array_[N - 1]; }
        std::size_t size() { return N; }
        const T *data() noexcept { return &array_; }

    private:
        T array_[N];
};

}

#endif
