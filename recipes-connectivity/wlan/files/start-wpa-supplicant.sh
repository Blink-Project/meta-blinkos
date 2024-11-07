#!/bin/bash -e

WLAN_DEVICE="$(ip a |grep -oEm 1 "wl[a-z0-9]+")"

if [[ -z "${WLAN_DEVICE}" ]];then
    echo "No WLAN Device found. Exiting."
    exit
fi

wpa_supplicant -Dnl80211 -i"${WLAN_DEVICE}" -c/etc/wpa_supplicant.conf

