include ../../build.config

CFLAGS = $(DEFINES) $(INCLUDES)

define make_sub_dir
set -e;										\
	for subdir in $(SUBDIR); do						\
		if [ -d "$${subdir}" ]; then					\
			$(MAKE) $(@) --directory="$${subdir}"; \
		fi								\
	done
endef


SUBDIR := env etc log org po_etc po_fa po_fe po_in site

.PHONY: all

all:
#	$(shell mkdir lib)
	@$(make_sub_dir)

clean:
	@$(make_sub_dir)
#	$(shell rm -rf lib)
