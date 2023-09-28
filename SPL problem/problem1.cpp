#include<iostream>
using namespace std;
int main()
{
    int n,number;
    float sum=0;
    cout<<"Enter the Input number";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>number;
        sum+=number;
    }
    cout<<"Average is "<<sum/n;


}