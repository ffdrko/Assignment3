#include "StackType.h"
#include <iostream>

using namespace std;

int main()
{
   StackType<char> a;
    string s;
    char x;
    cout<<"Enter a String"<<endl;
    getline(cin,s);

    // cout<<"length of string : "<<s.length()<<endl;

    for (int i=0; i<s.length(); i++)
    {
        if(s[i]!=' ')
        {
            a.Push(s[i]);
        }
        else
        {
            while (!a.IsEmpty())
            {
                cout<<a.Top();
                a.Pop();
            }
            cout<<" ";
        }

    }
    while (!a.IsEmpty())
    {
        cout<<a.Top();
        a.Pop();
    }

}
