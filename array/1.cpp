#include <iostream>
using namespace std;

int main () {
    int nilai [5];
    cout << "masukan 5 angka integer: " << endl;
    for (int i=0; i < 5; i++) {
        cout << "masukan angka ke " << i+1 << ": ";
        cin >> nilai[i];
    }
    
     cout << "nilai yang anda masukan: " << endl;
    for (int i=0; i < 5; i++) {
        cout << nilai [i] << " ";
    }

    return 0;
}


