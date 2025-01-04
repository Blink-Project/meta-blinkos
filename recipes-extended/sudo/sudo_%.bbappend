do_install:append () {
    echo "blink ALL=(ALL) ALL" > ${D}${sysconfdir}/sudoers.d/001-blink
}
