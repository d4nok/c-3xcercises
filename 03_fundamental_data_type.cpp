#include <iostream>//Includign the input-output stram header file

using namespace std; //using the standard namespace

int main() //Start of the main function
{
    cout<<"\n\n Find Size of the fundamental data types :\n"; //Outputting a messege for finding the size of fundamental data types
    cout<<"----------------------------------------------\n";//outputting a separator line
    cout<<"The sizeof(char) is :               "<< sizeof(char) << "bytes \n"; //Outputing the size of char
    cout<<"The sizeof(short) is :              "<< sizeof(short) << "bytes \n";//OUtputting the size of short
    cout<<"The sizeof(int) is :                "<< sizeof(int) << "bytes \n";//Outputting the size of int
    cout<<"The sizeof(long) is :               "<< sizeof(long) << "bytes \n";//Outputting the size of long
    cout<<"The sizeof(long long) is:           "<< sizeof(long long) <<"bytes \n";//Outputting the size of long long
    cout<<"The size(float) is:                 "<< sizeof(float) << "bytes \n";//Outputting the size of float
    cout<<"The size(double) is:                "<< sizeof(double) << "bytes \n"; //Outputting the size of double
    cout<<"The size(long double) is:           "<< sizeof(long double) << "bytes \n"; //Outputting the size of long double
    cout<<"The size(bool) is:                  "<< sizeof(bool)<< "bytes \n"; //Outputting the size of bool

    return 0; //Returning 0 to indicate succesful program execution
}   //End of the main function