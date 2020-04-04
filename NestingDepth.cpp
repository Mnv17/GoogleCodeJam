#include<bits/stdc++.h>
using namespace std;
string s;

void calc(int par)
{
        string str="";
        for(int re=0;re<(s[0]-'0');re++)
            str+='(';
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i+1]-'0'<s[i]-'0')
            {
                str+=s[i];
                for(int re=0;re<abs(s[i+1]-s[i]);re++)
                    str+=')';
            }
            else
            {
                str+=s[i];
                for(int re=0;re<abs(s[i+1]-s[i]);re++)
                    str+='(';
            }
        }
        str+=s[s.length()-1];
        for(int i=0;i<s[s.length()-1]-'0';i++)
            str+=')';
        cout<<"Case #"<<par<<":"<<" "<<str<<endl;
}

int main()
{
    int T;
    cin>>T;
    int par=0;
    while(T--)
    {
        par++;
        cin>>s;
        calc(par);
    }
   
}
