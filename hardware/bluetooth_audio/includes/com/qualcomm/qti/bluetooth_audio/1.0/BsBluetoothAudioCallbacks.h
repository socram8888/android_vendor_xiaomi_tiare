#ifndef HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BSBLUETOOTHAUDIOCALLBACKS_H
#define HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BSBLUETOOTHAUDIOCALLBACKS_H

#include <android-base/macros.h>
#include <cutils/trace.h>
#include <future>
#include <com/qualcomm/qti/bluetooth_audio/1.0/IBluetoothAudioCallbacks.h>

#include <hidl/HidlPassthroughSupport.h>
#include <hidl/TaskRunner.h>
namespace com {
namespace qualcomm {
namespace qti {
namespace bluetooth_audio {
namespace V1_0 {

struct BsBluetoothAudioCallbacks : IBluetoothAudioCallbacks, ::android::hardware::details::HidlInstrumentor {
    explicit BsBluetoothAudioCallbacks(const ::android::sp<IBluetoothAudioCallbacks> impl);

    typedef IBluetoothAudioCallbacks Pure;

    // Methods from IBluetoothAudioCallbacks follow.
    ::android::hardware::Return<void> a2dp_check_ready() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_check_ready::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_check_ready", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_check_ready();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_check_ready", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_stop_stream_req() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_stop_stream_req::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_stop_stream_req", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_stop_stream_req();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_stop_stream_req", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_get_codec_config() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_get_codec_config::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_codec_config", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_get_codec_config();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_codec_config", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_get_sink_latency() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_get_sink_latency::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_sink_latency", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_get_sink_latency();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_sink_latency", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_start_stream_req() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_start_stream_req::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_start_stream_req", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_start_stream_req();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_start_stream_req", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_suspend_stream_req() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_suspend_stream_req::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_suspend_stream_req", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_suspend_stream_req();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_suspend_stream_req", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_get_multicast_status() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_get_multicast_status::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_multicast_status", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_get_multicast_status();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_multicast_status", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_get_connection_status() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_get_connection_status::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_connection_status", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_get_connection_status();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_connection_status", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<void> a2dp_get_num_connected_devices() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::a2dp_get_num_connected_devices::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_num_connected_devices", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->a2dp_get_num_connected_devices();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "a2dp_get_num_connected_devices", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }

    // Methods from ::android::hidl::base::V1_0::IBase follow.
    ::android::hardware::Return<void> interfaceChain(interfaceChain_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::interfaceChain::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "interfaceChain", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->interfaceChain([&](const auto &_hidl_out_descriptors) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptors);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "interfaceChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_descriptors);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> debug(const ::android::hardware::hidl_handle& fd, const ::android::hardware::hidl_vec<::android::hardware::hidl_string>& options) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::debug::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&fd);
            _hidl_args.push_back((void *)&options);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "debug", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->debug(fd, options);

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "debug", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }
    ::android::hardware::Return<void> interfaceDescriptor(interfaceDescriptor_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::interfaceDescriptor::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "interfaceDescriptor", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->interfaceDescriptor([&](const auto &_hidl_out_descriptor) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_descriptor);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "interfaceDescriptor", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_descriptor);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> getHashChain(getHashChain_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::getHashChain::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "getHashChain", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getHashChain([&](const auto &_hidl_out_hashchain) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_hashchain);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "getHashChain", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_hashchain);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> setHALInstrumentation() {
        configureInstrumentation();
        return ::android::hardware::Void();
    }

    ::android::hardware::Return<bool> linkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient, uint64_t cookie) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::linkToDeath::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            _hidl_args.push_back((void *)&cookie);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "linkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->linkToDeath(recipient, cookie);

        #ifdef __ANDROID_DEBUGGABLE__
        bool _hidl_out_success = _hidl_return;
        #endif // __ANDROID_DEBUGGABLE__
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "linkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }
    ::android::hardware::Return<void> ping() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::ping::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "ping", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->ping();

        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "ping", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }
    ::android::hardware::Return<void> getDebugInfo(getDebugInfo_cb _hidl_cb) {
        if (_hidl_cb == nullptr) {
            return ::android::hardware::Status::fromExceptionCode(
                    ::android::hardware::Status::EX_ILLEGAL_ARGUMENT,
                    "Null synchronous callback passed.");
        }

        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::getDebugInfo::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "getDebugInfo", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->getDebugInfo([&](const auto &_hidl_out_info) {
            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                _hidl_args.push_back((void *)&_hidl_out_info);
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "getDebugInfo", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

            _hidl_cb(_hidl_out_info);
        });

        return _hidl_return;
    }
    ::android::hardware::Return<void> notifySyspropsChanged() {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::notifySyspropsChanged::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "notifySyspropsChanged", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = addOnewayTask([mImpl = this->mImpl
        #ifdef __ANDROID_DEBUGGABLE__
        , mEnableInstrumentation = this->mEnableInstrumentation, mInstrumentationCallbacks = this->mInstrumentationCallbacks
        #endif // __ANDROID_DEBUGGABLE__
        ] {
            mImpl->notifySyspropsChanged();

            atrace_end(ATRACE_TAG_HAL);
            #ifdef __ANDROID_DEBUGGABLE__
            if (UNLIKELY(mEnableInstrumentation)) {
                std::vector<void *> _hidl_args;
                for (const auto &callback: mInstrumentationCallbacks) {
                    callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "notifySyspropsChanged", &_hidl_args);
                }
            }
            #endif // __ANDROID_DEBUGGABLE__

        });
        return _hidl_return;
    }
    ::android::hardware::Return<bool> unlinkToDeath(const ::android::sp<::android::hardware::hidl_death_recipient>& recipient) {
        atrace_begin(ATRACE_TAG_HAL, "HIDL::IBluetoothAudioCallbacks::unlinkToDeath::passthrough");
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&recipient);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_ENTRY, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "unlinkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        auto _hidl_error = ::android::hardware::Void();
        auto _hidl_return = mImpl->unlinkToDeath(recipient);

        #ifdef __ANDROID_DEBUGGABLE__
        bool _hidl_out_success = _hidl_return;
        #endif // __ANDROID_DEBUGGABLE__
        atrace_end(ATRACE_TAG_HAL);
        #ifdef __ANDROID_DEBUGGABLE__
        if (UNLIKELY(mEnableInstrumentation)) {
            std::vector<void *> _hidl_args;
            _hidl_args.push_back((void *)&_hidl_out_success);
            for (const auto &callback: mInstrumentationCallbacks) {
                callback(InstrumentationEvent::PASSTHROUGH_EXIT, "com.qualcomm.qti.bluetooth_audio", "1.0", "IBluetoothAudioCallbacks", "unlinkToDeath", &_hidl_args);
            }
        }
        #endif // __ANDROID_DEBUGGABLE__

        return _hidl_return;
    }

private:
    const ::android::sp<IBluetoothAudioCallbacks> mImpl;
    ::android::hardware::details::TaskRunner mOnewayQueue;

    ::android::hardware::Return<void> addOnewayTask(std::function<void(void)>);

};

}  // namespace V1_0
}  // namespace bluetooth_audio
}  // namespace qti
}  // namespace qualcomm
}  // namespace com

#endif  // HIDL_GENERATED_COM_QUALCOMM_QTI_BLUETOOTH_AUDIO_V1_0_BSBLUETOOTHAUDIOCALLBACKS_H
