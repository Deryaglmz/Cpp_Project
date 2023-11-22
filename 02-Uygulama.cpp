
#include <iostream>

//function

void mesaj() {
    std::cout << "merhaba dunya\n";
}
int main()
{
    mesaj();
}


void mesaj(char msg,char msg2) {
    std::cout << msg << msg2;
}
int main()
{
    mesaj('A','B');
}


int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}
int main()
{
    std::cout << topla(5,5);
}


void mesaj() {
    std::cout << "test";
}

int topla(int sayi1, int sayi2) {
    mesaj();
    return sayi1 + sayi2;
}
int main()
{
    std::cout << topla(5,5);
}



int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

int main()
{
    int a = 10;
    int b = 10;
    std::cout << topla(a, b);
}


// ileriye dönük bildirim
int topla(int sayi1, int sayi2); //bildirim


int main()
{
    int a = 10;
    int b = 10;
    std::cout << topla(a, b);
}

int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;           //tanımlama

}



//aşırı yükleme (function overload)

int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2) {
    return sayi1 + sayi2;
}

int main()
{
    int a = 10;
    int b = 10;
    std::cout << topla(a, b);
}


//
int topla(int sayi1, int sayi2) {
    return sayi1 + sayi2;
}

double topla(double sayi1, double sayi2) {
    return sayi1 + sayi2;
}

int main()
{
    std::cout << topla('a', 'b');   // çalışır
}


//parametre varsayıan değer verme
#include<string>

void print(std::string text) {
    std::cout << 'text';
}

int main()
{
    print("merhaba");  //() içine bişey yazmazsam çalışmaz
}

//
#include<string>
void print(std::string text = "", int a = 0, bool as = false) {
    std::cout << 'text';
}

int main()
{
    print(); //boş olsa bile  (= "" ) burası sayseide çalışır
}


//callback function (fonk. geri arama)
int topla(int a, int b) {
    return a + b;
}

int getir(int(*fint)(int, int)) {
    int a = fint(10, 10);
    return a;
}

int main() {
    int b = getir(topla);
    std::cout << b;
}

//
using fint = int(*)(int, int);

int topla(int a, int b) {
    return a + b;
}
int getir(fint f) {
    int a = f(10, 10);
    return a;
}
int main() {
    int b = getir(topla);
    std::cout << b;
}


//inline function
inline int topla(int a, int b) {
    return a + b;
}

int main() {
    a + b;      //topla(10, 10); bunun yerine a + b; bunu koyar
}



// akış kontrılleri
int main(){

    int a = 0;
    int b = 0;

    std::cin >> a;
    std::cin >> b;

    std::cout << a + b;
}

//
int main() {

    int a = 0;
    int b = 0;

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "sonuc" << a + b;
}

//
int main() {

    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz" << std::endl;
    std::cin >> islem;

    if (islem == '+') {
        std::cout << "sonuc:" << a + b;
    }
    else {
        std::cout << "islem yok";
    }
}


// if
int main() {

    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz" << std::endl;
    std::cin >> islem;

    //if (islem == '+')
    //if (a > 10 || a < 5)
    //if (a > 10 && a < 15)
    //if (a != 100)
    //if ((a+5) > 100 || (a+5) > 10 )

    if (a <= 10) {
        std::cout << "sonuc:" << a + b;
    }
    else {
        std::cout << "islem yok";
    }
}


//
int main() {

    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz" << std::endl;
    std::cin >> islem;

    if (a > 10) {
        std::cout << "sonuc:" << a + b;
    }
    else if (a > 100) {
        std::cout << "else if sonuc:" << a + b;
    }
    else {
        std::cout << "hata";
    }
}

//switch
int main() {
    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz" << std::endl;
    std::cin >> islem;

    switch (islem) {
    case '+':
        std::cout << "sonuc:" << a + b;
    case '-':
        std::cout << "sonuc:" << a - b;
    case '*':
        std::cout << "sonuc:" << a * b;
    case '/':
        std::cout << "sonuc:" << a / b;
    }
}

//
int main() {
    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz" << std::endl;
    std::cin >> islem;

    switch (islem) {
    case '+':
        std::cout << "sonuc:" << a + b;
        break;
    case '-':
        std::cout << "sonuc:" << a - b;
        break;
    case '*':
        std::cout << "sonuc:" << a * b;
        break;
    case '/':
        std::cout << "sonuc:" << a / b;
        break;

    default:std::cout << "bilinmeyen işlem:";
        break;

    }
    std::cout << "bitti:";
}

//for
int main() {
    int a = 0;
    int b = 0;
    char islem = '+';

    std::cout << "birinci sayi" << std::endl;
    std::cin >> a;
    std::cout << "ikinci sayi" << std::endl;
    std::cin >> b;

    std::cout << "islem giriniz" << std::endl;
    std::cin >> islem;

    for (int i = 0; i < 10; i++) {
        std::cout << "dongu" << i << std::endl;
    }
}

// while
int main() {
    int a = 0;
    int b = 0;
    char islem = '+';

    while (true)
    {
        std::cout << "birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinci sayi" << std::endl;
        std::cin >> b;

        std::cout << "islem giriniz" << std::endl;
        std::cin >> islem;

        switch (islem) {
        case '+':
            std::cout << "sonuc:" << a + b;
            break;
        case '-':
            std::cout << "sonuc:" << a - b;
            break;
        case '*':
            std::cout << "sonuc:" << a * b;
            break;
        case '/':
            std::cout << "sonuc:" << a / b;
            break;
        default:std::cout << "bilinmeyen işlem:";
            break;
        }
    }
}

//
int main() {
    int a = 0;
    int b = 0;
    char islem = '+';

    while (islem != 'e')
    {
        std::cout << "birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinci sayi" << std::endl;
        std::cin >> b;

        std::cout << "islem giriniz" << std::endl;
        std::cin >> islem;

        switch (islem) {
        case '+':
            std::cout << "sonuc:" << a + b;
            break;
        case '-':
            std::cout << "sonuc:" << a - b;
            break;
        case '*':
            std::cout << "sonuc:" << a * b;
            break;
        case '/':
            std::cout << "sonuc:" << a / b;
            break;
        default:std::cout << "bilinmeyen işlem:";
            break;
        }
    }
}

//
int main() {


    int a = 0;
    int b = 0;
    char islem = '+';

    for (int i = 0; i < 10; i++)
    {

        std::cout << "birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinci sayi" << std::endl;
        std::cin >> b;

        std::cout << "islem giriniz" << std::endl;
        std::cin >> islem;

        if (islem == 'e') {
            break;
        }

        switch (islem) {
        case '+':
            std::cout << "sonuc:" << a + b;
            break;
        case '-':
            std::cout << "sonuc:" << a - b;
            break;
        case '*':
            std::cout << "sonuc:" << a * b;
            break;
        case '/':
            std::cout << "sonuc:" << a / b;
            break;
        default:std::cout << "bilinmeyen işlem:";
            break;
        }
    }
}


//do while
int main()
{
    do
    {
        std::cout << "bilinmeyen işlem";
    } while (false);
}


// continue
int main() {


    int a = 0;
    int b = 0;
    char islem = '+';

    for (int i = 0; i < 10; i++)
    {

        std::cout << "birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinci sayi" << std::endl;
        std::cin >> b;

        std::cout << "islem giriniz" << std::endl;
        std::cin >> islem;

        if (islem == 'e') {
            continue;
        }

        switch (islem) {
        case '+':
            std::cout << "sonuc:" << a + b;
            break;
        case '-':
            std::cout << "sonuc:" << a - b;
            break;
        case '*':
            std::cout << "sonuc:" << a * b;
            break;
        case '/':
            std::cout << "sonuc:" << a / b;
            break;
        default:std::cout << "bilinmeyen işlem:";
            break;
        }
    }
}


// goto
int main() {


    int a = 0;
    int b = 0;
    char islem = '+';

    for (int i = 0; i < 10; i++)
    {

        std::cout << "birinci sayi" << std::endl;
        std::cin >> a;
        std::cout << "ikinci sayi" << std::endl;
        std::cin >> b;

        std::cout << "islem giriniz" << std::endl;
        std::cin >> islem;

        if (islem == 'e') {
            goto stop;
        }

        switch (islem) {
        case '+':
            std::cout << "sonuc:" << a + b;
            break;
        case '-':
            std::cout << "sonuc:" << a - b;
            break;
        case '*':
            std::cout << "sonuc:" << a * b;
            break;
        case '/':
            std::cout << "sonuc:" << a / b;
            break;
        default:std::cout << "bilinmeyen işlem:";
            break;
        }
    }
    std::cout << "devam";

stop:
    std::cout << "durdu";
}

