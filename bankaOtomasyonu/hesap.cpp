#include "hesap.h"

Hesap::Hesap(string _isim, int _hesapNo, float _bakiye) {
	Hesap::bakiye = 0;
	
	isim = _isim;
	bakiye = _bakiye;
	hesapNo = _hesapNo;

}

void Hesap::hesabaParaYatir(float paraMiktari) {

	Hesap::bakiye = Hesap::bakiye + paraMiktari;
}

void Hesap::hesaptanParaCek(float paraMiktari) {

	if (bakiye < paraMiktari)
	{
		cout << "Yetersiz Bakiye !!" << endl;

		throw std::exception("Yetrsiz Bakiye !!");
	}
	else
	{
		Hesap::bakiye = Hesap::bakiye - paraMiktari;
	}

}

void Hesap::hesapDetaylarıGoruntule() {

	cout << "Hesap Sahibi İsmi: " << Hesap::isim << endl;
	cout << "Hesap No: " << Hesap::hesapNo << endl;
	cout << "Hesap Bakiyesi: " << Hesap::bakiye << endl;
}