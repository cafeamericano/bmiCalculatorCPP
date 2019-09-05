//SETUP
#include <iostream>
#include <cmath>
using namespace std;

// FUNCTIONS //////////////////////////////////////////////////////////

void printLineBreak(int lineCount)
{
    for (int i = 0; i < lineCount; i++)
    {
        cout << "\n";
    }
}

void printHeader()
{
    cout << "############################################################# \n";
    cout << "############# WELCOME TO THE C++ BMI CALCULATOR ############# \n";
    cout << "############################################################# \n";
}

void printIntroGraphic()
{
    cout << "                                                             \n";
    cout << "          ########################################           \n";
    cout << "          ########################################           \n";
    cout << "          #######                          #######           \n";
    cout << "          #######         0 . 0 LBS        #######           \n";
    cout << "          #######                          #######           \n";
    cout << "          ########################################           \n";
    cout << "          ########################################           \n";
    cout << "          ########################################           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          ########################################           \n";
    cout << "          ########## STEP ON THE SCALE! ##########           \n";
    cout << "          ########################################           \n";
    cout << "                                                             \n";
}


void printBMIResultGraphic(float bmiValue)
{
    cout << "                                                             \n";
    cout << "          ########################################           \n";
    cout << "          ########################################           \n";
    cout << "          #######                          #######           \n";
    cout << "          #######         BMI: ";
    cout << bmiValue;
    cout << "          #######\n";
    cout << "          #######                          #######           \n";
    cout << "          ########################################           \n";
    cout << "          ########################################           \n";
    cout << "          ########################################           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          #####       ################       #####           \n";
    cout << "          ########################################           \n";
    cout << "          ### YOUR RESULT HAS BEEN CALCULATED! ###           \n";
    cout << "          ########################################           \n";
    cout << "                                                             \n";
}

// MAIN ///////////////////////////////////////////////////////////////
int main()
{

    //Add in some spacing, then print the header
    printLineBreak(1);
    printHeader();
    printIntroGraphic();

    //Variable initialization
    float pounds, inches;

    //Find out user's weight in pounds
    cout << "What is your weight in pounds?: ";
    cin >> pounds;

    //Find out user's height in inches
    cout << "What is your height in inches?: ";
    cin >> inches;

    //Display BMI calculation to user
    printLineBreak(1);
    float bmiResult = trunc((703 * pounds) / (inches * inches));
    printBMIResultGraphic(bmiResult);

    //End program
    return 0;
}
