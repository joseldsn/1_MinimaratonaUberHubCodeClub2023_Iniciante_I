#include <iostream>

using namespace std;

int main()
{

	int x[5];
	int total = 0;

	for (int i = 0; i < 5; i++)
	{

		cin >> x[i];
	}

	for (int i = 0; i < 5; i++)
	{

		total = total + x[i];
	}

	if (total >= 40)
	{
		cout << "Carga de horas completa" << endl;
	}
	else
	{
		cout << "Carga de horas incompleta" << endl;
	}

	return 0;
}
