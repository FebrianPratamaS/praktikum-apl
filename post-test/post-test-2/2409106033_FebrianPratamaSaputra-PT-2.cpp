#include <iostream>
using namespace std;

int main() {
    string namaLogin, passwordLogin;
    string namaBenar = "Febrian", passwordBenar = "033";
    int percobaanLogin = 0;
    
    while (percobaanLogin < 3) {
        cout << "Masukkan Username: "; cin >> namaLogin;
        cout << "Masukkan Password: "; cin >> passwordLogin;
        
        if (namaLogin == namaBenar && passwordLogin == passwordBenar) {
            cout << "Login berhasil! Selamat datang pengguna program.\n";
            break;
        } else {
            cout << "Username atau Password salah! Silahkan coba lagi.\n";
            percobaanLogin++;
        }
    }
    
    if (percobaanLogin == 3) {
        cout << "Maaf! Terlalu banyak percobaan gagal. Program akan segera berhenti.\n";
        return 0;
    }
    
    string namaObat[100], jenisObat[100];
    double hargaObat[100];
    int stokObat[100], jumlah = 0, pilihan;

    do {
        cout << "\nManajemen Stok Obat Apotek";
        cout << "\n1. Tambah Obat";
        cout << "\n2. Tampilkan Obat";
        cout << "\n3. Ubah Obat";
        cout << "\n4. Hapus Obat";
        cout << "\n5. Keluar";
        cout << "\nPilih menu: ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "\nMasukkan Nama Obat: "; cin >> namaObat[jumlah];
            cout << "Masukkan Jenis Obat: "; cin >> jenisObat[jumlah];
            cout << "Masukkan Harga Obat: "; cin >> hargaObat[jumlah];
            cout << "Masukkan Stok Obat: "; cin >> stokObat[jumlah];
            jumlah++;
            cout << "Obat berhasil ditambahkan!\n";
        } else if (pilihan == 2) {
            if (jumlah == 0) {
                cout << "Tidak ada obat dalam sistem.\n";
            } else {
                cout << "\nDaftar Obat:\n";
                for (int i = 0; i < jumlah; i++) {
                    cout << "Nama: " << namaObat[i] << ", Jenis: " << jenisObat[i] << ", Harga: " << hargaObat[i] << ", Stok: " << stokObat[i] << "\n";
                }
            }
        } else if (pilihan == 3) {
            string ubah;
            cout << "\nMasukkan Nama Obat yang ingin diubah: "; cin >> ubah;
            for (int i = 0; i < jumlah; i++) {
                if (namaObat[i] == ubah) {
                    cout << "Masukkan Nama Baru: "; cin >> namaObat[i];
                    cout << "Masukkan Jenis Baru: "; cin >> jenisObat[i];
                    cout << "Masukkan Harga Baru: "; cin >> hargaObat[i];
                    cout << "Masukkan Stok Baru: "; cin >> stokObat[i];
                    cout << "Obat berhasil diperbarui!\n";
                    break;
                }  else {cout << "Nama obat tidak ditemukan!";}
            }
        } else if (pilihan == 4) {
            string hapus;
            cout << "\nMasukkan Nama Obat yang ingin dihapus: "; cin >> hapus;
            for (int i = 0; i < jumlah; i++) {
                if (namaObat[i] == hapus) {
                    for (int j = i; j < jumlah - 1; j++) {
                        namaObat[j] = namaObat[j + 1];
                        jenisObat[j] = jenisObat[j + 1];
                        hargaObat[j] = hargaObat[j + 1];
                        stokObat[j] = stokObat[j + 1];
                    }
                    jumlah--;
                    cout << "Obat berhasil dihapus!\n";
                    break;
                }
            }
        } else if (pilihan == 5) {
            cout << "\nTerima kasih untuk telah menggunakan program ini.\n";
        } else {
            cout << "\nPilihan tidak valid! Silahakan coba lagi.\n";
        }
    } while (pilihan != 5);
    return 0;
}