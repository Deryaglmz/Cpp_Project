
#include <iostream>

int main()
{
    int sayi1 = 5;
    int sayi2 = 10;
    int sonuc;

    sonuc = sayi1 + sayi2;

    std::cout << sonuc;


    int sayi1, sayi2, sonuc;
    sayi1 = 5;
    sayi2 = 10;

    sonuc = sayi1 + sayi2;

    std::cout << sonuc;

    //
    char d = 'A';
    std::cout << d;

    //
    char d = 10;
    char a = 10;
    std::cout << a+d;


    char d = 10;
    char a = 10;
    std::cout << d;

    char d[] = "merhaba";
    std::cout << d;



    signed int s = -1;
    unsigned int u = 1;

    if (s < u) {
        std::cout << "kucuk";
    }
    else {
        std::cout << "kucuk degil";
    }



    unsigned short x{ 65535 };
    std::cout << "x degeri:" << x << '\n';

    x = 65536;
    std::cout << "x yeni deger:" << x << '\n';

    x = 65537;
    std::cout << "x yeni deger:" << x << '\n';


    unsigned int x{ 3 };
    unsigned int y{ 5 };

    std::cout << "x - y" << x << '\n';     //sonucu işaretsiz bir tamsayının içinde tutmaya çalışıyor


    9.876500000000000000000000
    9.8765 x 10 üzeri 24     5.9736e24 e=üs
    std::cout << std::setprecision(9);
    std::cout << 9876543.21 << x << '\n';


    float f{123456789.0f};
    std::cout << std::setprecision(6);
    std::cout << f << '\n';               //bilimsel ifadeyi gösterir


    double { 123456789.0 };
    std::cout << std::setprecision(16);
    std::cout << f << '\n';               //bilimsel ifadeyi gösterir


    double f{ 1200000000 };
    std::cout << std::setprecision(16);
    std::cout << f << '\n';

    int8_t d = 115;
    std::cout << d << '\n';

    // bool
    // true // doğru // evet // olumlu
    // false // yanlış // hayır // olumsuz

    bool a = true;
    std::cout << sizeof(a);

    auto d = "test";

    int a = 5;
    int b(2);
    int c{};


    // literal constans
    bool isActive{ true };
    std::cout << "hello world";

    // sybolic constans
    const int x{ 4 };   //const değer değişmez, yazmasaydım x değişirdi
    x = 15
    const double pi{ 3ç14 };


    // kapalı tür dönüşümü
    int a = 10;
    a = 1.4
    std::cout << a;

    // parantez kullanım amaçlarından bir tanesi derleme zamanı hata yakalama
    // int abcdef{1.1};   süslü parantez uyarı vererek veri kaybı yaşamamıza engel olur

    //açoık tür dönüşümü
    int a = 10;
    a = static_cast<int>(5.9);
    std::cout << a;

    char ch{97 };
    std::cout << static_cast<int>(ch);


    //aritmatik operatörler
    std::cout << 12 + 5;

    int a = 10;
    int b = 5;
    std::cout << a + b;

    int a = 10;
    int b = 5;
    int sonuc = a + b;
    std::cout << sonuc;

    //eksiltme ve arttırma operatörleri
    int a = 10;
    int b = 5;
    int sonuc = --a ;
    std::cout << sonuc;    sonuc=9


    int a = 10;
    int b = 5;
    int sonuc = ++a ;
    std::cout << sonuc;    sonuc=11


    int a = 10;
    int b = 5;
    int sonuc = a++ ;
    std::cout << sonuc;    //sonuc=10


    //aritmetik atama operatörleri

    int a = 10;
    int b = 5;
    a += b;
    //a = a + b;
    std::cout << a << std::endl;    //sonuc=15


    //değişken &

    int a = 10;
    std::cout << &a;    //sonuc=bellek zadresini verir:008FFC64

    //pointer(işaretçi)
    int a = 10;
    int* aPtr = &a;
    std::cout << *aPtr;

    int a = 10;

    int * aPtr = &a;
    int* aPtr = &a;
    int *aPtr = &a;
    int*aPtr=&a;  //üç yıldız da aynı şeyi temsil eder

    std::cout << *&*&*&*&a;  //çalışır

    //
     int a = 10;
     int* aPtr = &a;
     std::cout << aPtr;  //10 un bellek adresini alır

     int a = 10;
     int* aPtr = &a;
     std::cout << *aPtr;  //10 un kendisini alır

     int a = 10;
     int* aPtr = &a;
     std::cout << &aPtr; // pointerin bellek adresini alır

     int a = 10;
     int* aPtr = &a;
     std::cout << &*aPtr;  //10 un bellek adresini alır

     int a = 10;
     int* aPtr = &a;
     std::cout << *&*aPtr;  //10 un kendisini alır
}