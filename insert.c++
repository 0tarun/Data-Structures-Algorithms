#include <bits/stdc++.h>
using namespace std;



int main()
{
   char vertex[26];
   int arr[100][100],NO_OF_VERTEX;
  char insert='A'; 
  for (int i = 0; i < 26; i++)
  {
   vertex[i]=insert;
   insert=insert+1;
  }

cout<<"How manny vertex you want ";
cin>>NO_OF_VERTEX;


  for (int i = 0; i < NO_OF_VERTEX; i++)
  {
   for (int j = 0; j < NO_OF_VERTEX; j++)
   {
    arr[i][j]=0;
   }
  }

  for (int i = 0; i < NO_OF_VERTEX; i++)
  {
   for (int j = i+1; j < NO_OF_VERTEX; j++)
   {
    cout<<vertex[i]<<"--"<<vertex[j]<<"  ";
    cin>>arr[i][j];
    if(arr[i][j]==1)
    {
      arr[j][i]=1;
    }
   }
  }
  cout<<endl;

  for (int i = 0; i < NO_OF_VERTEX; i++)
  {
    cout<<vertex[i]<<"->";
   for (int j = 0; j < NO_OF_VERTEX; j++)
   {
    cout<<arr[i][j];
   }
   cout<<endl;
   
  }
  
  cout<<endl<<"OR,"<<endl;


  for (int i = 0; i < NO_OF_VERTEX; i++)
  {
    cout<<vertex[i]<<"->";
   for (int j = 0; j < NO_OF_VERTEX; j++)
   {
    if(arr[i][j]==1)
    {
      cout<<vertex[j];
    }
   }
   cout<<endl;
   
  }
  char c;
 cout<<"Enter vertex to find adjacent list ";
 cin>>c;
  
  for (int i = 0; i < NO_OF_VERTEX; i++)
  {
    if(vertex[i]==c)
    {
cout<<vertex[i]<<"->";
   for (int j = 0; j < NO_OF_VERTEX; j++)
   {
    if(arr[i][j]==1)
    {
      cout<<vertex[j];
    }
   }
    }
   
  }
   

  // for (int i = 0; i < 26; i++)
  // {
  //   cout<<vertex[i]<<" ";
  // }
  
  

    return 0;
}