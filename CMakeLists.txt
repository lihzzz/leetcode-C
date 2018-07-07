cmake_minimum_required(VERSION 3.10)
project(leetcode)




#set(Boost_INCLUDE_DIR G:/MinGW/include)
#set(Boost_LIBRARY_DIR G:/MinGW/lib)
#find_package(Boost COMPONENTS system filesystem REQUIRED)
#include_directories(${Boost_INCLUDE_DIR})



set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp niuke/NumberOf1Between1AndN_Solution.cpp niuke/FirstApper.cpp
        niuke/deleteDuplication.cpp niuke/GetTreeNext.cpp niuke/isSymmetrical.cpp niuke/PrintTree.cpp niuke/HasSubtree.cpp
        "LeetCode/third/455. Assign Cookies.cpp" "LeetCode/third/435. Non-overlapping Intervals .cpp" "LeetCode/third/452. Minimum Number of Arrows to Burst Balloons .cpp" "LeetCode/third/406. Queue Reconstruction by Height .cpp"
        "LeetCode/third/763. Partition Labels .cpp" LeetCode/third/605.canPlaceFlowers.cpp LeetCode/third/392.isSubsequence.cpp LeetCode/third/665.checkPossibility.cpp Datastruct/stackAndQueue/stackReverse.cpp Datastruct/stackAndQueue/getMaxWindow.cpp Datastruct/stackAndQueue/removeNthFromEnd.cpp Datastruct/stackAndQueue/reverseBetween.cpp Datastruct/stackAndQueue/tmp.cpp lintcode/maxPathSum.cpp LeetCode/third/minPathSum.cpp LeetCode/third/combinationSum.cpp "LeetCode/third/Longest Increasing Subsequence .cpp" "LeetCode/third/Longest Uncommon Subsequence I.cpp")

add_executable(leetcode ${SOURCE_FILES})