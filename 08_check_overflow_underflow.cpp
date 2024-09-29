#include <iostream> //Including the input-output stream geader file

using namespace std; //Using the standard namespace

int main() //Start of the main function

{
    cout << "\n\n Check overflow/underflow during various arithmetical operation :\n";//Outputting a messege to check overflow/underflow
    cout << "Range of int is [-2147483648, 214783647]"<<endl; //Display the range of int 
    cout << "-------------------------------------------------------------\n"; //Outputting a separator line

    int n1 = 2147483647; //Assigning the maximum rnage of integer to n1 
    cout <<" Over the integer range and set in minimum rnage : " << n1 + 1 << endl; //Attempting to overflow by adding 1
    cout <<" Increasing from its minimum range : " << n1 + 2 << endl; //Trying to increase beyond the maximum limit
    cout <<" Product is :" << n1 * n1 << endl; //Calculating the product of n1 with itself

    int n2 = -2147483648; //Assigning the minimum range of integer to n2
    cout <<" Underflow the range and set in maximum range : " << n2 -1 << endl; //Attempting to underflow by suvtractiong 1
    cout <<" Decreasing from its mazimum range : " << n2 -2 << endl; //Trying to devrease beyond the minimum limit
    cout <<" Product is : " << n2 * n2 << endl; //Calculating the product of n2 with itself


    cout << endl; // Outputting a black line for better  readbility
    return 0; //Retunrning 0 to indicate succesful program excecution
}// End of the main function