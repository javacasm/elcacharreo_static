---
title: Plantilla
layout: post
published: false
---
2015-11-12-AFAQ-map-float.md

La función map es solo para enteros. Si empelamos valores float puede salir casi cualquier cosa....

float fmap(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

http://forum.arduino.cc/index.php?topic=107106.0