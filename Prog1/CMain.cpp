#include <iostream>

/*int main() {
	std::cout << "Hello World\n"; // \n = escape문자로 문자열 안에 사용이 가능하나 출력은 안됨 n은 new line을 의미하여 다음 줄로 넘김 *std::endl과 같은 역할
	int a;
	a = 10;
	std::cout << a << std::endl; // a = 변수 출력 "a" = 문자로 출력
	std::cout << 'ab' << std::endl; // 'ab' =  문자 하나만 출력하기에 오류발생
	std::cout << "ab" << std::endl; // "ab" = 문자열을 의미하여 정상 출력
	std::cout << "Hello World\n" << std::endl; // 한 줄만 띄움
	std::cout << "Hello World" << \n; // 이스케이프 문자는 문자열안에서만!
	std::cout << "Hello World!\n" << "Hello\t World!" << std::endl; // \t = tap을 뜻함
	std::cout << "Hello " << "World!" << std::endl; // 그대로 Hello World!로 출력

}*/

/*int main() {
	int a;
	a = 10;
	std::cout << "a:" << a << std::endl;
	using namespace std;
	cout << a + 5 << endl;
}*/

int main() {
	
	using namespace std;
	int a, b;

	a = 30;
	b = 7;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / (double)b << endl;
	cout << a % b << endl;

}