#include <iostream>
#include <iomanip>

using namespace std;

int main(){


    int X, Y;
    float resultado;

    cin >> X >> Y;

    if(X == 1){
        resultado = Y * 6.90;
    }
    else if (X == 2){
        resultado = Y * 7.30;
    }
    else if (X == 3){
        resultado = Y * 4.50;
    }
    else if (X == 4){
        resultado = Y * 5.70;
    }
    cout<<fixed<<setprecision(2);
    cout<<"O valor total da compra e R$ "<<resultado<<endl;



    return 0;
}
