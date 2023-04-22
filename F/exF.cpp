#include <iostream>

using namespace std;

int main()
{

	int x;
	float y;

	cin >> y;
	cin >> x;

	if (y >= 1.60 || x >= 18)
	{

		cout << "Pode andar de montanha russa" << endl;
	}
	else
	{
		cout << "Nao pode andar de montanha russa" << endl;
	}

	return 0;
}
