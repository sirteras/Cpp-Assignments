# include <iostream>
int main()
{
using std::cout;
using std::cin;
	int fivedigit;
	int a, b, c, d, e;
	// a, b, c, d, e represent digits of fivedigit number
	// a is the first
	// b is the second
	// c is the third
	// d is the fourth and
	// e is the fifth 
	cout<<"please enter the five digit integer:\n";
	cin>>fivedigit;
	if (fivedigit<10000)
	{
	cout<<"incorrect digit! try another number";
	}
	if(fivedigit>99999)
	{cout<<"incorrect digit! try another number"; 
	}
	a=fivedigit/10000;
	b=(fivedigit/10000)%10;
	c=(fivedigit/1000)%10;
	d=(fivedigit/100)%10;
	e=(fivedigit/10)%10;
	cout<<a;
	cout<<"   "<<b;
	cout<<"   "<<c;
	cout<<"   "<<d;
	cout<<"   "<<e;
	return 0;
}
