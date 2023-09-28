#include <bits/stdc++.h>
using namespace std;
string convat_lower(string input)
{
    for (int i = 0; i < input.length(); i++)
    {
       if(input[i]>='A'&&input[i]<='Z')
       {
        input[i]=input[i]+32;
       }
    }
    return input;
    
}

string remove_space(string lowercase)
{
string result="";
for (int i = 0; i < lowercase.length(); i++)
{
   if(lowercase[i]!=' '&&lowercase[i]!='\t')
   {
    result+=lowercase[i];
   }
}
return result;

}
int main()
{
    string input;
     getline(cin, input);
    string lowercase=convat_lower(input);
    string output=remove_space(lowercase);
    cout<<lowercase<<endl;
    cout<<output;

    
}