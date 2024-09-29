#include <iostream>//Including the input-output stram header file
#include <climits>//Including the header file for interger limits

using namespace std; //Using the standard namespace

int main()//start the main function
{
    cout<<"\n\n Check the upper and lower limits of integer :\n"; //Outputting a messege for cheking lmits
    cout<<"--------------------------------------------------\n";//Outputting a separator line 

    // Outputting the maximum and minimum limits of various data types
    cout<<"The maximum limit of int data type:                      "<<INT_MAX<<endl;
    cout<<"The minimum limit of int data type:                      "<<INT_MIN<<endl;
    cout<<"The maximim limit of unsigned int data type:             "<<UINT_MAX<<endl;
    cout<<"The maximum limit of long long data type:                "<<LLONG_MAX<<endl;
    cout<<"The minimum limit of long long data type:                "<<ULLONG_MAX<<endl;
    cout<<"The maximum limit of unsigned long long data type        "<<ULLONG_MAX<<endl;
    cout<<"The Bits contain in char data type:                      "<<CHAR_BIT<<endl;
    cout<<"The maximum limit of char data type:                     "<<CHAR_MAX<<endl;
    cout<<"The minimum limit of char data type:                     "<<CHAR_MIN<<endl;
    cout<<"The maximum limit of signed char data type:              "<<SCHAR_MAX<<endl;
    cout<<"The minimum limit of signed of signed char data type:    "<<SCHAR_MIN<<endl;
    cout<<"The maximum limit of unsigned char data type:            "<<UCHAR_MAX<<endl;
    cout<<"The minimum limit of short data type:                    "<<SHRT_MIN<<endl;
    cout<<"The maximum limit of short data type:                    "<<SHRT_MAX<<endl;
    cout<<"The maximum limit of unsigned short data type:           "<<USHRT_MAX<<endl;
    
    cout<< endl; //OUtputting a blank line for better readability

    return 0; //Retutning 0 to indicate successful program execution
}//End of the main function

