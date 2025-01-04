IMAGE_FEATURES += "package-management"
IMAGE_LINGUAS = "en-us"

inherit image fs-overlay

inherit extrausers
# Generated using 'printf "%q" $(mkpasswd -m sha256crypt blink)'
EXTRA_USER_PASSWD = "\$5\$wRt8QwSZwLnyNTQG\$qYuJJewb7KaXoIXEE7BmbX5f2taIm1NiekQANM3Q1XD"
EXTRA_USERS_PARAMS = "useradd -p '${EXTRA_USER_PASSWD}' blink"

CORE_OS = " \
    alsa-lib \
    coreutils \
    openssh \
    openssh-keygen \
    openssh-sftp-server \
    packagegroup-core-boot \
    tzdata \
    wlan \
    wpa-supplicant \
"

KERNEL_EXTRA = " \
    kernel-modules \
    linux-firmware \
"

DEV_SDK = " \
    cmake \
    diffutils \
    elfutils \
    elfutils-binutils \
    file \
    git \
    ldd \
    python3-modules \
    python3-pip \
    strace \
    packagegroup-core-buildessential \
"

EXTRA_TOOLS = " \
    alsa-tools \
    alsa-utils \
    bash \
    bzip2 \
    curl \
    e2fsprogs-mke2fs \
    ethtool \
    fbset \
    findutils \
    gdb \
    gdbserver \
    grep \
    htop \
    i2c-tools \
    iperf3 \
    iproute2 \
    iptables \
    less \
    nmap \
    procps \
    sudo \
    sysfsutils \
    tcpdump \
    unzip \
    usbutils \
    util-linux \
    util-linux-blkid \
    vim \
    wget \
    zip \
"

IMAGE_INSTALL += " \
    ${CORE_OS} \
    ${DEV_SDK} \
    ${EXTRA_TOOLS} \
    ${KERNEL_EXTRA} \
"
