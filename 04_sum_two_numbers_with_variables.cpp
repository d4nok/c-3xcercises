#include <iostream> //Including the input-output stream header file

using namespace std; //Using the standard namespace

int main() //Start of the main function
{
    cout << "\n\n Print the sum of two numbers : \n"; //Outputting the messege to print the sum of two numbers
    cout << "------------------------------------\n"; //Outputting the separator line

    int a; //Declaration of integer variable 'a'
    int b; //Declaration of integer variable 'b'
    int sum; //Declaration of integer variable 'sum'

    a = 29; //Assigning value 29 to variable 'a'
    b = 30; //Assigning value 30 to variable 
    sum = a+b;//Calculating the sum of 'a' and 'b' and assigning it to 'sum'

    cout<<"The sum of "<<a<<"and "<<b<<" is: "<<sum<<"\n\n";//Outputting the calculated sum

    return 0;//Returning 0 to indicate successful program execution
}//End of the main function