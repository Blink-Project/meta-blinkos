do_fsoverlay(){
    cp -rf ${LAYERDIR_BLINKOS}/fs-overlay/* ${IMAGE_ROOTFS}/
}
addtask fsoverlay after do_rootfs before do_image
do_image[deptask] = "do_fsoverlay"
do_fsoverlay[vardeps] = "LAYERDIR_BLINKOS IMAGE_ROOTFS"
