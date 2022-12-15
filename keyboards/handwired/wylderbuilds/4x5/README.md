# pico/handwired/wylderbuilds/4x5

wylderbuild variant of dactyl_manform using a Pico Pi rather than the default mcu

* Hardware Supported: Pico Pi
* Hardware Availability: https://www.raspberrypi.com/products/raspberry-pi-pico/ 

## building

I chose to fork the repo and use the github action workflows to build mine.

## flashing first time
follow the wylderbuild instructions to put the keyboard into its bootloader. if done correctly a new drive will appear in your computer. then copy the uf2 file from the build into that drive and the keyboard will restart with the updated firmware automatically. 

## flashing after first time
once updated to miryoku, follow the miryoku instructions for putting the keyboard into bootloader mode.

# beware
* my wylderbuild uses nonstandard gpio pins for serial communcitation. you can see that here: [config.h](./config.h#L13). if other wylder builds use the normal gpios then this will have to change.
* my wylderbuild didn't work, as expected, with the default miryoku keymap; my bottom thumbkey was mapped to another less convenient thumbkey. so i altered the miryoku keymap (./keymaps/manna-harbour_miryoku/config.h#L22) to compensate. maybe other wylderbuilds don't need that change. compare with the [default dactyl manuform keymap](../../dactyl_manuform/keymaps/manna-harbour_miryoku/config.h#L22) understand changes.

# Credit section
@bullwinkle3000 for building the board. and @manna-harbour for helping get miryoku onto it quickly.
