#!/bin/bash -e

harddir=$PWD

while [ ! -d .repo ]; do
	if [ "$PWD" == / ]; then
		echo "Root not found"
		exit 1
	fi
	cd ..
done

buildsubmodule() {
	local module="$1"
	local fqdn="$2"
	hidl-gen -o "${harddir}/${module}/includes" -L c++-headers -r android.hardware:hardware/interfaces -r android.hidl:system/libhidl/transport/ -r com.qualcomm.qti:"$harddir" "${fqdn}"
}

buildsubmodule bluetooth_audio com.qualcomm.qti.bluetooth_audio@1.0
