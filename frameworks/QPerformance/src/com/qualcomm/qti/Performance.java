
package com.qualcomm.qti;

public class Performance {
	public static final int REQUEST_FAILED = -1;
	public static final int REQUEST_SUCCEEDED = 0;
	private static final String TAG = "Perf";

	static {
		try {
			System.loadLibrary("qti_performance");
		} catch (UnsatisfiedLinkError e) {
		}
	}

	public Performance() {
		handle = 0;
	}

	private native int native_perf_hint(int hint, String userDataStr, int userData1, int userData2);
	private native int native_perf_io_prefetch_start(int pid, String pkgName, String codePath);
	private native int native_perf_io_prefetch_stop();
	private native int native_perf_lock_acq(int handle, int duration, int[] list);

	public int perfHint(int hint, String userDataStr, int userData1, int userData2) {
		handle = native_perf_hint(hint, userDataStr, userData1, userData2);
		if (handle > 0) {
			return handle;
		}
		return REQUEST_FAILED;
	}

	public int perfIOPrefetchStart(int pid, String pkgName, String codePath) {
		return native_perf_io_prefetch_start(pid, pkgName, codePath);
	}

	public int perfIOPrefetchStop() {
		return native_perf_io_prefetch_stop();
	}

	public int perfLockAcquire(int duration, int ... list) {
		handle = native_perf_lock_acq(handle, duration, list);
		if (handle > 0) {
			return handle;
		}
		return REQUEST_FAILED;
	}

	public int perfLockRelease() {
		int ret = native_perf_lock_rel(handle);
		handle = 0;
		return ret;
	}

	public int perfLockReleaseHandler(int handle) {
		return native_perf_lock_rel(handle);
	}
}
