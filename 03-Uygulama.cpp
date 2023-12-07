
#include <iostream>
#include<iterator>


//diziler

int main()
{

    int puanlar[5]{ 10,20,30,40 };

    std::cout << puanlar[2];
}


//
int main()
{

    int puanlar[5]{ 10,20,30,40 };

    std::cout << puanlar;    //bellek adresini verir
    std::cout << *puanlar;    // sıfırıncı indexin numarasını verir (10)
}

//
int main()
{

    int puanlar[5]{ 10,20,30,40 };

    int* ptr = puanlar;

    std::cout << ptr;   //bellek adresini tutar
}


//

int main()
{

    int puanlar[5]{ 10,20,30,40 };

    int* ptr = puanlar+1;  //bir sonraki adrese geç (+2 deseydim: iki sonraki adrese giderdi)

    std::cout << ptr;   
}

//  
/*
int main()
{

    int puanlar[5]{ 10,20,30,40 };

    puanlar[0]
        int* ptr = puanlar;

    puanlar[1]
        int* ptr = puanlar + 1;

    puanlar[2]
        int* ptr = puanlar + 2;

    std::cout << ptr;
    
}
*/

//
int main()
{

    int puanlar[3]{ 10,20,30 };

    int* ptr = puanlar +3;  //0-2 arasında değer tanımladım 3. bir değer olmadığı için kod çalışmaz 

    std::cout << puanlar[3];    
}



// dizilerde for döngüsü
int main()
{

    int puanlar[3]{ 10,20,30 };

    for (int i = 0; i < 3; i++)
    {
        std::cout << puanlar[i];  //ekranda: 102030 yazar
    }
}


// iç içe diziler

int main() {

    int dizi[1][1][1][1]
    {
        {
            {
                {
                    1
                }
            }
        }
    };

    std::cout << dizi[0][0][0][0];
}


//
int main() {

    int dizi[3][2]
    {
        {
            1,2
        },
        {
            5,9
        },
        {
            10,25
        }
    };

    std::cout << dizi[1][0];
}



//
int main() {

    int dizi[3][2]
    {
        {
            1,2
        },
        {
            5,9
        },
        {
            10,25
        }
    };
    for (int i = 0; i < 3; i++)
    {
        for (int i2 = 0; i2 < 2; i2++) {
            std::cout << dizi[1][i2] << std::endl;
        }
    }
    
}


// dizi eleman sayısı

int main() {

    int dizi[3][2]
    {
        {
            1,2
        },
        {
            5,9
        },
        {
            10,25
        }
    };
    std::cout << std::size(dizi);
}

//
int main() {

    const int sayi = 3;
  //constexpr 
    int dizi[sayi][2]
    {
        {
            1,2
        },
        {
            5,9
        },
        {
            10,25
        }
    };
    std::cout << std::size(dizi);
}



//dizi ile fonskiyona geçmek

void test(int a) {
    a = 100;
    std::cout << a;
}

int main()
{
    int a = 25;
    test(a);     // burdaki a değeri geçerli olur yukardaki değil
}


//
void test(int dizi[3]) {
    std::cout << dizi;  //ekranda bellek adresi çıkar
}

int main()
{
    int dizi[3]{ 1,2,3 };
    test(dizi);  
}



//
void test(int dizi[3]) {
    
    for (int i = 0; i < 3; i++)
    {
        std::cout << dizi[i];  //ekranda sonuç çıkar:(123)
    }
}

int main()
{
    int dizi[3]{ 1,2,3 };
    test(dizi);
}



//
/*
void test(int dizi[3], int size) {  //dizinin eleman sayısını görmek için size parametresini verdik

    for (int i = 0; i < size; i++)
    {
        std::cout << dizi[i]; 
    }
}

int main()
{

    int dizi[3]{ 1,2,3 };
    test(dizi,size);
}*/


//
void test(int dizi[]) {  

    for (int i = 0; i < 3; i++){
        std::cout << dizi[i];
    }
}

int main()
{
    int a[]{ 1,2,3 };  //a nın içine dizinin kaç elemanlı olduğunu yazmasam bile otomatik olarak o hesaplar
   
    test(a);
}


//
// int dizi[]
// int *dizi    ikiside aynı şey

void test(int* dizi) {

    for (int i = 0; i < 3; i++) {
        std::cout << dizi[i];
    }
}

int main()
{
    int a[]{ 1,2,3 };  

    test(a);
}


//
void test(char* dizi) {
    std::cout << dizi;   //yazının kendisini verir
}

int main()
{
    char a[]{ "omer" };
    test(a);
}



//
void test(char* dizi) {
    std::cout << &dizi;   //bellek adresini verir
}

int main()
{
    char a[]{ "omer" };
    test(a);
}