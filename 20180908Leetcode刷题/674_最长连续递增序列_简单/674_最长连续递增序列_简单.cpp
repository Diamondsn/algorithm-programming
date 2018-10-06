﻿#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include"math.h"
using namespace std;

//给定一个未经排序的整数数组，找到最长且连续的的递增序列。
//
//示例 1:
//输入: [1,3,5,4,7]
//输出: 3
//解释: 最长连续递增序列是 [1,3,5], 长度为3。
//尽管 [1,3,5,7] 也是升序的子序列, 但它不是连续的，因为5和7在原数组里被4隔开。 
//
//示例 2:
//输入: [2,2,2,2,2]
//输出: 1
//解释: 最长连续递增序列是 [2], 长度为1。
//
//注意：数组长度不会超过10000。

int findLengthOfLCIS(vector<int>& nums) {
	if (nums.size() < 1)return 0;
	int max = 1,cur=nums[0],length=1;
	for (int i = 1; i < nums.size(); ++i) {
		if (nums[i] > cur)
			length++;
		else
			length = 1;
		cur = nums[i];
		if (length > max)
			max = length;
	}
	return max;
}

int main() {
	//test1
	vector<int>nums = { 1,3,5,4,7 };
	int a = findLengthOfLCIS(nums);

	//test2
	nums = { 2,2,2,2,2 };
	int b = findLengthOfLCIS(nums);
	cout << a << endl << b << endl;
	//test end

	system("pause");
	return 0;
}