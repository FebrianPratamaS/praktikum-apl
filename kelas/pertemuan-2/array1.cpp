#include <iostream>
using namespace std;

int main() {
    int number[3] = {1,2,4};
    // Hapus
    for (int i = 1; i < 3; i++)
    {
        number[i] = number[i + 1];
        // number[1] = number[2]
    }
    
    // Nampilin
    for (int i : number)
    {
     cout << "Nilai array : " << i << endl;   
    }
    for (auto i = 0 ; i <size(number); i++)
    {
        cout << "Nilai array: " << number[i] << endl;
    }

    // number[1] = 5;
    // number[2] = 10;

    // for (int i : number)
    // {
    //  cout << "Nilai array : " << i << endl;   
    // }
    
    

    // int totalByte = sizeof(number);
    // int singleByte = sizeof(number[0]);
    // int panjangArray = sizeof(number) / sizeof(number[0]);
    // int panjangArray2 = size(number);

    // for (int i : number)
    // {
    //     cout << "Nilai array : " << i << endl;    
    // }
    

    // for (int i = 0; i < panjangArray; i++)
    // {
    //     cout << "Nilai array : " << number[i] << endl;
    // }

    // cout << totalByte << "\n" 
    // << singleByte << "\n"
    // << panjangArray << "\n"
    // << panjangArray2;

    // cout << sizeof(number) / sizeof(number[0]);
    // cout << "Versi c++ saya : " << __cplusplus;
    return 0;
}