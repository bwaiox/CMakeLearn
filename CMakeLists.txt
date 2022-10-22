# cmake 版本指定
cmake_minimum_required(VERSION 3.0.0)
# 工程名称 cpp11 版本号 0.1.0
project(cpp11 VERSION 0.1.0)

# 设置C++版本
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# 指定一个文件集合
set(MAIN_H
    test.h
)
# 指定另一个文件集合
set(MAIN_CPP
    main.cpp
)
# 也可以用file(GLOB) 指定文件集合
#file(GLOB MAIN_CPP ./*.cpp)

# 还可以用这个方式指定文件集合
# AUX_SOURCE_DIRECTORY("./" MAIN_CPP)

# 指定生成工程按集合组织代码
source_group(maincpp FILES ${MAIN_CPP})
source_group(mainh FILES ${MAIN_H})

# 添加include目录
include_directories(include)

# 添加引用的lib目录
link_directories(lib)

# 指定生成exe程序
add_executable(cpp11 ${MAIN_CPP} ${MAIN_H})

# 指定exe要link dll1
target_link_libraries(cpp11
    PUBLIC dll1
)


add_subdirectory(exe1)
add_subdirectory(dll1)

