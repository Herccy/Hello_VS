#include<stdio.h>
#include<iostream>
int main() {
	int number = 0;
	printf("1 hello world!!\n");
	number++;
	int n = 3;
	for (int i = 0; i < n; i++) {
		std::cout << i + 2 << " " << "hello world!!" << std::endl;
		number++;
	}
	std::cout << "一共打印了" << number << "个""\"hello world!!""\"" << std::endl;
	getchar();
	return 0;
}