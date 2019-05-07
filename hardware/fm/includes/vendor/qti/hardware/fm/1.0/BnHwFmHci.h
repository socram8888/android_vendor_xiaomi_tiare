#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BNHWFMHCI_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BNHWFMHCI_H

#include <vendor/qti/hardware/fm/1.0/IHwFmHci.h>

namespace vendor {
namespace qti {
namespace hardware {
namespace fm {
namespace V1_0 {

struct BnHwFmHci : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwFmHci(const ::android::sp<IFmHci> &_hidl_impl);
    explicit BnHwFmHci(const ::android::sp<IFmHci> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwFmHci();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    typedef IFmHci Pure;

    ::android::sp<IFmHci> getImpl() { return _hidl_mImpl; };
    // Methods from IFmHci follow.
    static ::android::status_t _hidl_initialize(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_sendHciCommand(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_close(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from IFmHci follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IFmHci> _hidl_mImpl;
};

}  // namespace V1_0
}  // namespace fm
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BNHWFMHCI_H
