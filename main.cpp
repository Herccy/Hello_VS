/*
#include<iostream>
int main() {
	int number = 0;
	const char* s = "hello world!!";
	std::cout << "�ַ�������ĸ��""\"" << *s << "\"" << std::endl;
	std::cout << "�ַ�������ĸ��ASCII���е���һ����""\"" << *s + 1 << "\"" << ",Ϊ""\"" << (char)(*s + 1) << "\"" << std::endl;
	std::cout << "�ַ����ڶ�����ĸ��""\"" << *(s + 1) << "\"" << std::endl;
	std::cout << number++ << " " << s << std::endl;
	int n = 3;
	for (int i = 0; i < n; i++) {
		std::cout << i + 2 << " " << s << std::endl;
		number++;
	}
	std::cout << "һ����ӡ��" << number << "��""\"" << s << "\"" << std::endl;
	getchar();
	return 0;
}*/
#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	// 2.1���������-ö��-����2.1
	//����a,b,c ��Χ0~9��abc��bccΪ��λ������ abc + bcc = 532����a��b��c
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

