# generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control

SRC += manna-harbour_miryoku.c # keymap

# select alternative base layer alphas
ifneq ($(strip $(MIRYOKU_BASE)),)
  OPT_DEFS += -DMIRYOKU_BASE_$(MIRYOKU_BASE)
endif

# select alternative subset mappings
ifneq ($(strip $(MIRYOKU_LAYOUT)),)
  OPT_DEFS += -DMIRYOKU_LAYOUT_$(MIRYOKU_LAYOUT)
endif
