#pragma once
#include <iostream>
#include "Duz.h"
#include "Tacka.h"
#include "Node.h"
class Putanja
{
private:
	Node* head;
public:
	Putanja() : head(nullptr) {};
    //Umetanje novih elemenata na pocetak liste
	void insertHead(Duz q) {
		Node* newNode = new Node(q);
		newNode->next = head;
		head = newNode;
	}
    //Stampanje liste
    void printList() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->value;
            current = current->next;
        }
        std::cout << "kraj liste" << std::endl; // Kraj liste
    }

    // Destruktor za oslobađanje memorije
    ~Putanja() {
        Node* current = head;
        while (current != nullptr) {
            Node* nextNode = current->next; // Sačuvaj sledeći čvor
            delete current;                  // Oslobodi trenutni čvor
            current = nextNode;              // Pređi na sledeći čvor
        }
    }
};

