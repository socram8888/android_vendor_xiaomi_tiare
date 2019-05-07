#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_TYPES_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_TYPES_H

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace vendor {
namespace qti {
namespace hardware {
namespace fm {
namespace V1_0 {

typedef ::android::hardware::hidl_vec<uint8_t> HciPacket;

enum class Status : uint8_t {
    SUCCESS = 0,
    FAILURE = 1,
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
}  // namespace fm
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_TYPES_H
