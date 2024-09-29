#include <iostream> //Including the input - output stram header file

using namespace std;//Using the standard namespace

int main() //Start of the main function
{
    int num = 57; //Initializing an integer cariable 'num' with the value 57
    cout<<"\n\n Display the operation of pre and post increment and decrement :\n";//Outputting a messege for demonstrating increment an ddecrement oopoerations
    cout<<"--------------------------------------------------------------------\n";//Outputting a separator line
    cout<<" The number is : " << num << endl; //Displaying the initial value of 'num'
    num++; //post-incrementing 'num' by 1
    cout <<" After post increment by the number is : " << num << endl;//Displaying 'num' after post-invcrementing 
    ++num; //Pre-invrementing 'num' by 1
    cout<<" After pre increment by 1 the number is : " << num << endl; //Displaying 'num' after pre-invrementing 
    num = num + 1 ; // Increasing 'num' by 1
    cout<<" After increasing by 1 the number is : " << num << endl; //Displaying 'num' after increasing by 1
    num--;//post-decrementing 'num' by 1
    cout<<" After post decrement by 1 the number is : " << num << endl; //Displaying 'num' after post-deacrementing
    --num; //Pre-decrementing 'num' by 1
    cout <<" After pre decrement by 1 the number is : " << num << endl;//Displaying 'num' after pre-decrementing
    num = num -1; //Decreasing 'num' by 1 
    cout <<" After deacresing by 1 the number is : " << num << endl; //Displaying 'num' after deacreasing by 1
    cout << endl; // Outputting a blank line for better readbility
    return 0; //Retuning 0 to indicate successful program execution
}//End of the main function