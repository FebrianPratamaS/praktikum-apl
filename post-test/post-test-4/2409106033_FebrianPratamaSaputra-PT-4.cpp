#include <iostream>
using namespace std;

struct Obat {
    string nama;
    string jenis;
    double harga;
    int stok;
};

bool login() {
    string namaLogin, passwordLogin;
    string namaBenar = "Febrian", passwordBenar = "033";
    int percobaanLogin = 0;

    while (percobaanLogin < 3) {
        cout << "Masukkan Username: ";
        cin >> namaLogin;
        cout << "Masukkan Password: ";
        cin >> passwordLogin;

        if (namaLogin == namaBenar && passwordLogin == passwordBenar) {
            cout << "Login berhasil! Selamat datang pengguna program.\n";
            return true;
        } else {
            cout << "Username atau Password salah! Silahkan coba lagi.\n";
            percobaanLogin++;
        }
    }

    cout << "Maaf! Terlalu banyak percobaan gagal. Program akan segera berhenti.\n";
    return false;
}

void tambahObat(Obat daftarObat[], int &jumlah) {
    cout << "\nMasukkan Nama Obat: "; getline(cin, daftarObat[jumlah].nama);
    cout << "Masukkan Jenis Obat: "; getline(cin, daftarObat[jumlah].jenis);
    cout << "Masukkan Harga Obat: "; cin >> daftarObat[jumlah].harga;
    cout << "Masukkan Stok Obat: "; cin >> daftarObat[jumlah].stok;
    cin.ignore();
    jumlah++;
    cout << "Obat berhasil ditambahkan!\n";
}

void tampilkanObat(const Obat daftarObat[], int jumlah) {
    if (jumlah == 0) {
        cout << "Tidak ada obat dalam sistem.\n";
    } else {
        cout << "\nDaftar Obat:\n";
        for (int i = 0; i < jumlah; i++) {
            cout << "Nama: " << daftarObat[i].nama
                 << ", Jenis: " << daftarObat[i].jenis
                 << ", Harga: " << daftarObat[i].harga
                 << ", Stok: " << daftarObat[i].stok << "\n";
        }
    }
}

void ubahObat(Obat daftarObat[], int jumlah) {
    string ubah;
    cout << "\nMasukkan Nama Obat yang ingin diubah: "; getline(cin, ubah);
    bool ditemukan = false;
    for (int i = 0; i < jumlah; i++) {
        if (daftarObat[i].nama == ubah) {
            cout << "Masukkan Nama Baru: "; getline(cin, daftarObat[i].nama);
            cout << "Masukkan Jenis Baru: "; getline(cin, daftarObat[i].jenis);
            cout << "Masukkan Harga Baru: "; cin >> daftarObat[i].harga;
            cout << "Masukkan Stok Baru: "; cin >> daftarObat[i].stok;
            cin.ignore();
            cout << "Obat berhasil diperbarui!\n";
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) {
        cout << "Nama obat tidak ditemukan!\n";
    }
}

void hapusObat(Obat daftarObat[], int &jumlah) {
    string hapus;
    cout << "\nMasukkan Nama Obat yang ingin dihapus: "; getline(cin, hapus);
    bool ditemukan = false;
    for (int i = 0; i < jumlah; i++) {
        if (daftarObat[i].nama == hapus) {
            for (int j = i; j < jumlah - 1; j++) {
                daftarObat[j] = daftarObat[j + 1];
            }
            jumlah--;
            cout << "Obat berhasil dihapus!\n";
            ditemukan = true;
            break;
        }
    }
    if (!ditemukan) {
        cout << "Nama obat tidak ditemukan!\n";
    }
}

int main() {
    if (!login()) return 0;

    Obat daftarObat[100];
    int jumlah = 0, pilihan;

    do {
        cout << "\nManajemen Stok Obat Apotek";
        cout << "\n1. Tambah Obat";
        cout << "\n2. Tampilkan Obat";
        cout << "\n3. Ubah Obat";
        cout << "\n4. Hapus Obat";
        cout << "\n5. Keluar";
        cout << "\nPilih menu: ";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1:
                tambahObat(daftarObat, jumlah);
                break;
            case 2:
                tampilkanObat(daftarObat, jumlah);
                break;
            case 3:
                ubahObat(daftarObat, jumlah);
                break;
            case 4:
                hapusObat(daftarObat, jumlah);
                break;
            case 5:
                cout << "\nTerima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "\nPilihan tidak valid! Silahkan coba lagi.\n";
        }
    } while (pilihan != 5);

    return 0;
}