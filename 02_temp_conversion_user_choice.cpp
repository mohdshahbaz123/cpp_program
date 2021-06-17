// Temperature conversion from fahrenheit to celsius & vice versa with user choice
/* 
17 Jun 21
Mohammad Shahbaz Alam
Program 02
*/

#include<iostream>
using namespace std;

int main(){

    int choice;
    double temp, conv_temp;

    cout<<"Enter your option\n";
    cout<<"1. Conversion from fahrenheit to celsius\n";
    cout<<"2. Conversion from celsius to fahrenheit\n";
    cin>>choice;

    if (choice == 1){
        cout<<"Enter temperature in fahrenheit: ";
        cin>> temp ;
        conv_temp = (temp-32)/1.8;
        cout<<"The temperature in celsius is " << conv_temp <<", for " << temp << " fahrenheit";
    }

    if (choice == 2){
        cout<<"Enter temperature in celsius: ";
        cin>> temp ;
        conv_temp = 1.8 * temp + 32;
        cout<<"The temperature in fahrenheit is " << conv_temp <<", for " << temp << " celsius";    
    }
    return 0;
}
