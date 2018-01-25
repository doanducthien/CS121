#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n);

int main()
{
	/*
	cout << "Give me a number:" << endl;
	int num;
	cin >> num;
	
	if(isPrime(num))
	{
		cout << "OPTIMUS PRIME!\n";
	}
	else
	{
		cout << "boo hiss!\n";
	}
	
	return 0;
	*/
	
	cout << "All primes between 0 and 100 are:\n";
	for(int i=2; i<100; i++)
	{
		if(isPrime(i) == true)
		{
			cout << i << ", ";
		}
	}
}

bool isPrime(int n)
{
	if(n <= 1 )
		return false;
	for(int i=2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}

	return true;
}
