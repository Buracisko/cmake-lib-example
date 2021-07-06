# Example of custom library using CMake
## Usage
Optimaly build out of source in the build directory.
```bash
mkdir build
```

Dont forget to specify build type.
```bash
cmake -S ./dummyApp -B ./build -DCMAKE_BUILD_TYPE=Debug
```
```bash
cmake -S ./dummyApp -B ./build -DCMAKE_BUILD_TYPE=Release
```

On Linux, build & run using make
```bash
make -C ./build
./build/bin/DummyApp
```
