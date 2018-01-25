#include <iostream>

using namespace std;

void mySwap(int x, int y);

int main()
{
	int x = 3;
	int y = 8;
	
	cout << "Before swap, x = " << x << endl;
	cout << "Before swap, y = " << y << endl;
	
	
	// swap!
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;	
	// end swap
	mySwap(x,y);

	
	cout << "After swap, x = " << x << endl;
	cout << "After swap, y = " << y << endl;
	
	return 0;
}

void mySwap(int x, int y)
{
	cout << "inside swap Before swap, x = " << x << endl;
	cout << "inside swap Before swap, y = " << y << endl;

	int temp;
	temp = x;
	x = y;
	y = temp;	

	cout << "inside swap After swap, x = " << x << endl;
	cout << "inside swap After swap, y = " << y << endl;
	

} // mySwap's x and y die
