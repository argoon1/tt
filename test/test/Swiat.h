#pragma once
#include <iostream>;
#include "Organizm.h";
class Swiat
{

public:
	Swiat() {};
	Organizm* organizmy[20][20] = { {new Organizm(this)} };

	virtual void wykonajTure();
	virtual void rysujSwiat();
	void test() {
		//organizmy[0][0]->akcja();
	}
};