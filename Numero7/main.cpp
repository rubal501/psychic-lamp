#include <iostream>
#include<iomanip>

using namespace std;
float factor;
int main()
{
    cout << "deme un numero real"<< endl;
    cin >> factor;
    for (int i = 1; i < 10; ++i){
        cout << factor<<"*"<<i<<"="<< std::setprecision(3)<<i*factor<<endl;
    }
    return 0;
}
