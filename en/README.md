# First Bike Moto Mod

[한국어](../ko/README.md)

A DIY project that adds motorcycle-inspired sound, lights, and controls to a FirstBIKE balance bike.

The project started with a simple idea: make the bike feel a little more like a real motorcycle. The features themselves are straightforward, but building something that could actually live on the bike meant dealing with much more than the circuit itself — power stability, wiring, soldering, component layout, waterproofing, speaker volume, and enclosure design all mattered.

🌐 **[View the build log as a website](https://moonkongv2.github.io/first-bike-moto-mod/en/)**

## Project Goals

- Play a motorcycle engine-start sound when the switch is activated
- Turn on LED lighting
- Control the system with an Arduino Nano and DFPlayer Mini
- Build a compact battery-powered circuit
- Design wiring and an enclosure that can be mounted on the bike
- Add basic waterproofing for outdoor use

## Build Log

The completed build is documented in five short episodes.

1. [Getting Started](01-start.md)
2. [Prototyping the Circuit](02-prototype.md)
3. [Building the Circuit for the Bike](03-circuit-build.md)
4. [Enclosure & Installation](04-enclosure.md)
5. [Final Build & Improvements](05-final.md)

Each post includes photos from the build, problems I ran into, the solutions I chose, and lessons learned along the way.

## Main Components

- Arduino Nano
- DFPlayer Mini
- microSD card
- Speaker
- LED strip
- Switch
- 3.7 V battery
- 5 V DC-DC boost converter
- Capacitors
- Perfboard
- Water-resistant ABS enclosure

The Arduino sketch is available at [`arduino/first_bike_moto_mod/first_bike_moto_mod.ino`](../arduino/first_bike_moto_mod/first_bike_moto_mod.ino).

## Current Status

The original goals are complete: the bike plays the startup sound, turns on the LED, and the electronics are mounted in a water-resistant enclosure. The main things I would still like to improve are speaker volume and enclosure size. 🏍️
