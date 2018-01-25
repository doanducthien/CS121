#include <iostream>
#include <ctime>
using namespace std;

  
int resetScreen();
int feetSpread(int spaces);
int feetTogether(int spaces);
//void makeSpaces(int spaces);


void sleepz(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

string makeSpaces(int num) // this will return [num] amount of spaces
{
	string movement= "";
	for(int i=0; i<num; i++)
	{
		movement += " ";
	}
	
	return movement;
}

int main()
{
	for(int i=0; i<40;i++)
	{
		feetSpread(i); // show the stride
		sleepz(90000);
		feetTogether(i); // show feet together picture
		sleepz(90000);
	}
}

int feetSpread(int spaces)
{
	resetScreen();
//	cout << "          " << "    _\\|/^" << endl; 
	cout << makeSpaces(spaces) << "    _\\|/^" << endl; 
	// note you need to do  "\\" to get a single "\" to show up 
	// (probably best to make the picture first then add the extra \)	
	cout << makeSpaces(spaces) << "     (_oo." << endl;
	cout << makeSpaces(spaces) << "    /-|--/" << endl;
	cout << makeSpaces(spaces) << "   '  |" << endl;
	cout << makeSpaces(spaces) << "     /--i" << endl;
	cout << makeSpaces(spaces) << "    /  /" << endl;
	cout << makeSpaces(spaces) << "   /   L" << endl;
	cout << makeSpaces(spaces) << "   L" << endl;
	return 0;		
}

int feetTogether(int spaces)
{
	resetScreen();
	cout << makeSpaces(spaces) << "    _\\|/^" << endl;
	cout << makeSpaces(spaces) << "     (_oo ." << endl;
	cout << makeSpaces(spaces) << "    /-|--/" << endl;
	cout << makeSpaces(spaces) << "    ' |" << endl;
	cout << makeSpaces(spaces) << "     \\-\\" << endl;
	cout << makeSpaces(spaces) << "     / /" << endl;
	cout << makeSpaces(spaces) << "     L L" << endl;

	return 0;
}

int resetScreen()
{
	// hack solution
	for(int i=0; i < 20; i++)
	{
		cout << endl;
	}
	
	return 0;
}





// GOOD WAY ABOVE
// 
//
// ... BAD WAY BELOW

/*
int main()
{
	for(int i=0; i<40;i++)
	{
		for(int j=0; j < 20; j++)
		{
			cout << endl;
		}
		string movement;
		
		movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 

		cout << "    _\\|/^" << endl; 
		// note you need to do  "\\" to get a single "\" to show up 
		// (probably best to make the picture first then add the extra \)	
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "     (_oo." << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "    /-|--/" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement;
		cout << "   '  |" << endl;

		movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "     /--i" << endl;

		movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "    /  /" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "   /   L" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "   L" << endl;
		
		clock_t goal = 90000 + clock();
		while (goal > clock());


		for(int i=0; i < 20; i++)
		{
			cout << endl;
		}

		movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "    _\\|/^" << endl;
		
		movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "     (_oo ." << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "    /-|--/" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement;
		cout << "    ' |" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "     \\-\\" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "     / /" << endl;
		
				movement= "";
		for(int j=0; j<i; j++)
		{
			movement += " ";
		}
		cout << movement; 
		cout << "     L L" << endl;

		goal = 90000 + clock();
		while (goal > clock());
	}
}
*/


