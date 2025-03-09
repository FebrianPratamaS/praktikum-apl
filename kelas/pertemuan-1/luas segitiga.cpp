#include <iostream>
using namespace std;

int main() {
    float a;
	float t;
	float luas;
	
	cout << "Masukkan alas segitiga: ";
	cin >> a;
	cout << "Masukkan tinggi segitiga: ";
	cin >> t;
	luas = a * t / 2;
	cout << "Luas Segitiga adalah " << luas;
    return 0;
}
