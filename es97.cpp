#include <iostream>
using namespace std;
int main()
{
	int v[50], media, sum, e, h, r;
	sum = 0;
	r = 1;
	h = 0;
	while (r == 1)
	{
		cin >> e;
		if (e%10 == 0)
		{
			v[h] = e;
			cout << 50-h << endl;
			h++;
			sum += e;
		}
		cin >> r;
	}
	media = sum/h;
	int o[h];
	for (int i = 0; i<h; i++)
	{
		o[i] = 50-v[i];
	}
	cout << h << endl;
	for (int i = 0; i < h; i++)
	{
		if (i == h-1)
		{
			cout << v[i] << endl;
		}
		else
		{
			cout << v[i] << " ";
		}
	}
		for (int i = 0; i < h; i++)
	{
		if (i == h-1)
		{
			cout << o[i] << endl;
		}
		else
		{
			cout << o[i] << " ";
		}
	}
	return 0;
}
