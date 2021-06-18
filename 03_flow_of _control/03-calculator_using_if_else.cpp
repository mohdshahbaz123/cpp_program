// Calculator using if else statements
/* Mohammad Shahbaz Alam
18 Jun 21
*/

#include<iostream>
using namespace std;

int main(){

    char ch;
    float a, b, result;

    cout<<"\nEnter two no.\n";
    cin>> a ;
    cin>> b ;

    cout<<"\nEnter '+' ,'-', '*' , '/' \n";
    cin>> ch;

    if(ch=='+'){
        result = a+b;
        cout<<"Addition of two numbers " << a <<", " << b << " is " << result <<"\n";   
    }    
    else 
        if(ch=='-'){
        result = a-b;
        cout<<"Subtraction of two numbers " << a <<", " << b << " is " << result <<"\n";
    }
    else
         if(ch=='*'){
        result = a*b;
        cout<<"Multiplication of two numbers " << a <<", " << b << " is " << result <<"\n";
    }
    else
        if(ch=='/')   
    {
        result = a/b;
        cout<<"Division of two numbers " << a <<", " << b << " is " << result <<"\n";
    }
    else
    {
        
        cout<<"Chosen wrong operator\n";
    }

    return 0;
}
