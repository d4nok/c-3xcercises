// Program that checks wherher primitive values cross the limit

#include <iostream>//Including the input-name stream header file
using namespace std;//Using the standard namespace

int main()//start the main function
{
    cout<<"\n\n Check whether the primitive values crossing the limits or not :\n";//Outputting a messege to check primitive values
    cout<< "-------------------------------------------------------------------\n";//Outputting a separator line

    // Declaring and initializing various primitive data type variables 
    char gender = 'F';              //char si single-quoted
    bool isEmployed = true;        //true(non-zero) or false(0)
    unsigned short num0fsons = 2;   //[0, 255]
    short year0fAppt = 2009;        //[-32767, 32768]
    unsigned int YerlyPackage = 150000; //[0, 4294967295]
    double height = 79.48;              //with fractional part 
    float gpa = 4.69f;                  //need suffix 'f' for float
    long totalDrawan = 12047235L;       //Suffix 'L' for long 
    long long balance = 99532487LL;     //need suffix 'LL' for long long int 

    // Outputting the values of the variables 
    cout<<" The Gender is : "<<gender<<endl;
    cout<<" Is she married? : "<<isEmployed<<endl;
    cout<<" Number of sons she has : "<<num0fsons<<endl;
    cout<<" Year of her appointment : "<<year0fAppt<<endl;
    cout<<" Salary of year : "<<YerlyPackage<<endl;
    cout<<" Height is : "<<height<<endl;
    cout<<" GPA is "<<gpa<<endl;
    cout<<" Salary drawn up to : "<<totalDrawan<<endl;
    cout<<" Balance till : "<<balance<<endl;

    return 0;//Returning 0 to indicat esuccessful program excecution
}//End o fthemain function