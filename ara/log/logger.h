#ifndef __ARA_LOG_LOGGER_H__
#define __ARA_LOG_LOGGER_H__

#include <cstdint>
#include <string_view.h>
#include <common.h>

namespace ara::log {

/**
 * Format specifier for log message args.
*/
enum class Fmt : std::uint8_t {
    kDefault = 0,
    kDec = 1,
    kOct = 2,
    kHex = 3,
    kBin = 4,
    kDecFloat = 5,
    kEngFloat = 6,
    kHexFloat = 7,
    kAutoFloat = 8,
};

/* Log format holder. */
struct Format final {
    /* Format specifier. */
    Fmt format;

    /* Precision to use. */
    std::uint16_t precision;
};

class LogStream {
    public:
        void Flush() noexcept;
        LogStream &operator<<(bool value) noexcept;
        LogStream &operator<<(std::uint8_t value) noexcept;
};

class Logger {
    public:
        LogStream LogFatal() const noexcept;
};

/* Create a Format instance with Fmt::kDefault formatting hint. */
constexpr Format Dflt() noexcept;

/**
 * Create a Format instance with Fmt::kDec formatting hint
 * and default precision.
*/
constexpr Format Dec() noexcept;

/**
 * Create a Format instance with Fmt::kDec formatting hint and given precision.
*/
constexpr Format Dec(std::uint16_t precision) noexcept;

/**
 * Create a Format instance with Fmt::kOct formatting hint and
 * default precision.
*/
constexpr Format Oct() noexcept;

/**
 * Create a Format instance with Fmt::kOct formatting hint and given precision.
*/
constexpr Format Oct(std::uint16_t precision) noexcept;

/**
 * Create a Format instance with Fmt::kHex formatting hint and
 * default precision.
*/
constexpr Format Hex() noexcept;

/**
 * Create a Format instance with Fmt::kHex formatting hint and given precision.
*/
constexpr Format Hex(std::uint16_t precision) noexcept;

/**
 * Create a Format instance with Fmt::kBin formatting hint and
 * default precision.
*/
constexpr Format Bin() noexcept;

/**
 * Create a Format instance with Fmt::kBin formatting hint and given precision.
*/
constexpr Format Bin(std::uint16_t precision) noexcept;

/**
 * Create a Format instance with Fmt::kDecFloat formatting hint and
 * given precision.
*/
constexpr Format DecFloat(std::uint16_t precision=6) noexcept;

/**
 * Create a Format instance with Fmt::kDecFloat formatting hint and
 * a precision that is sufficient for full round-trip safety.
*/
constexpr Format DecFloatMax() noexcept;

/**
 * Create a Format instance with Fmt::kEngFloat formatting hint and
 * given precision.
*/
constexpr Format EngFloat(std::uint16_t precision=6) noexcept;

/**
 * Create a Format instance with Fmt::kEngFloat formatting hint and
 * a precision that is sufficient for full round-trip safety.
*/
constexpr Format EngFloatMax () noexcept;

Logger &CreateLogger(ara::core::StringView ctxId,
                     ara::core::StringView ctxDescription,
                     LogLevel ctxDefLogLevel) noexcept;

}

#endif
