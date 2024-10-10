#pragma once
#include "Duz.h"
#include "Tacka.h"
class Node
{
public:
	Duz value;
	Node* next;
	Node(const Duz& q) : value(q), next(nullptr) {};
};

