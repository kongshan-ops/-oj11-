#include <iostream>;
#include <string>;
namespace std{
	using std::cout;
	using std::endl;
	using std::cin;
	using std::string;
	using std::getline;
}
//int main() {
//	char a, b, c;
//	std::string line;
//	std::getline(std::cin, line);
//	while (!line.empty()) {
//		a = line[0];
//		b = line[1];
//		c = line[2];
//	if (a > b) {
//		if (b > c) {
//			std::cout << c << " " << b << " " << a << std::endl;
//		}
//		else {
//			if( a > c ){
//			std::cout << b << " " << c << " " << a << std::endl;
//		}
//		else {
//			std::cout << b << " " << a << " " << c << std::endl;
//		}
//		}
//	}
//	else {
//		if(a > c) {
//			std::cout << c << " " << a << " " << b << std::endl;
//		}
//		else {
//			if (b > c) {
//				std::cout << a << " " << c << " " << b << std::endl;
//			}
//			else {
//				std::cout << a << " " << b << " " << c << std::endl;
//			}
//		}
//	}
//	std::getline(std::cin, line);
//	}
//}