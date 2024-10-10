#pragma once
class Tacka
{
public:
	Tacka(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int vratiX() const { return x; }
	int vratiY() const { return y; }
private:
	int x, y;
};

