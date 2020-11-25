# generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

MOUSEKEY_ENABLE = yes # Mouse keys
EXTRAKEY_ENABLE = yes # Audio control and System control
AUTO_SHIFT_ENABLE = yes # Auto Shift

SRC += manna-harbour_miryoku.c # keymap

# select alternative base layer alphas
ifneq ($(strip $(MIRYOKU_ALPHAS)),)
  OPT_DEFS += -DMIRYOKU_ALPHAS_$(MIRYOKU_ALPHAS)
endif

# select alternative nav
ifneq ($(strip $(MIRYOKU_NAV)),)
  OPT_DEFS += -DMIRYOKU_NAV_$(MIRYOKU_NAV)
endif

# select alternative subset mappings
ifneq ($(strip $(MIRYOKU_MAPPING)),)
  OPT_DEFS += -DMIRYOKU_MAPPING_$(MIRYOKU_MAPPING)
endif

# select alternative clipboard
ifneq ($(strip $(MIRYOKU_CLIPBOARD)),)
  OPT_DEFS += -DMIRYOKU_CLIPBOARD_$(MIRYOKU_CLIPBOARD)
endif
