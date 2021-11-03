#include <iostream>
#include <math.h>
using namespace std;
int mas[10];
int massif[] = { 0,1,2,3,4,5,6,7,8,9, };
int main()
{
	int k;
	cin >> k;
	for (int i = k; i < 10; i++)
	{
		cout << massif[i];
	}
	for (int i = 0; i < k; i++)
	{
		cout << massif[i];
	}
	cout << " " << endl;
	cout << massif[k];
	if (k == 0)
		cout << massif[9];
	else
		cout << massif[k - 1];
	for (int i = k; i < 10; i++)
	{
		if (i % 2 != 0)
		cout << massif[i];
	}
	for (int i = 0; i < k; i++)
	{
		if (i % 2 != 0)
		cout << massif[i];
	}
	return 0;
}