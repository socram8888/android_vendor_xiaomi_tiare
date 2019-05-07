#ifndef HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BNHWFMHCICALLBACKS_H
#define HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BNHWFMHCICALLBACKS_H

#include <vendor/qti/hardware/fm/1.0/IHwFmHciCallbacks.h>

namespace vendor {
namespace qti {
namespace hardware {
namespace fm {
namespace V1_0 {

struct BnHwFmHciCallbacks : public ::android::hidl::base::V1_0::BnHwBase {
    explicit BnHwFmHciCallbacks(const ::android::sp<IFmHciCallbacks> &_hidl_impl);
    explicit BnHwFmHciCallbacks(const ::android::sp<IFmHciCallbacks> &_hidl_impl, const std::string& HidlInstrumentor_package, const std::string& HidlInstrumentor_interface);

    virtual ~BnHwFmHciCallbacks();

    ::android::status_t onTransact(
            uint32_t _hidl_code,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            uint32_t _hidl_flags = 0,
            TransactCallback _hidl_cb = nullptr) override;


    typedef IFmHciCallbacks Pure;

    ::android::sp<IFmHciCallbacks> getImpl() { return _hidl_mImpl; };
    // Methods from IFmHciCallbacks follow.
    static ::android::status_t _hidl_initializationComplete(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);


    static ::android::status_t _hidl_hciEventReceived(
            ::android::hidl::base::V1_0::BnHwBase* _hidl_this,
            const ::android::hardware::Parcel &_hidl_data,
            ::android::hardware::Parcel *_hidl_reply,
            TransactCallback _hidl_cb);



private:
    // Methods from IFmHciCallbacks follow.

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> ping();
    using getDebugInfo_cb = ::android::hidl::base::V1_0::IBase::getDebugInfo_cb;
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb);

    ::android::sp<IFmHciCallbacks> _hidl_mImpl;
};

}  // namespace V1_0
}  // namespace fm
}  // namespace hardware
}  // namespace qti
}  // namespace vendor

#endif  // HIDL_GENERATED_VENDOR_QTI_HARDWARE_FM_V1_0_BNHWFMHCICALLBACKS_H
