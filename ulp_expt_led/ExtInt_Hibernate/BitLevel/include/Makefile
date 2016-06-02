default: inc

ifeq "${SVN_ROOT}" ""
$(error "SVN_ROOT not set")
endif

.EXPORT_ALL_VARIABLES:
.PHONY: all clean mmr inc

mmr: clean
	perl -I${SVN_ROOT}/bin ${SVN_ROOT}/bin/mmr-defs

clean:
	rm -rf *.bck

inc:
	yoda -goutdir ./temp -gen INC ${SVN_ROOT}/yoda/microglue.yda
	cp -p ./temp/design/include/microglue* .
	rm -r ./temp
	sed -i -f headers.sed microglue_device.h

