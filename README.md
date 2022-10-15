# SFML_Learning
## Setup SFML in Visual Studio 
1. Add External (include, lib) same path as .sln
2. Add all .dll file same path as main.c 
3. Property page (Alt + Enter)
        1. C/C++ -> Genaral -> Additional Include Directories
```
$(SolutionDir)\External\include
```
        2. Linker -> General -> Additional Library Directories 
```
$(SolutionDir)\External\lib
```
        3. Linker -> Input -> Additional Depencies
        *[configration: Release]*
```
sfml-graphics.lib
sfml-window.lib
sfml-audio.lib
sfml-network.lib
sfml-system.lib
```
        4. Linker -> Input -> Additional Depencies
        *[configration: Debug]*
```
sfml-graphics-d.lib
sfml-window-d.lib
sfml-audio-d.lib
sfml-network-d.lib
sfml-system-d.lib
```
