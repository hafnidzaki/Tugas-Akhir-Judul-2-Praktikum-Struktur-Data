#include <iostream>
#include <string>
using namespace std;
void pindah (string *x, string *y); 
int main() {
    int n;
    cout << "Masukkan jumlah kontak: ";
    cin >> n;
    cin.ignore(); 

    string nama[100]; 


    for (int i = 0; i < n; i++) {
        cout << "  Nama kontak ke-" << i + 1 << ": ";
        getline(cin, nama[i]);
    }

    cout << "\nDaftar kontak sebelum sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << "  - " << nama[i] << endl;
    }

    
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            
            if (nama[j] < nama[min]) {
                min = j;
            }
        }

        
        if (min != i) {
            pindah(&nama[i], &nama[min]);
        }
    }

    cout << "\nDAFTAR KONTAK SETELAH DIURUTKAN (A-Z)\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    return 0;
}
void pindah (string *x, string *y) {
    string z = *x;
    *x = *y;
    *y = z;
}