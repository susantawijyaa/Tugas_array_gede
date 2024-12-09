#include <iostream>
using namespace std;

int main () {
    int nilai [7];
    int maks;
    cout << "masukan 7 angka integer yang ingin dicari nilai maksnya: " << endl;
    for (int i=0; i < 7; i++) {
        cout << "masukan angka ke " << i+1 << ": ";
        cin >> nilai[i];
    }
    
    cout << "nilai yang anda masukan: " << endl;
     for (int i=0; i < 7; i++) {
        cout << nilai [i] << " ";
     }

    maks = nilai[0];

     for (int i = 0; i < 7; ++i) {
        if (nilai[i] > maks) {
            maks = nilai[i];
        }
    }
    cout << endl << "nilai maks adalah: " << maks << endl;

    return 0;
}
