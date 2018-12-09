#include <iostream>
#include <conio.h>

using namespace std;

int main()
{   int x;
    cout << " Mari kita menentukan suatu bilangan, Genap Atau Ganjil"<< endl;
    cout << endl;

    cout<<"Masukan Nilai Bilangan Anda : ";
    cin>>x;
    if (x%2==0)
    {
        cout<<"Bilangan Genap";
    }
    else
    {
        cout<<"Bilangan Ganjil";
    }
    getch();
    return 0;
}
