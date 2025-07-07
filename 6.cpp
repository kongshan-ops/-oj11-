#include<iostream>
#include<cmath>
#include<string>
using namespace std;
bool shiruinian(int year);
int month_days(int year,int month);
int main() {
	string a;
	int y, m, d;
	while (std::getline(cin, a)&&!a.empty()) {
		//y = 1000 * (int)a[0] + 100 * (int)a[1] + 10 * (int)a[2] + (int)a[3]-1000*48-100*48-10*48-48;
		//m = 10 * (int)a[5] + (int)a[6] - 10 * 48 - 48;
		//d= 10 * (int)a[8] + (int)a[9] - 10 * 48 - 48;
		int pos1 = a.find('/');
		int pos2 = a.find('/', pos1 + 1);
		y = stoi(a.substr(0, pos1));   //stoi：将n进制的字符转化为是十进制
		m = stoi(a.substr(pos1 + 1, pos2 - pos1 - 1));
		d = stoi(a.substr(pos2 + 1));
		for (int i = 1; i < m; i++) {
			d += month_days(y, i);
		}
		cout << d << endl;
	}
}
bool shiruinian(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return 1;
	return 0;
}
int month_days(int year,int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return 31;
	else if (month == 2) {
		if (shiruinian(year))
			return 29;
		else
			return 28;
	}
	else
		return 30;
}