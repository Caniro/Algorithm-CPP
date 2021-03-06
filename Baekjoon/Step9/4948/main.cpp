#include <iostream>
#include <cmath>

int		is_prime(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	else if (n == 4)
		return (0);
	for (int i = 2; i <= std::sqrt(n); ++i)
		if (n % i == 0)
			return (0);
	return (1);
}

int		main()
{
	using namespace std;

	int	n, count;

	do
	{
		cin >> n;
		if (n == 0)
			return (0);

		count = 0;
		for (int i = n + 1; i <= 2 * n; ++i)
		{
			if (is_prime(i))
				count++;
		}
		cout << count << '\n';
	} while (n);
}