#pragma once
#include "Tacka.h"
#include <iostream>
using namespace std;
class Duz
{
public:
	void duzina();
	Duz(const Tacka& a, const Tacka& b) : a(a), b(b) {};
	friend std::ostream& operator<<(std::ostream& os, const Duz& duz) {
		os << "[" << duz.a.vratiX() << ", " << duz.a.vratiY() << "] -> "
			<< "[" << duz.b.vratiX() << ", " << duz.b.vratiY() << "]    ";
		return os;
	}
private:
	Tacka a, b;
	
};

