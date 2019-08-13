# BigBaseC
A minimal base for Grand Theft Auto V in C.
For educational purposes only.

## Features
* Native invoking
* Fibers
* Unloading at runtime
* All contained in a DLL with a size of ~6.5KB

To save space, the crossmap is loaded from disk at runtime.
Copy `BigBaseC-Crossmap.bin` into your game directory.

## Building
To build BigBaseC the following tools are required:
* Visual Studio 2019
* [Premake 5.0](https://premake.github.io/download.html) in your PATH

To set up the build environment, clone the repository and run the GenerateProjects.bat batch file.
Now, you can open the solution, and build it in Visual Studio.

