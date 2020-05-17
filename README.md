# UDACITY_cpp

## Using g++

```
$ g++ hello.cpp -o hello
```

## Using cmake

- Inside the folder with source code, create a folder build\
- Inside build create a file CMakeLists.txt:

```
cmake_minimum_required(VERSION 3.17)
project(HelloWorld)
add_executable(hello hello.cpp)
```

To create .exe :
```
$ cmake ..
$ cmake -- build .
```
