//courage assignment1 number 2
// multiple of a number
# include <iostream>
main ()
{
using std::cout;
using std::cin;
int value1;
int value2;
cout<<"enter value1\n";
cin>>value1;
cout<<"enter value2\n";
cin>>value2;
if(value1%value2==0)
cout<<value1<<" is a multiple of "<< value2;
else
cout<<value1<<" is not a multiple of "<< value2;
return 0;
}
