export THEOS_DEVICE_PORT = 22
export ARCHS = armv7 arm64
export TARGET = iphone:clang:latest:6.0

include theos/makefiles/common.mk

TWEAK_NAME = WeChatRobotForExample
WeChatRobotForExample_FILES = Tweak.xm Model/CMessageWrap-WCRAdditions.xm Model/MicroMessengerAppDelegate-WCRAdditions.xm Model/WCRDBManager.m Model/WCRGeneralCommander.m Model/WCRGroupCommander.m Model/WCRMessageCommander.m Model/WCRPreferences.m Model/WCRSearchManager.m Model/WCRTempGenerator.m Model/WCRUserCommander.m Model/WCRUtils.m Model/WCRVoiceProcessor.m
WeChatRobotForExample_FRAMEWORKS = UIKit
WeChatRobotForExample_LDFLAGS = -lsqlite3.0 -lz -lresolv -liconv
WeChatRobotForExample_CFLAGS = -fobjc-arc

include $(THEOS_MAKE_PATH)/tweak.mk

after-install::
	install.exec "killall -9 WeChat"
