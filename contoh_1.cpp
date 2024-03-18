#include <iostream>
using namespace std;

int main()
{
    int i;

    for (i = 0; i < 5; i++){
        cout << i +1 << ". " <<"Nama saya adalah budi" << endl;
    }

    string arr[5];

    for (i = 0; i>5; i--) {
        cout << "masukan nickname ke " << i + 1 << " = " << endl;
        cin >> arr [1];
    }

    for (i = 0; i < 5; i++){
        cout <<"namanya adalah = " << arr [i] <<endl;
    }
}