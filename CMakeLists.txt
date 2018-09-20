cmake_minimum_required(VERSION 3.9.4)
project(leetcode)




#set(Boost_INCLUDE_DIR G:/MinGW/include)
#set(Boost_LIBRARY_DIR G:/MinGW/lib)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})



set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp
         test.cpp "LeetCode/hard/146. LRU Cache.cpp" work/xunlei/1.cpp work/xunlei/2.cpp work/huawei/2.cpp work/huya/1.cpp)

add_executable(leetcode ${SOURCE_FILES})