cmake_minimum_required(VERSION 4.1)
project(C___Singly_Linked_List)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___Singly_Linked_List
        main.cpp
        "CPP Files/LinkedList.cpp"
        "Headers/LinkedList.h"
        Headers/Node.h
        "CPP Files/Node.cpp")
