THEOS_DEVICE_IP = 192.168.3.166
ARCHS = armv7 arm64

include $(THEOS)/makefiles/common.mk

TWEAK_NAME = SetVPNTest
SetVPNTest_FILES = Tweak.xm SetVpn.m
SetVPNTest_FRAMEWORKS = UIKit


include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 SpringBoard"
