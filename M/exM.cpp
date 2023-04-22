#include <iostream>

using namespace std;

int main()
{

    float x, y;
    float total = 0;

    cin >> x >> y;

    total = (x + y) * 3;

    if(total < 350.29){
        cout << "A vida nao tem graca sem alguns dragoes"<<endl;
    }
    else{
         cout << "Uma longa viagem comeca com um unico passo"<<endl;
    }

    return 0;
}
