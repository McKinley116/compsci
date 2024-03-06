#include <iostream>

int main () 
{  
   
    double MPH;
    std::cout << "Enter Vehicle Speed(in MPH):" << std::endl;
    std::cin >> MPH;
    double calcKPH = MPH * 1.60934;   // 1 mile = 1.60934 kilometers
    double metersPH = MPH * 1609.34 / 3600; // to convert MPH to meters per hour, 1 mile = 1609.34 meters and 1 hour = 3,600 seconds 
    std::cout << "Speed in Kilometers per hour is " << calcKPH << " and is the same as " << metersPH << " meters per hour." << std::endl;
    return 0;
}
