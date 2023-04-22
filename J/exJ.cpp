#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

	float x;

	cin >> x;

	cout << fixed << setprecision(2);
	cout << "Joao e Henrique devem guardar R$ " << (x * 2) * 0.85 << endl;
	return 0;
}
