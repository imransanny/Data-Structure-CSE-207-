
#include<iostream>

using namespace std;


int Reverse( int n)
{

    int r,reverse=0;
    if(n!=0)
    {
        r = n%10;
        reverse = reverse*10 + r;
        Reverse(n/10);
    }
    return reverse;
}

int main()
{
    int num, revers;
    cout<<"Enter your number: ";
    cin>> num;

    revers = Reverse(num);

             if(revers == num)
    {

        cout<<num <<" is a Palindrome Number. ";
    }
    else
    {
        cout<<num<<" is not a Palindrome Number.";
    }
}

