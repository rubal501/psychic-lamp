#include <iostream>

using namespace std;
int voltaje, intensidad, resistencia;
int main()
{

    cout << "Dame el valor de la intensidad"<< endl;
    cin >> intensidad ;
    inicio:
    cout << "Dame el valor de la resistencia"<< endl;
    cin >> resistencia;
    if(resistencia <0){
        cout << "el valor es fisicamente imposible, inserte un valor posible"<< endl;
        goto inicio;}
    if(resistencia > 1000){
        cout << "no puedo procesar esa resistencia, es demasiado grande, inserte un valor menor"<< endl;
        goto inicio;}

        voltaje = resistencia* intensidad;
        cout << "el voltaje es igual a: "<< voltaje<<endl;
    return 0;
}
