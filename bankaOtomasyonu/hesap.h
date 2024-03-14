#pragma once
#include <iostream>

using namespace std;

class Hesap {

private:
	string isim;
	int hesapNo;
	float bakiye;

public:
	Hesap(string _isim, int _hesapNo, float _bakiye);

	void hesabaParaYatir(float paraMiktar�);
	void hesaptanParaCek(float paraMiktar�);
	void hesapDetaylar�Goruntule();

};