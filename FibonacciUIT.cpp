#include <iostream>
#include <math.h>
using namespace std;
#define MAX 100

void NhapmangSNT(int a[], int& n);
int SoPhanTuChuaY(int a[], int n, int y); 
//Kiểm tra số nguyên tố
bool ktsongto(int i)
{
	for (int j = 2; j <= i / 2; ++j)
	{
		if (i % j==0) return 0;
	}
	return 1;
}

void NhapmangSNT(int a[], int& n)
{
	cin >> n;
	a[0] = 2;
	int i = 1, j = 3;
	while (i < n)
	{
		if ((ktsongto(j)) == 1)
		{
			a[i] = j;
			++*(&i);
		}
		j += 2;
	}
}

int SoPhanTuChuaY(int a[], int n, int y)
{
	int dem = 0;
	int i = 0,h;
	while (i < n)
	{
		while (a[i] != 0)
		{
			h = a[i] % 10;
			a[i] /= 10;
			if (h == y)
			{
			    ++(*&dem);
				break;
			}
		}
		++i;
	}
	return dem;
}

int main()
{
	int a[MAX], n, y;
	cin >> y;
	NhapmangSNT(a, n);
	cout << SoPhanTuChuaY(a, n, y) << endl;
	return 0;
}
