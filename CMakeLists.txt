cmake_minimum_required(VERSION 3.10)
project(leetcode)




#set(Boost_INCLUDE_DIR G:/MinGW/include)
#set(Boost_LIBRARY_DIR G:/MinGW/lib)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})



set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp niuke/NumberOf1Between1AndN_Solution.cpp niuke/FirstApper.cpp niuke/deleteDuplication.cpp niuke/GetTreeNext.cpp niuke/isSymmetrical.cpp niuke/PrintTree.cpp)

add_executable(leetcode ${SOURCE_FILES})