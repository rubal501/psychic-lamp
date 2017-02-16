#include <iostream>

using namespace std;

int main()
{   float lados[3];
    cout << "bienvenido dame los lados de un triangulo" << endl;
    for(int x=1; x<=3; ++x){
        cout <<"dame el lado: "<<x<<endl;
        cin >>lados[x];
    }
    if(lados[1]==lados[2] && lados[1]==lados[3] && lados[2] == lados[3])
        cout <<"es un triangulo equilatero"<<endl;
    if(lados[1]==lados[2]  || lados[2]==lados[3] || lados[1]==lados[3])
        cout <<"es un triangulo escaleno"<<endl;
    ĵ


}
