# NEAT

## Build and Run:
1. Install [python](https://www.python.org/)
2. Install scons:
    ```
    python -m pip install scons
    ```
3. Clone the project and switch to the project directory:
    ```
    git clone https://github.com/Schlomon/NEAT.git
    cd NEAT
    ```
4. Build the project with scons:
    ```
    scons
    ```
5. Execute  
    On Windows:
    ```
    bin/neat.exe
    ```
    Or on Linux:
    ```
    bin/neat
    ```
## Setup VSCode for contribution
1. Follow steps 1.-3. from the [Build and Run](#build-and-run) instructions
2. Install [VSCode](https://code.visualstudio.com/) and open the project folder in VSCode.
3. Install the official `C/C++ Extension` by Microsoft. Make sure to read the Prerequisites.
4. A launch configuration called `Debug` is already configured. To debug the project just press `F5`.
