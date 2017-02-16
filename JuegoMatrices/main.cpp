#include <iostream>

using namespace std;

int main(){
    int matri[5][2]= {1,2,3,4,5,6,7,8,9,0};
    for(int i=0; i<5; ++i){
        for(int j=0; i<2; ++i){
            cout << matri[i][j]<<endl;
            }
    }
    cout << matri[1][1]<< endl;

    return 0;
}
