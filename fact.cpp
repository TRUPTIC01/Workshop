#include<iostream>
using namespace std;
int main()
{
        int i,num,fact=1;
        cout<<"Enter a number\t";
        cin>>num;
        for(i=1;i<=num;i++)                                
        fact=fact*i;
        cout<<"factorial of a number is: "<<fact;          
        return 0;                                          
}                                                          


