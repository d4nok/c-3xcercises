#include <iostream> //Including the input-output stream header file

using namespace std; //Using the standard namespace

int main() //Start the main function
{
    int sid1; //Declaring an integer variable sid1 to store the side length of the cube 
    float volcu; //Deaclaring a floating-point variable volcu to store the volume of the cube
    cout << "\n\n Calculate the volume of a cube :\n"; //Outputting a message indicating the calculation of cube volume
    cout<<"---------------------------------------\n";//Outputting  aseparator line

    cout<<" Input theside of a cube : "; //Prompting the user to input the side length of the cube
    cin>> sid1; //Taking input fo rthe side length from the user

    //Calculating the volume of the cube using th eformula : side * side * side
    volcu = (sid1 * sid1 *sid1);

    cout<<" The volume of a cube is : "<< volcu << endl; //Displaying the calculating volume of the cube
    cout<<endl; //Outputting a black line for better readability

    return 0; //Returning 0 to indicate successful program execution
}//End of the main funcition