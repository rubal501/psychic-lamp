#include <iostream>

using namespace std;
int numero1, numero2;
int main()
{
    cout << "dame dos numeros:\n"<<"nuemro1: "<<endl;
    cin >>numero1;
    cout << "numero2: "<<endl;
    cin >>numero2;
    if(numero1 < numero2)
        cout << numero1<< " es mayot que "<<numero2<<endl;
    if(numero1 > numero2)
        cout << numero2<< " es mayor que "<<numero1<<endl;
    return 0;
}
