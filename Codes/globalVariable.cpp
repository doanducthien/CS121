#include <iostream>

using namespace std;

void mySwap();

int x = 3; // global variables
int y = 8;


int main()
{	
	cout << "Before swap, x = " << x << endl;
	cout << "Before swap, y = " << y << endl;
	
	
	// swap!
//	int temp;
//	temp = x;
//	x = y;
//	y = temp;	
	// end swap
//	x = mySwap(x, y);
//	x = 8;
//	y = mySwap(x, y);
//  y = 3;
	mySwap();
	
	
	cout << "After swap, x = " << x << endl;
	cout << "After swap, y = " << y << endl;
	
	return 0;
}

void mySwap()
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

