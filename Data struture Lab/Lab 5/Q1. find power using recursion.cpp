#include<iostream>

using namespace std;

int power(int x, int n){

   int result;
   if(n ==0){
    return 1;
    }else{
        result = x  * (power(x, n-1));
    }
    return result;
  }

  int main(){

    int base=5, p=2, result;

    //cout<<"Enter the value of base: " ;
    //cin>>base;

   // cout<<"Enter the value of power: " ;
    //cin>>p;


     result = power(base, p);
    cout<<"The result:  " ;
     cout<<result;

  }
