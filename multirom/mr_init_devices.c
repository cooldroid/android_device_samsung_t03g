#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
 "/sys/class/graphics/fb0",

 "/sys/block/mmcblk0",
 "/sys/devices/platform/dw_mmc",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p8",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p16",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p13",

 "/sys/bus/mmc",
 "/sys/bus/mmc/drivers/mmcblk",
 "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
 "/sys/module/mmc_core",
 "/sys/module/mmcblk",

 "/sys/devices/virtual/input*",
 "/sys/devices/virtual/misc/uinput",
 "/sys/devices/platform/gpio-keys.0/input*",
 "/sys/class/sec/sec_key*",
 "/sys/class/sec/sec_touchkey*",
 "/sys/class/sec/sec_touchscreen*",

 // for adb
 "/sys/class/tty/ptmx",
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p13", //system
 "/sys/devices/platform/dw_mmc/mmc_host/mmc0/mmc0:0001/block/mmcblk0/mmcblk0p12", // /cache
 "/sys/class/misc/android_adb",
 "/sys/class/android_usb/android0/f_adb",
 "/sys/bus/usb",

 // USB Drive is in here
 "/sys/module/ehci_hcd*",

 NULL
};
