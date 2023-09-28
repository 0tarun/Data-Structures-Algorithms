#include <bits/stdc++.h>
using namespace std;
int reverse(int arr[] ,int n)
{

    int newArr[n],j=0;
    for(int i=n-1;i>=0;i--)
    {
            newArr[j]=arr[i];
        j++;
    }
    cout<<"Reverse arrey ";
    for(int i = 0; i < n; i++)
    {
        cout<<newArr[i]<<" ";
    }
    
    return 0;
    
}

int main()
{
    int n;
    cout<<"Enter the size of arrey ";
    cin >> n;
    int arr[n];
    cout<<"Enter the number of element ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    reverse(arr,n);
}