#include <iostream>
using namespace std;

struct Orang{
    string nama;
    int umur;   
};

int main(){

    // cout << "Pointer yang menunjuk ";
    // cout << "ke arah elemen array"<<endl;
    // int b[5] = {1,2,3,4,5,};
    // int *bPtr = b;
    // for (int i = 0; i < 5; i++){
    // // cout << bPtr <<endl;
    // // cout << *bPtr <<endl;
    // bPtr++;
    // }

    // int primeNumber[] = {
    //     2,3,5,7,11,13
    // };

    // int (*ptrPrimeNumber)[6] = &primeNumber;

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << (ptrPrimeNumber)[i] << endl;
    // }
    
    // Orang orang;
    // orang.nama = "Kalingga";
    // orang.umur= 20;

    // Orang* orang2 = &orang;

    // cout << orang.nama << endl;
    // cout << orang2 -> nama << endl;

    // Orang* orang3 = new Orang();

    // orang3 -> nama;

    // // * = Dereference Operator
    // // & = address of operator

    // int stack = 64;
    // int stackSnowball = 16;

    // // int isi = stack;
    // // cout << stack << endl;
    // // cout << isi << endl;;
    // // stack = 69;

    // int* isi = &stack;
    // // stack
    // // isi
    // // isi adalah pointer ke stack


    // cout << stack << endl;
    // cout << *isi << endl;

    // stack = 16;
    // cout << "----Setelah stack diubah----" << endl;
    // cout << stack << endl;
    // cout << *isi << endl;

    // cout << "----Setelah var isi diubah----" << endl;
    // // *isi = *isi + 10;
    // *isi = 2;
    // cout << stack << endl;
    // cout << *isi << endl;

    // // cout << "stack: " << stack << endl;
    // // cout <<"&stack: " << &stack << endl;
    
    // // cout << "stackSnowball: " << stackSnowball << endl;
    // // cout <<"&stackSnowball: " << &stackSnowball << endl;


    int stack = 10;
    int* ptrStack = &stack;

    int** ptrPtrStack = &ptrStack;

    int*** ptrPtrPtrStack = &ptrPtrStack;
    
    cout << *ptrStack << endl;
    cout << **ptrPtrStack << endl;
    cout << ***ptrPtrPtrStack << endl;


    return 0;
}