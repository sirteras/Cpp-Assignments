// courage source code on assignment 1
// determining odd and even of a a given integer
# include <iostream>
using std::cout;
using std::cin;
int main ()
{
cout<< "this program is to determine if and integer is odd or even\n";
int value;
cout<<"enter integer\n";
cin>>value;
if (value&1 ==1)
cout<<"odd\n";
else
cout<<"even\n";
return 0;
}
