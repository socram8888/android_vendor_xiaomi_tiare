#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIO_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIO_H

#include <hidl/HidlTransportSupport.h>

#include <com/qualcomm/qti/bluetooth_audio/1.0/IHwBluetoothAudio.h>

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

struct BpHwBluetoothAudio : public ::android::hardware::BpInterface<IBluetoothAudio>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothAudio(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    typedef IBluetoothAudio Pure;

    virtual bool isRemote() const override { return true; }

    // Methods from IBluetoothAudio follow.
    static ::android::hardware::Return<void>  _hidl_initialize_callbacks(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<IBluetoothAudioCallbacks>& callbacks);
    static ::android::hardware::Return<void>  _hidl_deinitialize_callbacks(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_started(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_stopped(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_suspended(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_check_ready(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_codec_config(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status, const ::android::hardware::hidl_vec<uint8_t>& config);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_sink_latency(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint16_t sink);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_multicast_status(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t multicast);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_connection_status(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status);
    static ::android::hardware::Return<void>  _hidl_a2dp_on_get_num_connected_devices(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, uint8_t num_dev);

    // Methods from IBluetoothAudio follow.
    ::android::hardware::Return<void> initialize_callbacks(const ::android::sp<IBluetoothAudioCallbacks>& callbacks) override;
    ::android::hardware::Return<void> deinitialize_callbacks() override;
    ::android::hardware::Return<void> a2dp_on_started(Status status) override;
    ::android::hardware::Return<void> a2dp_on_stopped(Status status) override;
    ::android::hardware::Return<void> a2dp_on_suspended(Status status) override;
    ::android::hardware::Return<void> a2dp_on_check_ready(Status status) override;
    ::android::hardware::Return<void> a2dp_on_get_codec_config(Status status, const ::android::hardware::hidl_vec<uint8_t>& config) override;
    ::android::hardware::Return<void> a2dp_on_get_sink_latency(uint16_t sink) override;
    ::android::hardware::Return<void> a2dp_on_get_multicast_status(uint8_t multicast) override;
    ::android::hardware::Return<void> a2dp_on_get_connection_status(Status status) override;
    ::android::hardware::Return<void> a2dp_on_get_num_connected_devices(uint8_t num_dev) override;

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) override;
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) override;
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) override;
    ::android::hardware::Return<void> setHALInstrumentation() override;
    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) override;
    ::android::hardware::Return<void> ping() override;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) override;
    ::android::hardware::Return<void> notifySyspropsChanged() override;
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) override;

private:
    std::mutex _hidl_mMutex;
    std::vector<::android::sp<::android::hardware::hidl_binder_death_recipient>> _hidl_mDeathRecipients;
};

}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIO_H
