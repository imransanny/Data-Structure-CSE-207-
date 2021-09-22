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
    int num1=10, num2= 15;
    int GCD_result;

    //cout<<"Enter the value number 1: ";
    //cin>>num1;

    //cout<<endl <<"Enter the value number 2: ";
    //cin>>num2;

    GCD_result = GCD(num1, num2);

    cout<<"Number 1 = " <<num1<<" Number 2 = " <<num2;

    cout<< endl<<" GCD result " << GCD_result;

}
