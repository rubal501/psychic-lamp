#include <iostream>

using namespace std;
int anio1, anio2;
int Cheuqeo(int x,int y){
    int anios = y -x;
    int total;
    int anio = x;
    for(int i=1; i<anios; ++i ){
        if(anio % 4 == 0 || anio % 400 == 0){
            total = total + 1;
        }
    }
    return total;
}
int main()
{
    cout << Cheuqeo(1999, 2010)<< endl;
    return 0;
}
