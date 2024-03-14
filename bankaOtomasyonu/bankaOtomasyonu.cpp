#include <iostream>
#include "hesap.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "turkish");


    Hesap hesap1 = Hesap("Halil Esen", 276756, 7895.32);
    Hesap hesap2 = Hesap("İnci Yılmaz", 675401, 0);

    hesap1.hesabaParaYatir(200);
    hesap1.hesaptanParaCek(100);
    hesap1.hesapDetaylarıGoruntule();


    
    hesap2.hesapDetaylarıGoruntule();

    try {
        hesap2.hesaptanParaCek(100);
    }
    catch(std::exception e){
        cout << e.what() << endl;   
    }
    

    cout << endl;
    return 0;
}
