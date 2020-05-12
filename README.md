# UDACITY_cpp

- Using cmake:
- Inside the folder with source code, create a file CMakeLists.txt:

```
cmake_minimum_required(VERSION 3.17)
project(HelloWorld)
add_executable(hello hello.cpp)
```

To create .exe :
```
$ cmake .
$ cmake -- build .
```
