#include <iostream>
using namespace std;
int main()
{
	float sum = 0.0;
	int count = 0;
	for (float i = 1.0; i < 100; i += 2)
	{
		count++;
		if (count % 2 == 0)
		{
			sum += (-1/i);
		}
		else
		{
			sum += 1 / i;
		}
	}
	cout << sum << endl;
	return 0;
}