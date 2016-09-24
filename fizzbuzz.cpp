#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "FizzBuzz\n";
	cout << "Print numbers from 1 - 100\n\n";
	for (n=1; n<=100; n++)
	{
		if ((n%3==0)&&(n%5==0))
		{
			cout << "FizzBuzz\n";
		}
		else if (n%5==0)
		{
			cout << "Buzz\n";
		}
		else if (n%3==0)
		{
			cout << "Fizz\n";
		}
		else
		{
			cout << n << endl;	
		}
	
	}


}
