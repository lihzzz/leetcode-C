//
// Created by lh on 2018/3/25.
//

#ifndef LEETCODE_TOOL_H
#define LEETCODE_TOOL_H

#include <vector>
#include <random>
using  namespace std;

vector<int> generateRandomArray(int size,int value);
int getsum(vector<int> data);

void heapInsert(vector<int>& arr,int index);
void heapify(vector<int>& arr,int start,int size);
void quicksort(vector<int>& arr,int l,int r);
vector<int> partition(vector<int>&arr,int l,int r);
void swap(vector<int>& arr,int a,int b);
#endif //LEETCODE_TOOL_H
