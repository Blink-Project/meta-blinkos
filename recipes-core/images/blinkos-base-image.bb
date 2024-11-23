SUMMARY = "Orange Pi Image with Docker support, No Graphics"

require base-dev-image.inc

IMAGE_INSTALL += " \
    docker \
    docker-compose \
"

export IMAGE_BASENAME = "blinkos-base-image"
