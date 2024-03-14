cmake_minimum_required(VERSION 3.28)
project(Reading)

set(CMAKE_CXX_STANDARD 17)

add_executable(Reading main.cpp
        Line/times.cpp
        Line/times.h
        Line/output.cpp
        Line/output.h
        Line/starting.cpp
        Line/starting.h
        Line/correct.cpp
        Line/correct.h
        Line/features.cpp
        Line/features.h
        Line/standard.cpp
        Line/standard.h
        Line/integer.cpp
        Line/integer.h
        Line/point.cpp
        Line/point.h)
