// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "ConsoleApplication1.h"

int mymax(int a, int b)
{
	return a < b ? a : b;
}

int inc(int x) { return x + 1; }
int dec(int x) { return x - 1; }

int max3(int a, int b, int c) {
	if (a > b && a > c) { return a; }
	else if (b > a && b > c) { return b; }
	else return c;

}
std::string create_szo(int x, char c) {
	std::string ki = "";
	for (int i = 0; i < x; i++) {
		ki += c;
	}
	return ki;
}

std::string create_szo2(int x, std::string c) {
	std::string ki = "";
	for (int i = 0; i < x; i++) {
		ki += c;
	}
	return ki;
}

std::string szoresz(std::string a, int kezdoindex, int vegindex) {
	std::string szoreszlet = a.substr(kezdoindex, vegindex);
	return szoreszlet;
}

int main()
{
	using namespace std;
	int a, b;
	a = 5;
	b = 2;
	int x;
	x = mymax(a, b);
	cout << "max(3,5,8)=" << max3(8, 5, 6) << "\n";
	//eloszor logikai kifejezes. ha a kifejezes igaz, akkor kettospont elotti lesz az ertek, ha hamis, akkor azutani. tomoriti a nyelvet.
	//if (a > b) x = a; else x = b;
	std::cout << x << "\n";
	cout << inc(5);
	cout << dec(5);
	cout << create_szo(5, 'a');
	cout << create_szo2(5, "alma");
	cout << szoresz("alma a fa", 0, 4);


}

//a header fileba a fuggvenyek fejet gyuktom ossze.

		

		