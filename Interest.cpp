#include<iostream>
using namespace std;
int main()
{
	int n = 0;
	float Daphne = 100;
	float Cleo = 100;
	while (Daphne >= Cleo)
	{	
		n += 1;
		Daphne+=10;
		Cleo=Cleo+Cleo*5/100;
	}

cout<<n<<"  "<<"Daphne is: "<<Daphne<<"  "<<"Cleo is: "<<Cleo<<endl;	
return 0;
} 
