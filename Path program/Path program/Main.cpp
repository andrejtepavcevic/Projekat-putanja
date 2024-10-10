#include<iostream>
#include "Tacka.h"
#include "Duz.h"
#include "math.h"
#include "Node.h"
#include "Putanja.h"
using namespace std;
void Duz::duzina() {
	int dx = this->a.vratiX() - this->b.vratiX();
	int dy = this->a.vratiY() - this->b.vratiY();
	std::cout << sqrt(dx*dx + dy*dy);
}
int main(){
	Tacka a(5, 5);
	Tacka b(7, 8);
	Tacka c(9, 10);
	Tacka d(9, 9);
	Tacka e(2, 2);
	Tacka f(3, 3);
	Duz q1(a,b);
	Duz q2(b,c);
	Duz q3(c,d);
	Duz q4(d,e);
	Duz q5(e, f);
	Putanja putic;
	putic.insertHead(q1);
	putic.insertHead(q2);
	putic.insertHead(q3);
	putic.insertHead(q4);
	putic.insertHead(q5);
	std::cout << "Putanja: ";
	putic.printList();
	return 0;
}