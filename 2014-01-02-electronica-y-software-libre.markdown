--- 
layout: topic
status: publish
published: true
title: "Electr\xC3\xB3nica y software libre"
wordpress_id: 1035
wordpress_url: http://blog.elcacharreo.com/foros/topic/electronica-y-software-libre/
date: 2014-01-02 13:41:53 +01:00
categories: []

tags: []

comments: []

---
Soy usuario de [i]sofware[/i] libre desde hace tiempo y ahora estoy que empezando con la electrónica lo echo mucho de menos.

Lo que veo más [i]usable[/i] por ahora es KiCAD y para hacer esquemas y PCB. Para programar tampoco hay problema, en eso Linux suele ir bastante bien. De la simulación de µC y HDL, para lo que yo hago ahora, poco, tampoco me quejo. Pero para lo demás tengo bastantes cuestiones sin resolver:

[list=1]
[*][b]Programar microcontroladores PIC[/b]. Al final tengo que utilizar pk2cmd (no muy libre) ya que no he conseguido hacer funcionar USBProg (libre) en mi humilde PICKit2 y me parece que PICProg (libre) está asociado a RS232 y no le veo mucho futuro como para dedicarle tiempo a [i]echarlo a andar[/i].
[*][b]Sintetizar FPGA[/b]. Aunque he investigado algunas cosas (como Alliance o Qflow) no consigo nada que elimine la necesidad de usar Quartus (Altera) o ISE (Xilinx)
[*]Al tener que usar las aplicaciones de Xilinx o Altera, la cuestión de [b]grabar los programas en los PLD[/b] ya es menor pero, de no usarlos, tampoco sería tan fácil para mí: ¿Un Bus Pirate y [i]manualidades[/i]? ¿Un [i]JTAG del hombre pobre[/i] y buscar un ordenador con puerto paralelo? ¿Trabaja algo como un DSJTAG de 70 [i]euracos[/i], con OpenOCD, OpenWince JTAG, OpenJTAG...?
[*][b]Placas de desarrollo[/b]. Para aprender, me gustaría encontrar placas de prueba, al estio Arduino, en las que programar y probar FPGA pero, con lo que valen, me tiemblan las piernas pensando que algún día Debian o mi querido Guadalinex traigan paquetes en la propia distribución que soporten algunos de los [i]flecos[/i] ¿Alguien sabe hacia dónde evoluciona el sector?
[/list]

Y vosotros ¿Qué usáis?

¡Gracias!
