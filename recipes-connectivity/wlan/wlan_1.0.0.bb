FILESEXTRAPATHS:prepend = "${THISDIR}/${PN}:"

inherit systemd

LICENSE = "CLOSED"

RDEPENDS:${PN} += "bash"

SRC_URI = " \
            file://wlan.service \
            file://start-wpa-supplicant.sh \
            "

SYSTEMD_SERVICE:${PN} = "wlan.service"

do_install(){
	install -d "${D}/${systemd_unitdir}/system"
	install -d "${D}/${datadir}/${PN}"
    install -m 0644 "${WORKDIR}"/wlan.service "${D}/${systemd_unitdir}/system/"
    install -m 0755 "${WORKDIR}"/start-wpa-supplicant.sh "${D}/${datadir}/${PN}"
}
