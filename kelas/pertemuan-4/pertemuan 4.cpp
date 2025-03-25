#include <iostream>
using namespace std;

// void tambah (int a, int b){
//     cout << a + b << endl;
// }

// int tambah (int a, int b){
//     cout << "ini fungsi int a + b" << endl;
//     return a + b;
// }

// double tambah (double a, double b){
//     cout << "ini fungsi double a + b" << endl;
//     return a + b;
// }

// int tambah (int a){
//     return a + a;
// }

// void perulangan()
// {
//     for (int i = 0; i < 5; i++)
//     {
//         if (i == 2)
//         {
//             return;
//         }
//         cout << i << endl;
//     }
    
// }

// int a = 10;

// int ubahNilai(int a){
//     return a;
// }

int faktorial(int n){
    if (n == 1){
        return 1;
    }
    return n * faktorial (n - 1);
}

int main() {
    // tambah(2,5);
    // perulangan;
    // int a = 10;
    // cout << "a sekarang : " << a << endl;
    // cout << "a di dalam fungsi : " << ubahNilai(20) << endl;
    // cout << "a sekarang : " << a << endl;

    // cout << "ini tambah int a + b: " << tambah(10,5) << endl;
    // cout << "ini tambah double a + b :" << tambah(10.5, 20.10) << endl;
    // cout << "ini tambah a doang : "  << tambah(20) << endl;
    return 0;
}
