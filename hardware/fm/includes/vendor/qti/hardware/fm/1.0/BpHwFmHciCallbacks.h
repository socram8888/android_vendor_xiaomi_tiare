#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BPHWFMHCICALLBACKS_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BPHWFMHCICALLBACKS_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/qti/hardware/fm/1.0/IHwFmHciCallbacks.h>

namespace vendor {
namespace qti {
namespace hardware {
namespace fm {
namespace V1_0 {

struct BpHwFmHciCallbacks : public ::android::hardware::BpInterface<IFmHciCallbacks>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwFmHciCallbacks(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    typedef IFmHciCallbacks Pure;

    virtual bool isRemote() const override { return true; }

    // Methods from IFmHciCallbacks follow.
    static ::android::hardware::Return<void>  _hidl_initializationComplete(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, Status status);
    static ::android::hardware::Return<void>  _hidl_hciEventReceived(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<uint8_t>& event);

    // Methods from IFmHciCallbacks follow.
    ::android::hardware::Return<void> initializationComplete(Status status) override;
    ::android::hardware::Return<void> hciEventReceived(const ::android::hardware::hidl_vec<uint8_t>& event) override;

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
}  // namespace fm
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BPHWFMHCICALLBACKS_H
