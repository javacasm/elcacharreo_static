---
title: Plantilla
layout: post
published: false
---
2015-10-15-Flashing-hex.md


avrdude -U flash:w:Marlin_hephestos_xl_Spanish.hex:i -vv -p atmega2560 -b 115200 -c stk500v2 -P /dev/ttyUSB0

