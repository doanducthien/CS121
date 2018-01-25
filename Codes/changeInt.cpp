#include <iostream>

using namespace std;

void foo(int defNotJoe);
void bar(int &joe);

int main()
{
	int joeseph = 8;
	
	foo(joeseph);
	cout << joeseph << endl;
	
	bar(joeseph);
	cout << joeseph << endl;
	
	
	return 0;
}

void foo(int defNotJoe)
{
	defNotJoe = -3;
}

void bar(int &joe) // this variable is a "nickname" for joeseph
{
	joe = -3;
}
