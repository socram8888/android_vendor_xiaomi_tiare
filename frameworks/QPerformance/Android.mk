LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := QPerformance
LOCAL_MODULE_TAGS := optional
LOCAL_REQUIRED_MODULES := libqti_performance
LOCAL_MODULE_CLASS := JAVA_LIBRARIES
 # Install to system/frameworks
LOCAL_SRC_FILES := $(call all-java-files-under, src)
LOCAL_MODULE_PATH := $(TARGET_OUT_JAVA_LIBRARIES)
LOCAL_CERTIFICATE := platform
include $(BUILD_JAVA_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := libqti_performance
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_CLASS := SHARED_LIBRARY
LOCAL_SRC_FILES := jni/libqti_performance.so
LOCAL_MODULE_PATH := system/lib
LOCAL_MULTILIB := 32
LOCAL_MODULE_SUFFIX := .so
include $(BUILD_PREBUILT)
