#include <iostream>
using namespace std;
int main()
{
	int N, r, e, h, f;
	N = 50;
	r = 1;
	h = N;
	f = 0;
	int v[5000];
	for (int i = 0; i<N; i++)
	{
		v[i] = (i+1)*(i+1)*(i+1);
	}
	while (r == 1)
	{
		cin >> e;
		v[h] = e;
		h ++;
		cin >> r;
	}
	r = 1;
	while (r == 1)
	{
		cin >> e;
		for (int i = 0; i<h; i++)
		{
			if (e == v[i])
			{
				f = 1;
			}
		}
		if (f == 1)
		{
			cout << "e' un cubo" << endl;
			f = 0;
		}
		else
		{
			cout << "non e' un cubo" << endl;
		}
		cin >> r;
	}
	return 0;
}
