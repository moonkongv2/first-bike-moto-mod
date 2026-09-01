---
layout: default
title: "03. Building the Circuit for the Bike"
---

# 03. Building the Circuit for the Bike

> 🎬 **Want to see the finished bike first?** This post focuses on the build process. [Watch a short clip of the finished bike on Instagram](https://www.instagram.com/reel/Dcsc5PiyJVf/).

The breadboard prototype had proved that the idea worked.

The next step was getting off the breadboard and onto a real board.

**I needed to turn a circuit that only worked on my desk into something I could actually put on the bike.**

A breadboard is perfect for testing, but there was no way I could mount one on a bike that would constantly be moving and vibrating. So the final circuit had to be soldered onto a perfboard.

## Rethinking the power setup

My original plan was to use a 5 V power bank.

But once I started trying to fit everything inside the enclosure, it was simply too bulky. There was also the possibility that a power bank could shut itself off automatically when the circuit was drawing only a small amount of current.

So I switched to a **small 3.7 V lithium battery + 5 V DC-DC boost converter** instead.

I also added a 2 A fuse for protection and a PWM dimmer so I could adjust the LED brightness.

The enclosure would eventually have to hold roughly this set of parts:

* Arduino Nano
* DFPlayer Mini
* DC-DC boost converter
* Battery
* Fuse
* PWM dimmer
* Capacitors
* Perfboard

## The surprisingly difficult part: layout

The wiring itself was already decided on the schematic.

The real question was **how to fit all of it inside a small ABS enclosure.**

Parts such as the DC-DC converter and fuse holder did not look especially large on the circuit diagram, but once I put everything together, they took up much more space than I expected.

I started looking for smaller alternatives and moved the Arduino and DFPlayer around on the perfboard several times while trying to find a layout that made sense.

This was where I really started to feel the difference between designing a circuit and building something physical.

I installed a program called DIYLC and used it to try different component layouts before soldering anything.

<p align="center">
  <img src="../assets/images/03-pcb-layout.jpg" width="700">
</p>

<p align="center">
  <em>Planning the component placement on the perfboard before soldering — not the final version</em>
</p>

## Time to solder

Once the layout was reasonably settled, I started moving the breadboard connections over to the perfboard one by one.

Because several components shared VCC and GND, I created common power rails on the board. For parts such as the Arduino and DFPlayer that I might want to replace later, I used headers so they could be removed instead of being soldered permanently in place.

It had also been a very long time since I had done this much soldering, so there was plenty of trial and error.

Some terminals were surprisingly difficult to get solder to stick to, and fitting multiple wires into a limited amount of space took much longer than I expected.

Still, by checking each connection with a multimeter as I went, I was eventually able to transfer the breadboard circuit onto the perfboard.

<p align="center">
  <img src="../assets/images/03-perfboard-back.jpg" width="350">
</p>

<p align="center">
  <img src="../assets/images/03-perfboard-front.jpg" width="350">
</p>

<p align="center">
  <em>Moving the prototype circuit onto the perfboard</em>
</p>

## The circuit was done. The harder part was next.

After finishing the soldering, I powered everything up again.

The startup sound played and the LEDs worked just as they had on the breadboard.

At this point, the electronics were almost finished.

But one major problem remained:

**How was I going to fit all these parts and wires into an enclosure, run the switch and LED wiring across the bike, and make the whole thing survive getting wet?**

For me, this turned out to be the harder part of the project.

In the next post, I'll cover the ABS enclosure, external wiring, switch installation, waterproofing, and the work needed to actually mount everything on the bike.

→ [04. Enclosure & Installation](04-enclosure.md)
