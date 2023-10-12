#include <iostream>
using namespace std;
int main()
{
	unsigned m, n, max, min, s;
	int i;
	s = 0;
	cout << "Please input integers m and n.(m,n>0):";
	cin >> m >> n;
	max = (m >= n) ? m : n;
	for (i = 1; i <= max; i++)
	{
		if ((m % i == 0) && (n % i == 0))
		{
			s = i;
		}
	}
	cout << "Greatest common divisor: " << s << endl;//Greatest common divisor.
	for (i = 1; ; i++)
	{
		if (((i * s) % m == 0) && ((i * s) % n == 0))
		{
			cout << "Least common multiples: " << (i * s);//Least common multiples.
			break;
		}
	}
	return 0;
}