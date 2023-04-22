#include <iostream>
using namespace std;

int main()
{

	int x1, x2, x3;
	int y1, y2, y3;
	int z1, z2, z3;

	int totalx, totaly, totalz;

	cin >> x1 >> x2 >> x3;
	cin >> y1 >> y2 >> y3;
	cin >> z1 >> z2 >> z3;

	x1 = x1 * 5;
	y1 = y1 * 5;
	z1 = z1 * 5;

	x2 = x2 * 3;
	y2 = y2 * 3;
	z2 = z2 * 3;

	x3 = x3 * 2;
	y3 = y3 * 2;
	z3 = z3 * 2;

	totalx = x1 + x2 + x3;
	totaly = y1 + y2 + y3;
	totalz = z1 + z2 + z3;

	if (totalx == totaly || totalx == totalz)
	{
		cout << "Algo deu errado" << endl;
	}
	else if (totaly == totalx || totaly == totalz)
	{
		cout << "Algo deu errado" << endl;
	}
	else if (totalz == totalx || totalz == totaly)
	{
		cout << "Algo deu errado" << endl;
	}
	else
	{
		cout << "Teremos uma cerimonia" << endl;
	}

	return 0;
}
