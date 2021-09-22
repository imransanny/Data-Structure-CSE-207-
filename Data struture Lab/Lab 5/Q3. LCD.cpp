#include<iostream>
using namespace std;

int GCD(int x, int y)
{
    int result;
    if(y==0)
    {
        return x;
    }
    else
    {

        result= GCD(y, x%y);

    }
    return result;

}

int main()
{
    int num1, num2;
    int GCD_result;
    int LCM_result;

    cout<<"Enter the value number 1: ";
    cin>>num1;

    cout<<endl <<"Enter the value number 2: ";
    cin>>num2;

    GCD_result = GCD(num1, num2);

    cout<< " GCD result " << GCD_result;

    LCM_result = (num1 * num2)/ GCD_result;

    cout<<endl <<"LCM result: " << LCM_result;

}

