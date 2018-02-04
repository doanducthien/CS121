#include <iostream>
using namespace std;
int main()
{
	int n,sum = 0;
	bool flag = true;
	while (flag = true)
	{
		cin>>n;
		if (n!=0)
		{
		sum += n;
		cout<<sum<<endl;
		}
		if(n == 0)
		{
			flag = false;
			break;

		}
	}
	return 0;
}