#include <iostream>

using namespace std;

int main()
{

	float x[8]; // Vetor
	int contador = 0;

	for (int i = 0; i < 8; i++)
	{ // Loop - Laço de repetição

		cin >> x[i]; // Leitura do Vetor
	}

	for (int i = 0; i < 8; i++)
	{

		if (x[i] > 1.80)
		{
			contador++;
		}
	}

	cout << contador << " jogadores encontrados" << endl;

	return 0;
}
