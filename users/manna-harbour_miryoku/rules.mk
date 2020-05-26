# generated from users/manna-harbour_miryoku/miryoku.org  -*- buffer-read-only: t -*-

MOUSEKEY_ENABLE = yes        # Mouse keys
EXTRAKEY_ENABLE = yes        # Audio control and System control


ifneq ($(strip $(MIRYOKU_BASE)),)
  OPT_DEFS += -DMIRYOKU_BASE_$(MIRYOKU_BASE)
endif
