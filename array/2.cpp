#include <iostream>
using namespace std;

int main () {
    int nilai [10];
    int jumlah=0;
    cout << "masukan 10 angka integer yang akan dijumlahkan: " << endl;
    for (int i=0; i < 10; i++) {
        cout << "masukan angka ke " << i+1 << ": ";
        cin >> nilai[i];
        jumlah += nilai[i];
    }
    
     cout << "nilai yang anda masukan: " << endl;
    for (int i=0; i < 10; i++) {
        cout << nilai [i] << " ";
    }

    cout << endl << "Jumlah total: " << jumlah << endl;

    return 0;
}

