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
}