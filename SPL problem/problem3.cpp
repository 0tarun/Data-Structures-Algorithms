#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the Arr size ";
   cin>>n;
   int arr[n];
   cout<<"Enter the Number ";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   
   for(int i=0;i<n;i++)
   {
  bool previouslyfound=false;
  int correntValue=arr[i];
   for(int j=0;j<=i-1;j++)
   {
    if(correntValue==arr[j])
    {
        previouslyfound=true;
        break;
    }
   }
   if (previouslyfound==false)
   {
    cout<<arr[i]<<" ";
   }
   }
   cout<<endl;
   
}