cmake_minimum_required(VERSION 3.9.4)
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
        work/sort/SelectSort.cpp work/sort/BubbleSort.cpp work/sort/InsertSort.cpp work/sort/MergeSort.cpp work/sort/HeapSort.cpp work/sort/QuickSort.cpp work/sort/shellSort.cpp work/KMP.cpp work/climbStairs.cpp "work/House Robber.cpp" work/toutiao/1.cpp work/toutiao/3.cpp work/xiecheng/1.cpp work/xiecheng/2.cpp work/xiecheng/3.cpp work/meituan/1.cpp work/meituan/2.cpp work/wangyi/1.cpp work/wangyi/2.cpp work/toutiao/toutiao2/1.cpp work/toutiao/toutiao2/2.cpp work/toutiao/toutiao2/3.cpp work/toutiao/toutiao2/4.cpp work/toutiao/toutiao2/5.cpp work/jd/1.cpp work/jd/2.cpp work/jd/3.cpp)

add_executable(leetcode ${SOURCE_FILES})