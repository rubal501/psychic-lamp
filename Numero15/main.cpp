#include <iostream>

using namespace std;
int numero1, numero2, numero3;

int main()
{
    cout << "Dame tu primer numero" << endl;
    cin >> numero1;
    cout << "Dame tu segundi numero" << endl;
    cin >> numero2;
    cout << "Dame tu tercer numero" << endl;
    cin >> numero3;
    if(numero1 <0){
        cout << "el producto de los tres es: "<< numero1*numero2*numero3<<endl;}
    if(numero1 >0){
        cout << "la suma de los tres es: "<< numero1+numero2+numero3<<endl;}

    return 0;
}
