#include <iostream>
using namespace std;

int main()
{

	int x[3];
	int y[3];
	int z[3];

	int totalX[3];
	int totalY[3];
	int totalZ[3];

	int totx = 0;
	int toty = 0;
	int totz = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> x[i];
		cin >> y[i];
		cin >> z[i];
	}

	for (int i = 0; i < 3; i++)
	{

		if (i == 0)
		{
			totalX[i] = totalX[i] + (x[i] * 5);
			totalY[i] = totalY[i] + (y[i] * 5);
			totalZ[i] = totalZ[i] + (z[i] * 5);
		}
		else if (i == 1)
		{
			totalX[i] = totalX[i] + (x[i] * 3);
			totalY[i] = totalY[i] + (y[i] * 3);
			totalZ[i] = totalZ[i] + (z[i] * 3);
		}
		else if (i == 2)
		{
			totalX[i] = totalX[i] + (x[i] * 2);
			totalY[i] = totalY[i] + (y[i] * 2);
			totalZ[i] = totalZ[i] + (z[i] * 2);
		}
	}

	for (int i = 0; i < 3; i++)
	{

		totx = totx + totalX[i];
		toty = toty + totalY[i];
		totz = totz + totalZ[i];
	}

	if (totx != toty && totx != totz && toty != totx && toty != totz && totz != totx && totz != toty)
	{
		cout << "Teremos uma cerimonia" << endl;
	}
	else
	{
		cout << "Algo deu errado" << endl;
	}

	return 0;
}
