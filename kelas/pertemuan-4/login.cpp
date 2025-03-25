#include <iostream>
using namespace std;

// bool login(string username, string password){
//     if (username == "Febrian" && password == "Rizal"){
//         cout << "Login berhasil!";
//         return true;
//     }
//       else {
//         cout << "Login gagal!"
//         return false;
//     }
// }

bool login(string username, string password){
    return username == "Febrian" && password == "Rizal";
}

int main(){
    if (!login("Febraian","Rizal")){
        cout << "Login Gagal!" << endl;
        return 0;
    }

    cout << "Program berjalan, login berhasil!" << endl;
    return 0;
}