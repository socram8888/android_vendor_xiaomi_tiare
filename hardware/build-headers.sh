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
	local fqdn="$1"
	local module="$2"
	local version="$3"
	hidl-gen -o "${harddir}/${module}/includes" -L c++-headers -r android.hardware:hardware/interfaces -r android.hidl:system/libhidl/transport/ -r "$fqdn":"$harddir" "${fqdn}.${module}@${version}"
}

buildsubmodule com.qualcomm.qti bluetooth_audio 1.0
buildsubmodule vendor.qti.hardware fm 1.0
