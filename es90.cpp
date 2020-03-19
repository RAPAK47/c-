#include <iostream>
using namespace std;
int main()
{
	int x = 2;
	int r, e, h, max;
	r = 1;
	h = 0;
	int v[10000000];
	while (r == 1)//aggiungo gli elementi all'array
	{
		cin >> e;
		if (e%x == 0)
		{
			v[h] = e;
			h ++;
		}
		cin >> r;//il comando per fermare il while
	}
	for (int i = 0; i<h; i++)//trovo il valore massimo
	{
		if (i == 0||v[h]>max)
		{
			max = v[h];
		}
	}
	int o[max];
	for (int i = 0; i<h; i++)//creo un array con ad ogni indice il numero di elementi col
	{
		o[v[i]]++;//valore dell'indice che ci sono nell'array v
	}
	for (int i = 0; i<max; i++)// stampo gl'indici dell'array o tante volte quante dette nell'elemento
	{
		for (int f = 0; f<o[i]; f++)
		{
			cout << i << " ";
		}
	}
	return 0;
}
