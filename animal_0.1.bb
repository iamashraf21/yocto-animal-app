SUMMARY = "bitbake-layers recipe"
DESCRIPTION = "Recipe created by bitbake-layers"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"


PVBASE := "${PV}"
FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}-${PVBASE}:"

SRCREV = "${AUTOREV}"

SRC_URI="git://github.com/iamashraf21/yocto-animal-app.git;branch=main"
SRC_URI[sha256sum] = "27a4a6ac627ef0d4cc41927fbfb8cdd301ca365a32b2b6c81356cbb89506c1df"

S = "${WORKDIR}/git"

inherit cmake