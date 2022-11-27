// Abdul Rozak Saputra || A11.2022.14663 || A11-4117

#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk membaoroa user untuk melakukan inputan.*/
    int x;
    for(int i = 0;; i++){
        cout << "Masukan Angka anda = ";
        cin >> x;
        if(x == -99){
            cout << "\n";
            cout << "Keluar Karena break" << endl;
            break;
        }
        }
    return 0;
}
