/*
 * HealthProfile.h
 * HealthProfile class definition. This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name:        TERAKA COURAGE NOBLE
 * Matric No:   4623006GE
 * Department:  STATISTICS
 *
 */

#include <string>           // uses C++ string class
using namespace std;

// HealthProfile class definition
class HealthProfile
{
    // public interface
public:
    HealthProfile( string firstName, string lastName, string gender, int month, int date, int year, int height, double weight, int presentDate, int presentMonth, int presentYear ); // constructor that initializes patient information
    int getAge();                   // function to get patients age in years
    double getBMI();                // function to calculate and return BMI
    int getMaximumHeartRate();      // function to calculate and return maximum heart rate
    double getTargetHeartRate();    // function to calculate and return target heart rate
    void getInformation();          // function to print object information
    
    //get and set function prototypes of each class attribute
    
    void setfirstName( string); 	//function to set first name
    string getfirstName;			//function to get first name
    void setlastName(string);		//function to set last name
    string getlastName;				//function to get last name
    void setgender( string);		//function to set gender
    string getgender();		//function to get gender
    void setbirthDay(int month, int date, int year);						//function to set birth day
    int getbirthday (int, int, int);										//function to get birthday
    void setpresentDate(int presentMonth, int prensentDate, int presentYear);						//function to set present date
    int getpresentDate(int, int, int);										//function to get present date   
    void setheight( double);												//function to set height in inches
    double getheight ();													//function to get height
    void setweight ();														//function to set weight in ponds
    int getweight ();														//function to get weight
    
    // private interface
private:
    string firstName;               // variable to hold firstname
    string lastName;                // variable to hold lastname
    string gender;                  // variable to hold gender
    int month;                      // variable to hold month
    int day;                        // variable to hold day
    int year;                       // variable to hold year
    double height;                  // variable to hold height
    int weight;                     // variable to hold weight
    int age;                        // variable to hold age
    int MaximunHeartRate;			// variable to hold maximum heart rate
    double TargetHeartRate;			// variable to hold target heart rate
    double BMI;						// varible to hold BMI
    string Information;
}; // end class HealthProfile
