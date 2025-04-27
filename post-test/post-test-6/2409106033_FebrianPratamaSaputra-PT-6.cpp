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
        } 
        else if (percobaanLogin < 2) {
            cout << "Username atau Password salah! Silahkan coba lagi.\n";
            percobaanLogin++;
        } else {
            percobaanLogin++;
        }
    }

    cout << "Maaf! Terlalu banyak percobaan gagal. Program akan segera berhenti.\n";
    return false;
}

void tambahObat(Obat* obat) {
    cout << "\nMasukkan Nama Obat: "; getline(cin, obat->nama);
    cout << "Masukkan Jenis Obat: "; getline(cin, obat->jenis);
    cout << "Masukkan Harga Obat: "; cin >> obat->harga;
    cout << "Masukkan Stok Obat: "; cin >> obat->stok;
    cin.ignore();
    cout << "Obat berhasil ditambahkan!\n";
}

void bubbleSortNama(Obat daftarObat[], int jumlah) {
    for (int i = 0; i < jumlah-1; i++) {
        for (int j = 0; j < jumlah-i-1; j++) {
            if (daftarObat[j].nama > daftarObat[j+1].nama) {
                swap(daftarObat[j], daftarObat[j+1]); //cara mudah tukar isi dari dua variabel data
            }
        }
    }
}

void selectionSortStokDescending(Obat daftarObat[], int jumlah) {
    for (int i = 0; i < jumlah-1; i++) {
        int maxIdx = i;
        for (int j = i+1; j < jumlah; j++) {
            if (daftarObat[j].stok > daftarObat[maxIdx].stok) {
                maxIdx = j;
            }
        }
        swap(daftarObat[i], daftarObat[maxIdx]); //cara mudah tukar isi dari dua variabel data
    }
}

void insertionSortHarga(Obat daftarObat[], int jumlah) {
    for (int i = 1; i < jumlah; i++) {
        Obat key = daftarObat[i];
        int j = i - 1;
        while (j >= 0 && daftarObat[j].harga > key.harga) {
            daftarObat[j + 1] = daftarObat[j];
            j--;
        }
        daftarObat[j + 1] = key;
    }
}

void tampilkanObat(Obat daftarObat[], int jumlah) {
    if (jumlah == 0) {
        cout << "Tidak ada obat dalam sistem.\n";
        return;
    }

    int pilihanTampil;
    do {
        cout << "\n--- Menu Tampilkan Obat ---\n";
        cout << "1. Tampilkan default (tanpa sorting)\n";
        cout << "2. Tampilkan berdasarkan Nama (ascending - Bubble Sort)\n";
        cout << "3. Tampilkan berdasarkan Stok (descending - Selection Sort)\n";
        cout << "4. Tampilkan berdasarkan Harga (ascending - Insertion Sort)\n";
        cout << "5. Kembali ke menu utama\n";
        cout << "Pilih: ";
        cin >> pilihanTampil;
        cin.ignore();

        Obat salinanObat[100];
        for (int i = 0; i < jumlah; i++) {
            salinanObat[i] = daftarObat[i];
        }

        switch (pilihanTampil) {
            case 1:
                cout << "\nDaftar Obat (Default):\n";
                break;
            case 2:
                bubbleSortNama(salinanObat, jumlah);
                cout << "\nDaftar Obat (Nama Ascending):\n";
                break;
            case 3:
                selectionSortStokDescending(salinanObat, jumlah);
                cout << "\nDaftar Obat (Stok Descending):\n";
                break;
            case 4:
                insertionSortHarga(salinanObat, jumlah);
                cout << "\nDaftar Obat (Harga Ascending):\n";
                break;
            case 5:
                cout << "Kembali ke menu utama.\n";
                return;
            default:
                cout << "Pilihan tidak valid.\n";
                continue;
        }

        for (int i = 0; i < jumlah; i++) {
            cout << "Nama: " << salinanObat[i].nama
                 << ", Jenis: " << salinanObat[i].jenis
                 << ", Harga: " << salinanObat[i].harga
                 << ", Stok: " << salinanObat[i].stok << "\n";
        }

    } while (pilihanTampil != 5);
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
    int jumlah = 10, pilihan; // Inisialisasi jumlah obat awal

    // Inisialisasi beberapa data obat untuk demonstrasi sorting
    daftarObat[0] = {"Paracetamol", "Analgesik", 20000, 100};
    daftarObat[1] = {"Amoxicillin", "Antibiotik", 15000, 50};
    daftarObat[2] = {"Cetirizine", "Antihistamin", 12000, 70};
    daftarObat[3] = {"Metformin", "Antidiabetik", 30000, 40};
    daftarObat[4] = {"Omeprazole", "Antasida", 25000, 60};
    daftarObat[5] = {"Ibuprofen", "Analgesik", 18000, 90};
    daftarObat[6] = {"Salbutamol", "Bronkodilator", 22000, 30};
    daftarObat[7] = {"Simvastatin", "Antikolesterol", 28000, 55};
    daftarObat[8] = {"Loratadine", "Antihistamin", 14000, 65};
    daftarObat[9] = {"Ciprofloxacin", "Antibiotik", 27000, 35};

    do {
        cout << "\n--- Manajemen Stok Obat Apotek --- ";
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
                tambahObat(&daftarObat[jumlah]);
                jumlah++;
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