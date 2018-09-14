﻿#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<stdint.h>
using namespace std;

//罗马数字包含以下七种字符：I， V， X， L，C，D 和 M。
//
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
//
//通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//
//I 可以放在 V(5) 和 X(10) 的左边，来表示 4 和 9。
//X 可以放在 L(50) 和 C(100) 的左边，来表示 40 和 90。
//C 可以放在 D(500) 和 M(1000) 的左边，来表示 400 和 900。
//给定一个罗马数字，将其转换成整数。输入确保在 1 到 3999 的范围内。
//
//示例 1:
//输入: "III"
//输出 : 3
//	
//示例 2 :
//输入 : "IV"
//输出 : 4
//	
//示例 3 :
//输入 : "IX"
//输出 : 9
//	
//示例 4 :
//输入 : "LVIII"
//输出 : 58
//解释 : C = 100, L = 50, XXX = 30, III = 3.
//	
//示例 5 :
//输入 : "MCMXCIV"
//输出 : 1994
//解释 : M = 1000, CM = 900, XC = 90, IV = 4.

int romanToInt(string s) {
	int result = 0;
	int i = 0;
	while (i <s.size())
	{
		if (s[i] == 'I' && i+1<s.size() && (s[i + 1] == 'V' || s[i + 1] == 'X'))
		{
			if (s[i + 1] == 'V')
				result += 4;
			else if (s[i + 1] == 'X')
				result += 9;

			i += 2;
			continue;
		}

		if (s[i] == 'X' && i + 1<s.size() && (s[i + 1] == 'L' || s[i + 1] == 'C'))
		{
			if (s[i + 1] == 'L')
				result += 40;
			else if (s[i + 1] == 'C')
				result += 90;

			i += 2;
			continue;
		}

		if (s[i] == 'C' && i + 1<s.size() && (s[i + 1] == 'D' || s[i + 1] == 'M'))
		{
			if (s[i + 1] == 'D')
				result += 400;
			else if (s[i + 1] == 'M')
				result += 900;

			i += 2;
			continue;
		}

		switch (s[i]) {
		case 'I':result += 1; break;
		case 'V':result += 5; break;
		case 'X':result += 10; break;
		case 'L':result += 50; break;
		case 'C':result += 100; break;
		case 'D':result += 500; break;
		case 'M':result += 1000; break;
		default:break;
		}
		i += 1;
	}
	return result;
}

void main() {
	//test1
	int a = romanToInt("III");
	int b = romanToInt("IV");
	int c = romanToInt("IX");
	int d = romanToInt("LVIII");
	int e= romanToInt("MCMXCIV");
	cout << a << endl << b << endl << c << endl << d << endl<<e<<endl;//3，4，9，58，1994
	//test end
	system("pause");
}
