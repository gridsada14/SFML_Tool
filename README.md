# SFML_Learning
## Setup SFML in Visual Studio 
1. Add External (include, lib) same path as .sln
2. Add all .dll file same path as main.c 
3. Property page (Alt + Enter)
  i. C/C++ -> Genaral -> Additional Include Directories
```
$(SolutionDir)\External\include
```
 ii. Linker -> General -> Additional Library Directories 
```
$(SolutionDir)\External\lib
```
iii. Linker -> Input -> Additional Depencies
     *[configration: Release]*
```
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
sfml-system.lib
```
 iv. Linker -> Input -> Additional Depencies
     *[configration: Debug]*
```
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
sfml-system-d.lib
```
