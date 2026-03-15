to build for the ps3 you need 2 things :
  visual studio 2012 with the src for lce
  the sony ps3 sdk 4.75 (or similar)
then edit the common/Consoles_App.cpp
somewhere in the middle of the file (just search if (pMinecraft->levels.data[i] != nullptr) until you find it)
you will find : if (pMinecraft->levels.data[i] != nullptr) 
now this crashes the build so
you need to change nullptr to NULL
it will then correctly build.
to debug you need to use the prodg debugger and have a hacked ps3 with dex firmware to connect it to you pc.
ill write how to create .pkg instead of getting a .self that crashes on console later since i didnt find the solution.
i will not make a pre compiled build you will need to build it yourself if you think there is a virus feel free to check and even modify it, its your right
ofc if you need the sdk / src i cant give it to you even if you go to my guns.lol and contact me on matrix i wont be able to give you the link(get it pls ?)
