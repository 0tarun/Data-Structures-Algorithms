#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        bool previouslyFound=false;
        int currentValue=arr[i];
        for(int j=0;j<=i-1;j++)
        {
            if (currentValue==arr[j])
            {
                previouslyFound=true;
                break;

            }
            
            
        }
       
        if(previouslyFound==false)
            {
                 int count=1;
                
                for(int k=i+1;k<n;k++)
                {
                    if (currentValue==arr[k])
                    {
                        count++;
                    }
                }
                cout<<arr[i]<<" Occer "<<count<<" Times"<<endl;
            }
    }
    //cout<<endl;
}