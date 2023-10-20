#!/bin/bash

# Run the qmk compile command
qmk compile -kb crkbd -km manna-harbour_miryoku -e MIRYOKU_ALPHAS=QWERTY -e MIRYOKU_NAV=VI

# Check the exit status of the previous command
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
else
    echo "Compilation failed. Please check the command and try again."
fi

