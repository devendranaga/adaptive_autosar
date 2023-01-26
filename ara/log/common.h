#ifndef __ARA_LOG_COMMON_H__
#define __ARA_LOG_COMMON_H__

#include <cstdint>

namespace ara::log {

/**
 * List of possible log levels.
*/
enum class LogLevel : std::uint8_t {
    kOff = 0x00,
    kFatal = 0x01,
    kError = 0x02,
    kWarn = 0x03,
    kInfo = 0x04,
    kDebug = 0x05,
    kVerbose = 0x06,
};

/**
 * Client state representing the connected state of
 * external client.
*/
enum class ClientState : std::int8_t {
    kUnknown = -1,
    kNotConnected,
    kConnected,
};

}

#endif
