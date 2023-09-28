#include<bits/stdc++.h>
using namespace std;
void factorial(int num)
{
    int fact=1;
     int k=num;
     
    for(int i=num;i>=2;i--)
    {
        cout<<i<<"x";
        fact=fact*i;
    }
    cout<<"1= "<<fact<<endl;
}

int main()
{
 int m,n;
 cin>>m>>n;
 for(int i=m;i<=n;i++)
 {
    cout<<i<<"!=";
    factorial(i);
 }
 

}