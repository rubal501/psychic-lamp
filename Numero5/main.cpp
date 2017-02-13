#include <iostream>

using namespace std;
int edad, anio1, anio2;
int main()
{
    cout << "cual es su edad:\n" << endl;
    cin >> edad;
    cout << "cual es el anio\n"<<endl;
    cin >>anio1;
    cout << "de que anio quiere saber la edad"<< endl;
    cin >>anio2;
    cout <<"usted va a tener:"<< (anio2 - anio1)+edad <<endl;
    return 0;
}
