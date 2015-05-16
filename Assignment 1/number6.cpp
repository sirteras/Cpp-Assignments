// courage
// this programme is to determine ones BMI status
// assignment 1 number 6
# include <iostream>
main ()
{
	using std::cout;
	using std::cin;
	int name;
	int height;
	int weight;
	int BMI;
	int bminum;
	bminum==703;
	cout<<"Input your Full Name:\n";
	cin>>name;
	{
	cout<<"Input your height:\n";
	}
	cin>>height;
	{
	cout<<"Input your weight:\n";
	}
	cin>>weight;
	
	BMI=(weight/height*height*703);
	
	if(BMI>=18.5 && BMI<=24.9)
	{
	cout<<name<< "your BMI is Normal";
	}
	else if(BMI<18.5)
	cout<<"your BMI is underweight";
	else if(BMI>=25)
	{cout<<"your BMI is overweight";
	}
	return 0;
	
}
