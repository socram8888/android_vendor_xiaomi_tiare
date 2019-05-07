#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BPHWFMHCI_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BPHWFMHCI_H

#include <hidl/HidlTransportSupport.h>

#include <vendor/qti/hardware/fm/1.0/IHwFmHci.h>

namespace vendor {
namespace qti {
namespace hardware {
namespace fm {
namespace V1_0 {

struct BpHwFmHci : public ::android::hardware::BpInterface<IFmHci>, public ::android::hardware::details::HidlInstrumentor {
    explicit BpHwFmHci(const ::android::sp<::android::hardware::IBinder> &_hidl_impl);

    typedef IFmHci Pure;

    virtual bool isRemote() const override { return true; }

    // Methods from IFmHci follow.
    static ::android::hardware::Return<void>  _hidl_initialize(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::sp<IFmHciCallbacks>& callbacks);
    static ::android::hardware::Return<void>  _hidl_sendHciCommand(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor, const ::android::hardware::hidl_vec<uint8_t>& command);
    static ::android::hardware::Return<void>  _hidl_close(::android::hardware::IInterface* _hidl_this, ::android::hardware::details::HidlInstrumentor *_hidl_this_instrumentor);

    // Methods from IFmHci follow.
    ::android::hardware::Return<void> initialize(const ::android::sp<IFmHciCallbacks>& callbacks) override;
    ::android::hardware::Return<void> sendHciCommand(const ::android::hardware::hidl_vec<uint8_t>& command) override;
    ::android::hardware::Return<void> close() override;

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

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BPHWFMHCI_H
