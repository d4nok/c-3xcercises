#include <iostream>//Including the input-output stram header file

using namespace std;//Using the standard namespace

int main() // Start the main function
{
    int rad1;//Declaring an integer variable rad1 to store the radius of the sphere
    float volsp; //Declaring a floating-point variable volsp to store the volume of the sphere
    cout << "\n\n Calculate the volume of a sphere :\n"; //Outputting a messege indicating the calculation of sphere volume
    cout <<"-----------------------------------------\n";//Outputting a separator line

    cout << "Input the radius of a sphere :\n";//Prompting the user to input the radius of the sphere
    cin >> rad1; //Taking input for the radius from the user

    //Calculating the volume of the sphere using the formula: (4/3) * Π * r^3
    volsp = (4 * 3.14 * rad1 * rad1 *rad1) / 3;

    cout<< " The volume of a sphere is : "<< volsp << endl; //Displaying the calculated volume of the sphere
    cout<< endl;//Outputting a blank line for better readability

    return 0; //Returning 0 to indicate succesful program execution
}//End of the main function