SUMMARY = "Orange Pi Image with Docker support, No Graphics"

require base-dev-image.inc

EXTRA_USERS_PARAMS += "; usermod -aG docker blink"

IMAGE_INSTALL += " \
    docker \
    docker-compose \
    k3s \
"

export IMAGE_BASENAME = "blinkos-base-image"
