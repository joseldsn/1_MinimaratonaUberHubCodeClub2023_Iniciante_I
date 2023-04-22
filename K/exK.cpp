#include <iostream>
using namespace std;

int main()
{

    int x, y;

    cin >> x >> y;

    if(x < y)
    {
        cout <<"O maior numero e " << y <<endl;
        cout <<"O menor numero e " << x <<endl;
    }
    else if( x > y )
    {
        cout <<"O maior numero e " << x <<endl;
        cout <<"O menor numero e " << y <<endl;
    }
    else if( x == y)
    {
        cout <<"Numeros iguais"<<endl;
    }
    return 0;
}
