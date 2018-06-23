cmake_minimum_required(VERSION 3.10)
project(leetcode)




#set(Boost_INCLUDE_DIR G:/MinGW/include)
#set(Boost_LIBRARY_DIR G:/MinGW/lib)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})



set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp niuke/NumberOf1Between1AndN_Solution.cpp niuke/FirstApper.cpp
        niuke/deleteDuplication.cpp niuke/GetTreeNext.cpp niuke/isSymmetrical.cpp niuke/PrintTree.cpp niuke/HasSubtree.cpp
        "LeetCode/third/455. Assign Cookies.cpp" "LeetCode/third/435. Non-overlapping Intervals .cpp" "LeetCode/third/452. Minimum Number of Arrows to Burst Balloons .cpp" "LeetCode/third/406. Queue Reconstruction by Height .cpp")

add_executable(leetcode ${SOURCE_FILES})