#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int arr[n], top = -1;

    cout << "Masukkan data: " << endl;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        top++;
    }

    cout << "Hasil stacking: ";
    for(int i=top; i>=0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
