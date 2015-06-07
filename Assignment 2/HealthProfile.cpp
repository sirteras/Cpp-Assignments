/*
 * HealthProfile.cpp
 * HealthProfile member-function definitions. This file contains
 * implementations of the member functions prototyped in HealthProfile.h
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        TERAKA COURAGE NOBLE
 * Matric No:   4623006GE
 * Department:  STATISTICS
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

// constructor initializes patient information
HealthProfile::HealthProfile( string firstName, string lastName, string gender, int month,
                             int date, int year, int weight, double height, int presentMonth,
                             int presentDate, int presentYear)
{
	setfirstName(firstName);      // call set function to initialize firstName
    setlastName( lastName );        // call set function to initialize lastName
    setgender( gender );
	setbirthDay( int month, int date, int year)            // call set function to initialize gender             // call set function to initialize month
    setpresentDate(int presentMonth, int prensentDate, int presentYear);                  // call set function to initialize day
    setWeight( weight );            // call set function to initialize weight
    setHeight( height );            // call set function to initialize height
}
// call set function to initialize firstName
void HealthProfile::setfirstName ( string firtName)
{
}
string HealthProfile::getfirstName;

{
return firstName;
}
// call set function to initialize lastName
void HealthProfile::setlastName( string lastName)
strng HealthProfile::getlastName()
{
return lastName;
}
// call set function to intialise gender
void HealthProfile::setgender( string)
string HealthProfile::getgender() 
{
	return gender;
}
 // call set function to initialize birthday
 void HealthProfile::setbirthDay(int month, int date, int year)
 int HealthProfile::getbirthDay(int, int, int)
 {
 	return birthday;
 }
 void HealthProfile::setpresentDate(int presentMonth, int prensentDate, int presentYear) 
 int HealthProfile::getpresentDate(int, int, int)
 // call set funtion to initiliaze weight
 void HealthProfile::setweight()
 int HealthProfile::getweight
 // call set funtion to initialize weight
 void HealthProfile::setheight( double)
    int HealthProfile::getAge()
{
	int month, day, year;
	cout << "ENTER PRESENT DATE\n: ";
	cin >> month >> day >> year;
	cout<< "ENTER YOUR BIRTHDAY\n";
	cin >>presentMonth >> presentDate >>presentYear;
	int age
	age = presentYear - year;
	return (age);	
}
	 
	// call set function to calculate age

// funtion to print object information
void HealthProfile::getInformation()
{
    cout << "\n\nHEALTH PROFILE FOR - " << getFirstName() << " " << getLastName() << endl;
    cout << "First Name: " << setw(17) << getFirstName() << endl;
    cout << "Last Name: " << setw(19) << getLastName() << endl;
    cout << "Gender: " << setw(20) << getGender() << endl;
    cout << "Date of Birth: " << setw(10) << getDay() << "/" << getMonth() << "/" << getYear() << endl;
    cout << "Weight (in kilograms): " << setw(3) << getWeight() << endl;
    cout << "Height (in meters): " << setw(10) << getHeight() << endl;
    cout << "Age: " << setw(21) << getAge() << " year(s)" << endl;
    cout << "Body Mass Index (BMI): " << setw(8) << getBMI() << endl;
    cout << "Maximum Heart Rate: " << setw(7) << getMaximumHeartRate() << endl;
    cout << "Target Heart Rate: " << setw(11) << getTargetHeartRate() << endl;
    cout << "\nBMI VALUES CHART" << endl;
    cout << "Underweight:   less than 18.5" << endl;
    cout << "Normal:        between 18.5 and 24.9" << endl;;
    cout << "Overweight:    between 25 and 29.9" << endl;
    cout << "Obese:         30 or greater" << endl;
}

// TODO: Provide implementaion details for functions in HealthProfileStub.h
// Implementation for the constructor and getInformation function has already been provided
