/*
#include<iostream>
int main() {
	int number = 0;
	const char* s = "hello world!!";
	std::cout << "字符串首字母是""\"" << *s << "\"" << std::endl;
	std::cout << "字符串首字母在ASCII码中的下一个是""\"" << *s + 1 << "\"" << ",为""\"" << (char)(*s + 1) << "\"" << std::endl;
	std::cout << "字符串第二个字母是""\"" << *(s + 1) << "\"" << std::endl;
	std::cout << number++ << " " << s << std::endl;
	int n = 3;
	for (int i = 0; i < n; i++) {
		std::cout << i + 2 << " " << s << std::endl;
		number++;
	}
	std::cout << "一共打印了" << number << "个""\"" << s << "\"" << std::endl;
	getchar();
	return 0;
}*/
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	// 2.1：暴力求解-枚举-例题2.1
	//整数a,b,c 范围0~9，abc，bcc为三位数，且 abc + bcc = 532，求a，b，c
	for (int a = 0; a <= 9; ++a) {
		for (int b = 0; b <= 9; ++b) {
			for (int c = 0; c <= 9; ++c) {
				if (a * 100 + b * 110 + c * 12 == 532) {
					printf("%d %d %d\n", a, b, c);
				}
			}
		}
	}
	return 0;
}

