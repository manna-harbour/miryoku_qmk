# Copyright 2022 Manna Harbour
# https://github.com/manna-harbour/miryoku

# alternative layout options

ifneq ($(strip $(MIRYOKU_ALPHAS)),)
  OPT_DEFS += -DMIRYOKU_ALPHAS_$(MIRYOKU_ALPHAS)
endif

ifneq ($(strip $(MIRYOKU_EXTRA)),)
  OPT_DEFS += -DMIRYOKU_EXTRA_$(MIRYOKU_EXTRA)
endif

ifneq ($(strip $(MIRYOKU_TAP)),)
  OPT_DEFS += -DMIRYOKU_TAP_$(MIRYOKU_TAP)
endif

ifneq ($(strip $(MIRYOKU_NAV)),)
  OPT_DEFS += -DMIRYOKU_NAV_$(MIRYOKU_NAV)
endif

ifneq ($(strip $(MIRYOKU_CLIPBOARD)),)
  OPT_DEFS += -DMIRYOKU_CLIPBOARD_$(MIRYOKU_CLIPBOARD)
endif

ifneq ($(strip $(MIRYOKU_LAYERS)),)
  comma := ,
  $(foreach x,$(subst $(comma), ,$(MIRYOKU_LAYERS)),\
     $(eval OPT_DEFS += -DMIRYOKU_LAYERS_$(x)))
endif

ifneq ($(strip $(MIRYOKU_THUMBKEYS_KEYCODE)),)
  comma := ,
  $(foreach x,$(subst $(comma), ,$(MIRYOKU_THUMBKEYS_KEYCODE)),\
     $(eval OPT_DEFS += -DMIRYOKU_THUMBKEY_$(word 1,$(subst =, ,$(x)))_KC=$(word 2,$(subst =, ,$(x)))))
endif

ifneq ($(strip $(MIRYOKU_THUMBKEYS_LAYER)),)
  comma := ,
  $(foreach x,$(subst $(comma), ,$(MIRYOKU_THUMBKEYS_LAYER)),\
     $(eval OPT_DEFS += -DMIRYOKU_THUMBKEY_$(word 1,$(subst =, ,$(x)))_LAYER=$(word 2,$(subst =, ,$(x)))))
endif

# subset mappings

ifneq ($(strip $(MIRYOKU_MAPPING)),)
  OPT_DEFS += -DMIRYOKU_MAPPING_$(MIRYOKU_MAPPING)
endif

# kludges

# thumb combos
ifeq ($(strip $(MIRYOKU_KLUDGE_THUMBCOMBOS)),yes)
  COMBO_ENABLE = yes
  OPT_DEFS += -DMIRYOKU_KLUDGE_THUMBCOMBOS
endif
