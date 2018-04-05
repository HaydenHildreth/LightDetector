#include <iostream>

using namespace std;

int main()
{
    string locationStatus;
    bool locationStatusBool;
    string lightStatus;
    bool lightStatusBool;
    
    //Where are they?
    cout << "Are you in the room? ";
    cin >> locationStatus;
    if (locationStatus == "Yes" || locationStatus == "yes" || locationStatus == "YES")
    {
        locationStatusBool = true;
    }
    else if (locationStatus == "No" || locationStatus == "no" || locationStatus == "NO")
    {
        locationStatusBool = false;
    }
    else
    {
        cout << "Please enter a valid response, yes or no." << endl;
    }
    
    //Status of light
    cout << "Is the light on? ";
    cin >> lightStatus;
    if (lightStatus == "Yes" || lightStatus == "yes" || lightStatus == "YES")
    {
        lightStatusBool = true;
    }
    else if (lightStatus == "No" || lightStatus == "no" || lightStatus == "NO")
    {
        lightStatusBool = false;
    }
    else
    {
        cout << "Please enter a valid response, yes or no." << endl;
        
    }
    
    //Comparing
    if (locationStatusBool == true && lightStatusBool == true)
    {
        cout << "Ok, you're fine..." << endl;
    }
    else if (locationStatusBool == false && lightStatusBool == true)
    {
        cout << "Whataya doin' ya big dummy go turn the light off..." << endl;
    }
    else if (locationStatusBool == true && lightStatusBool == false)
    {
        cout << "What the hell are you a vampire?" << endl;
    }
    else
    {
        cout << "Ok, you're fine" << endl;
    }
    
    return 0;
}
