cmake_minimum_required(VERSION 3.8)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp code1/4.cpp code1/5.cpp code1/1.cpp code1/2.cpp code1/3.cpp code1/6.cpp code1/7.cpp code1/8.cpp code1/9.cpp code1/10.cpp code1/44.cpp code1/11.cpp code1/12.cpp code1/13.cpp code1/131.cpp code1/132.cpp code1/139.cpp code1/140.cpp code1/322.cpp code1/300.cpp code1/70.cpp code1/62.cpp code1/63.cpp code1/53.cpp code1/55.cpp code1/45.cpp code1/152.cpp code1/411.cpp code1/35.cpp code1/153.cpp code1/154.cpp code1/34.cpp code2/69.cpp code2/74.cpp code2/33.cpp code2/81.cpp code2/93.cpp code2/89.cpp code2/115.cpp code2/14.cpp code2/58.cpp code2/15.cpp code2/16.cpp code2/18.cpp code2/454.cpp easy/657.cpp easy/617.cpp easy/680.cpp medium/677.cpp medium/678.cpp easy/561.cpp easy/557.cpp easy/669.cpp easy/671.cpp easy/575.cpp easy/566.cpp easy/637.cpp easy/521.cpp easy/653.cpp easy/167.cpp easy/606.cpp easy/538_tree.cpp easy/598_math.cpp easy/453_math.cpp)
add_executable(leetcode ${SOURCE_FILES})