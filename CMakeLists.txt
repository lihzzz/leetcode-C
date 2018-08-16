cmake_minimum_required(VERSION 3.10)
project(leetcode)




#set(Boost_INCLUDE_DIR G:/MinGW/include)
#set(Boost_LIBRARY_DIR G:/MinGW/lib)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})



set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp niuke/NumberOf1Between1AndN_Solution.cpp niuke/FirstApper.cpp
        "LeetCode/third/Restore IP Addresses.cpp" niuke/InversePairs.cpp LeetCode/third/reversePairs.cpp
        niuke/maxInWindows.cpp niuke/FirstAppearingOnce.cpp niuke/GetMedian.cpp niuke/again_1/TreeDepth.cpp
        niuke/again_1/IsBalanced_Solution.cpp niuke/again_1/FindNumsAppearOnce.cpp niuke/again_1/FindContinuousSequence.cpp
        common_header.h test.cpp
         work2018/sort/SelectSort.cpp work2018/sort/BubbleSort.cpp work2018/sort/InsertSort.cpp work2018/sort/MergeSort.cpp  work2018/sort/HeapSort.cpp work2018/sort/QuickSort.cpp work2018/sort/shellSort.cpp work2018/KMP.cpp work2018/climbStairs.cpp "work2018/House Robber.cpp")

add_executable(leetcode ${SOURCE_FILES})