#include <iostream>

using namespace std;

int main(){
    int x, y , z;

    cin >> x >> y >> z;

    int porcentagem;

    porcentagem = (y * 100) / x;

    if(porcentagem < z){
        cout << "UdiCity esta em perigo, vamos de LockDalson!!!" <<endl;
    }
    else{ cout << "UdiCity esta segura!!!" <<endl;}


    return 0;
}
