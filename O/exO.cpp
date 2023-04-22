#include <iostream>

using namespace std;

int main()
{

	int x;
	int contM;
	int contJ;
	contM = 0;
	contJ = 0;

	string maria, joao;

	cin >> x;

	for (int i = 0; i < x; i++)
	{

		cin >> maria >> joao;

		if (maria == "H" && joao == "A")
		{
			contM++;
		}
		else if (maria == "A" && joao == "T")
		{
			contM++;
		}
		else if (maria == "T" && joao == "H")
		{
			contM++;
		}
		else if (joao == "H" && maria == "A")
		{
			contJ++;
		}
		else if (joao == "A" && maria == "T")
		{
			contJ++;
		}
		else if (joao == "T" && maria == "H")
		{
			contJ++;
		}
	}

	if (contM > contJ)
	{
		cout << "Maria" << endl;
	}
	else if (contJ > contM)
	{
		cout << "Joao" << endl;
	}
	else if (contM == contJ)
	{

		cout << "JanKenpon" << endl;
	}

	return 0;
}
