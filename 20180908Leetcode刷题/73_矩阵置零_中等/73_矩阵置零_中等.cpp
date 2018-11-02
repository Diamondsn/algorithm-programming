﻿#include<string>
#include<vector>
#include<iostream>
#include<algorithm>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

//给定一个 m x n 的矩阵，如果一个元素为 0，则将其所在行和列的所有元素都设为 0。请使用原地算法。
//
//示例 1:
//输入: 
//[
//  [1,1,1],
//  [1,0,1],
//  [1,1,1]
//]
//输出: 
//[
//  [1,0,1],
//  [0,0,0],
//  [1,0,1]
//]
//
//示例 2:
//输入: 
//[
//  [0,1,2,0],
//  [3,4,5,2],
//  [1,3,1,5]
//]
//输出: 
//[
//  [0,0,0,0],
//  [0,4,5,0],
//  [0,3,1,0]
//]
//
//进阶:
//一个直接的解决方案是使用  O(mn) 的额外空间，但这并不是一个好的解决方案。
//一个简单的改进方案是使用 O(m + n) 的额外空间，但这仍然不是最好的解决方案。
//你能想出一个常数空间的解决方案吗？

void setZeroes(vector<vector<int>>& matrix) {

}

int main() {
	//test1
	vector<vector<int>>matrix = { { 1, 1, 1 },
	{ 1, 0, 1 },
	{ 1, 1, 1 } };
	setZeroes(matrix);
	for (vector<int>vec : matrix)
	{
		for (int i : vec)
			cout << i << ",";
		cout << endl;
	}

	//test2
	matrix = { { 0, 1, 2, 0 },
	{ 3, 4, 5, 2 },
	{ 1, 3, 1, 5 } };
	setZeroes(matrix);
	for (vector<int>vec : matrix)
	{
		for (int i : vec)
			cout << i << ",";
		cout << endl;
	}
	//test end
	system("pause");
	return 0;
}