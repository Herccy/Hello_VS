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
}