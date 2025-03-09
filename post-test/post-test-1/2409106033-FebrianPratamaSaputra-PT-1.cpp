#include <iostream>
using namespace std;

int main() {
    string nama;
    string password;
    int percobaan_login;

    while (percobaan_login < 3) {
        cout << "\nMasukkan nama: ";
        cin >> nama;
        cout << "Masukkan password: ";
        cin >> password;

        if (nama == "Febrian" && password == "033") {
            cout << "Login sukses! Selamat datang Febrian.";
            break;
        } else {
            if (percobaan_login < 2) {
            cout << "Login gagal! Silahkan coba lagi.";
            }
            percobaan_login ++;
        }
    }
    if (percobaan_login == 3) {
        cout << "Maaf, terlalu banyak percobaan. Silahkan coba lagi nanti.";
        return 0;
    }

    int pilihan;
    float suhu;
    bool menu = true;

    while (menu) {
        cout << "\nMenu Konversi Suhu:\n";
        cout << "Input selain yang di menu untuk keluar.\n";
        cout << "1. Celcius ke Fahrenheit, Reamur, dan Kelvin\n";
        cout << "2. Fahrenheit ke Celcius, Reamur, dan Kelvin\n";
        cout << "3. Reamur ke Celcius, Fahrenheit, dan Kelvin\n";
        cout << "4. Kelvin ke Celcius, Fahrenheit, dan Reamur\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan >= 1 && pilihan <= 4) {
            cout << "Masukkan nilai suhu: ";
            cin >> suhu;
        }

        switch (pilihan)
        {
        case 1:
            cout << "Fahrenheit: " << (suhu * 9/5) + 32 << "\n";
            cout << "Reamur: " << suhu * 4/5 << "\n";
            cout << "Kelvin: " << suhu + 273.15 << "\n";
            break;
        case 2:
            cout << "Celcius: " << (suhu - 32) * 5/9 << "\n";
            cout << "Reamur: " << (suhu - 32) * 4/9 << "\n";
            cout << "Kelvin: " << (suhu - 32) * 5/9 + 273.15 << "\n";
            break;
        case 3:
            cout << "Celcius: " << suhu * 5/4 << "\n";
            cout << "Fahrenheit: " << (suhu * 9/4) + 32 << "\n";
            cout << "Kelvin: " << (suhu * 5/4) + 273.15 << "\n";
            break;
        case 4:
            cout << "Celcius: " << suhu - 273.15 << "\n";
            cout << "Fahrenheit: " << (suhu - 273.15) * 9/5 + 32 << "\n";
            cout << "Reamur: " << (suhu - 273.15) * 4/5 << "\n";
            break;
        default:
            cout << "Terima kasih untuk menggunakan program ini.";
            menu = false;
            break;
        }
    }
    return 0;
}