#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_IBLUETOOTHAUDIO_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_IBLUETOOTHAUDIO_H

#include <android/hidl/base/1.0/IBase.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/IBluetoothAudioCallbacks.h>
#include <com/qualcomm/qti/bluetooth_audio/1.0/types.h>

#include <android/hidl/manager/1.0/IServiceNotification.h>

#include <hidl/HidlSupport.h>
#include <hidl/MQDescriptor.h>
#include <hidl/Status.h>
#include <utils/NativeHandle.h>
#include <utils/misc.h>

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

struct IBluetoothAudio : public ::android::hidl::base::V1_0::IBase {
    virtual bool isRemote() const override { return false; }


    virtual ::android::hardware::Return<void> initialize_callbacks(const ::android::sp<IBluetoothAudioCallbacks>& callbacks) = 0;

    virtual ::android::hardware::Return<void> deinitialize_callbacks() = 0;

    virtual ::android::hardware::Return<void> a2dp_on_started(Status status) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_stopped(Status status) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_suspended(Status status) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_check_ready(Status status) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_get_codec_config(Status status, const ::android::hardware::hidl_vec<uint8_t>& config) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_get_sink_latency(uint16_t sink) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_get_multicast_status(uint8_t multicast) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_get_connection_status(Status status) = 0;

    virtual ::android::hardware::Return<void> a2dp_on_get_num_connected_devices(uint8_t num_dev) = 0;

    using interfaceChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& descriptors)>;
    virtual ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;

    virtual ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;

    using interfaceDescriptor_cb = std::function<void(const ::android::hardware::hidl_string& descriptor)>;
    virtual ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;

    using getHashChain_cb = std::function<void(const ::android::hardware::hidl_vec<::android::hardware::hidl_array<uint8_t, 32>>& hashchain)>;
    virtual ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;

    virtual ::android::hardware::Return<void> setHALInstrumentation() override;

    virtual ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;

    virtual ::android::hardware::Return<void> ping() override;

    using getDebugInfo_cb = std::function<void(const ::android::hidl::base::V1_0::DebugInfo& info)>;
    virtual ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;

    virtual ::android::hardware::Return<void> notifySyspropsChanged() override;

    virtual ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;
    // cast static functions
    static ::android::hardware::Return<::android::sp<IBluetoothAudio>> castFrom(const ::android::sp<IBluetoothAudio>& parent, bool emitError = false);
    static ::android::hardware::Return<::android::sp<IBluetoothAudio>> castFrom(const ::android::sp<::android::hidl::base::V1_0::IBase>& parent, bool emitError = false);

    static const char* descriptor;

    static ::android::sp<IBluetoothAudio> tryGetService(const std::string &serviceName="default", bool getStub=false);
    static ::android::sp<IBluetoothAudio> tryGetService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return tryGetService(str, getStub); }
    static ::android::sp<IBluetoothAudio> tryGetService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return tryGetService(str, getStub); }
    static ::android::sp<IBluetoothAudio> tryGetService(bool getStub) { return tryGetService("default", getStub); }
    static ::android::sp<IBluetoothAudio> getService(const std::string &serviceName="default", bool getStub=false);
    static ::android::sp<IBluetoothAudio> getService(const char serviceName[], bool getStub=false)  { std::string str(serviceName ? serviceName : "");      return getService(str, getStub); }
    static ::android::sp<IBluetoothAudio> getService(const ::android::hardware::hidl_string& serviceName, bool getStub=false)  { std::string str(serviceName.c_str());      return getService(str, getStub); }
    static ::android::sp<IBluetoothAudio> getService(bool getStub) { return getService("default", getStub); }
    __attribute__ ((warn_unused_result))::android::status_t registerAsService(const std::string &serviceName="default");
    static bool registerForNotifications(
            const std::string &serviceName,
            const ::android::sp<::android::hidl::manager::V1_0::IServiceNotification> &notification);
};

std::string toString(const ::android::sp<IBluetoothAudio>&);

}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_IBLUETOOTHAUDIO_H
