#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIOCALLBACKS_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIOCALLBACKS_H

#include <hidl/HidlTransportSupport.h>

#include <com/qualcomm/qti/bluetooth_audio/1.0/IHwBluetoothAudioCallbacks.h>

namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

struct BpHwBluetoothAudioCallbacks : public ::android::hardware::BpInterface<IBluetoothAudioCallbacks>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwBluetoothAudioCallbacks(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    typedef IBluetoothAudioCallbacks Pure;

    virtual bool isRemote() const override { return true; }

    // Methods from IBluetoothAudioCallbacks follow.
    static ::android::hardware::Return<void>  _hidl_a2dp_check_ready(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_stop_stream_req(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_get_codec_config(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_get_sink_latency(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_start_stream_req(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_suspend_stream_req(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_get_multicast_status(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_get_connection_status(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);
    static ::android::hardware::Return<void>  _hidl_a2dp_get_num_connected_devices(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);

    // Methods from IBluetoothAudioCallbacks follow.
    ::android::hardware::Return<void> a2dp_check_ready() override;
    ::android::hardware::Return<void> a2dp_stop_stream_req() override;
    ::android::hardware::Return<void> a2dp_get_codec_config() override;
    ::android::hardware::Return<void> a2dp_get_sink_latency() override;
    ::android::hardware::Return<void> a2dp_start_stream_req() override;
    ::android::hardware::Return<void> a2dp_suspend_stream_req() override;
    ::android::hardware::Return<void> a2dp_get_multicast_status() override;
    ::android::hardware::Return<void> a2dp_get_connection_status() override;
    ::android::hardware::Return<void> a2dp_get_num_connected_devices() override;

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

#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BPHWBLUETOOTHAUDIOCALLBACKS_H
