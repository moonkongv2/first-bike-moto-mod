---
layout: default
title: "01. Getting Started — Turning a FirstBIKE into a Little Motorcycle"
---

# 01. Getting Started — Turning a FirstBIKE into a Little Motorcycle

> 🎬 **Want to see the finished bike first?** This post focuses on the build process. [Watch a short clip of the finished bike on Instagram](https://www.instagram.com/reel/Dcsc5PiyJVf/).

My three-year-old is absolutely fascinated by motorcycles.

Whenever we spot one while walking, we rarely just pass by. We usually stop, walk over, and spend a while looking at it up close. Lately, he has even started recognizing different motorcycle models.

His interest has grown beyond simply thinking motorcycles are cool.

These days, what fascinates him most is **how they start and whether the headlight is on**.

He wants to know how different motorcycles are started, and whenever he sees one parked on the street, he carefully checks whether the headlight is still on and whether the engine is running.

He even uses those clues to guess what a delivery rider is doing.

"The light and engine are still on, so I think he just went to make a delivery. He'll come back down, so let's wait and watch him leave."

"Everything is off, so I think he parked it and went home."

To an adult, those clues may seem obvious—or easy to ignore because we normally do not pay much attention to them. But to him, they seem to be important signals for figuring out what is happening with a motorcycle.


## When the bicycle started becoming a motorcycle

Naturally, that fascination found its way into his bike rides too.

When he rides his FirstBIKE, he likes to imagine that he is one of the motorcycle riders he sees outside. He pretends to start, stop, park, and make deliveries just like they do.

Watching him play gave me an idea.

**What if his motorcycle could also start up and turn on its light, just like a real one?**

That was the beginning of this project.

<p align="center">
  <img src="../assets/images/01-riding.jpg" width="700">
</p>

<p align="center">
  <em>The FirstBIKE before any modifications</em>
</p>


## The first features I had in mind

I was not planning to build anything complicated at first.

There were really only two things I wanted it to do:

1. When the switch is turned on, **play a motorcycle start-up sound**
2. At the same time, **turn on an LED like a headlight**

And when the switch is turned off again, I wanted the light to turn off as well.

The controls also needed to be simple enough for a child to understand, with a sequence that felt similar to a real motorcycle:

**Switch ON → engine starts → light turns on**

That became the basic goal for the build.


## How should I build it?

At first, I thought a simple switch and a sound module would be enough.

But once I started thinking through the exact behavior I wanted, it became clear that I needed a small MCU to control everything. I eventually chose an **Arduino Nano**.

For the start-up sound, I decided to use a **DFPlayer Mini**, and for the lighting, a **5V LED strip**.

The rough parts list looked like this:

* Arduino Nano
* DFPlayer Mini
* Speaker
* LED strip
* ON/OFF switch
* Battery and power circuitry

On paper, the functionality still looked pretty simple.

But making an electronic circuit work on a desk is very different from mounting it on an actual bicycle.

I also had to figure out how large the battery needed to be, where to place the electronics, how to make the enclosure reasonably resistant to rain, and how to route longer wires from the enclosure to the switch and LEDs.

Water resistance also became an important constraint when choosing parts, which narrowed down the options more than I expected.

<p align="center">
  <img src="../assets/images/01-circuit_design.jpg" width="700">
</p>

<p align="center">
  <em>An early circuit design drafted through discussions with ChatGPT</em>
</p>

## Starting on the workbench

I still did not know exactly how I would package everything or mount it on the bike.

So instead of worrying about the final enclosure right away, I started by connecting the Arduino Nano and DFPlayer on a breadboard to answer a simpler question: **could the behavior I had in mind actually work?**

That meant writing some code, wiring up the speaker, and testing the LEDs and power supply.

And, as expected, the very first prototype came with several problems to solve.

In the next post, I'll go through the breadboard prototype and the process of getting the start-up sound and LEDs working together.

→ [02. Prototyping the Circuit](02-prototype.md)
