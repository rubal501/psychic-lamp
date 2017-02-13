#include <iostream>
#include <iomanip>
#define DOLARStoEURO .94
#define EUROtoDolars 1.06
using namespace std;
int cantidad;// alberga la cantidad que da el usuario
char desicion;//alberga el valor de la desicion
float cambio_a_dolar(int euro){
    float total = euro * EUROtoDolars;
    cout << "un total de: "<<std::setprecision(3)<< total<< endl;
    return 0;
}
float cambio_a_euro(int dolar){
    float total = dolar * DOLARStoEURO;
    cout <<"un total de: "<<std::setprecision(3)<< total<< endl;
    return 0;
}
int main()
{
    cout<< "Bienvenido que desea hacer?\n"<<"tenemos estas opciones:\n"<<"(a)cambiar de dolares a euros\n"<<"(b)cambiar de euros a dolares"<<endl;
    cin >>desicion;
    cout<< "ingrese la cantidad a convertir: "<< endl;
    cin >>cantidad;
    if(desicion == 'a')
        cambio_a_euro(cantidad);
    if(desicion == 'b')
        cambio_a_dolar(cantidad);
    return 0;
}
