#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_TYPES_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_TYPES_H

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

enum class Status : uint8_t {
    SUCCESS = 0,
    FAILURE = 1,
    INCALL_FAILURE = 2,
    PENDING = 3,
    DISCONNECTING = 4,
    UNSUPPORTED = 5,
};

constexpr uint8_t operator|(const Status lhs, const Status rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | static_cast<uint8_t>(rhs));
}

constexpr uint8_t operator|(const uint8_t lhs, const Status rhs) {
    return static_cast<uint8_t>(lhs | static_cast<uint8_t>(rhs));
}

constexpr uint8_t operator|(const Status lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) | rhs);
}

constexpr uint8_t operator&(const Status lhs, const Status rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & static_cast<uint8_t>(rhs));
}

constexpr uint8_t operator&(const uint8_t lhs, const Status rhs) {
    return static_cast<uint8_t>(lhs & static_cast<uint8_t>(rhs));
}

constexpr uint8_t operator&(const Status lhs, const uint8_t rhs) {
    return static_cast<uint8_t>(static_cast<uint8_t>(lhs) & rhs);
}

constexpr uint8_t &operator|=(uint8_t& v, const Status e) {
    v |= static_cast<uint8_t>(e);
    return v;
}

constexpr uint8_t &operator&=(uint8_t& v, const Status e) {
    v &= static_cast<uint8_t>(e);
    return v;
}

template<typename>
std::string toString(uint8_t o);
template<>
std::string toString<Status>(uint8_t o);

std::string toString(Status o);


}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_TYPES_H
