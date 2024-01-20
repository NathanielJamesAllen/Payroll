// Source2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float calc_pay(int, float);

int main()
{
    int hours;
    float pay, rate;
    //Input
    cout << "Enter the hours worked: ";
    cin >> hours;

    cout << "Enter the payrate:  ";
    cin >> rate;

    //Processing
    pay = calc_pay(hours, rate);

    //Output
    cout << "The pay is:  " << pay << endl;
    


    return 0;


}
float calc_pay(int h, float r) {
    return(h * r);

}


