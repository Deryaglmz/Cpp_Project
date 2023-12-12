
#include <iostream>

//prosedürel
/*
int main()
{
    int a = 10;
    int b = 20;
    std::cout << a + b;
}


//fonksiyonel

int topla(int a, int b) {
    return a + b;
}

void print(int p) {
    std::cout << p;

    int a = 10;
    int b = 20;
    print(topla(a , b));
}


//nesneye yönelik programlama

class Matematik {
public:
    int a;
    int b;
    int result = 0;

    void topla() {
        this->result = this->a + this->b;
    }
    void print() {
        std::cout << this->result;
    }
};

int main() {
    Matematik mat;
    mat.a = 10;
    mat.b = 20;
    mat.topla();
    mat.print();
}


// alan hesaplama örneği

class Hesapla {

   public:
       int genislik;
       int yukseklik;
       int alan;

       void giris() {
         std::cout << "yükseklik gir" << std::endl;
         std::cin >> yukseklik;

         std::cout << "genislik gir" << std::endl;
         std::cin >> genislik;
        }
       void hesapla() {
         alan = yukseklik * genislik;
         std::cout << alan;
         }
};

int main() {

    Hesapla hesap;
    hesap.giris();
    hesap.hesapla();
}

//

class Mesaj {

    public:
        std::string yazi;
        void yaz() {
            std::cout << yazi;
        }
};

int main() {

    Mesaj msg;
    msg.yazi = "merhaba";
    msg.yaz();

    Mesaj msg2;
    msg2.yazi = "hello";
    msg2.yaz();
}
*/

//
#include<string>

class Payment {
public:
    std::string paraBirimi = "tl";
    std::string tutar = "0.0";
    std::string hasCode = "123456789";

    void pay() {
        std::cout << "veriler bankaya gönderiliyor. Parabirimi:" + this->paraBirimi + "Tutar:" + this->tutar + "Kod:" + this->hasCode;
    }
};

int main() {
    Payment payment;
    payment.paraBirimi = "tl";
    payment.tutar = "50.6";
    payment.pay();
    return 0;
}
