#!/sbin/sh

BPATH=`find /sys -name brightness | head -n 1`
cd /
ln -s $BPATH brightness
