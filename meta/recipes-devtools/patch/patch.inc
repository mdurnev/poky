SUMMARY = "Tool for applying a patch file"
DESCRIPTION = "patch takes a patch file containing a difference listing \
produced by the diff program and applies those differences to one or more \
original files, producing patched versions."
SECTION = "utils"

SRC_URI = "${GNU_MIRROR}/patch/patch-${PV}.tar.gz"
S = "${WORKDIR}/patch-${PV}"

inherit autotools update-alternatives

ALTERNATIVE_${PN} = "patch"
ALTERNATIVE_PRIORITY = "100"
