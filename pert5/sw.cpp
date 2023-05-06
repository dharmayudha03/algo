#include <iostream>
using namespace std;

void penjumlahan(){
    int a = 10;
    int b = 5;
    int c = a + b;
    cout<< c <<endl;
}

void loopingfor(){
    for (int a = 1; a <= 3; a++){
        cout<< a <<endl;
    }
}

void sGoto(){
    int a = 5;
    if (a%2==0){
        goto genap;
    }else {
        cout<<"Bukan\n";
    }

    genap:
    cout<<"genap\n";
}

int main(){
    int pilih;
    char kembali;

    do {
        cout<<"0. exit\n";
        cout<<"1. penjumlahan\n";
        cout<<"2. loopingfor\n";
        cout<<"3. goto\n";
        cout<<"pilihan :";

        cin>>pilih;
        switch(pilih){
            case 0:
            cout<<"terima kasih\n";
            return 0;

            case 1:
            penjumlahan();
            break;

            case 2:
            loopingfor();
            break;

            case 3:
            sGoto();
            return 0;

            default:
            cout<<"pilihan salah\n";
            break;
        }

        cout<<"pilih kembali\n";
        cin>>kembali;

    }
    while(kembali !='t');
    cout<<"terima kasih\n";
    return 0;
    
}
