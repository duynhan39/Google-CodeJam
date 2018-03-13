#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string minOne(string num, int index);

string solve(string s);

int main(int argc, char* argv[]) {

    ifstream in(argv[1]);
    ofstream out(argv[2]);
    
    int n;
    in>>n;
    for(int round=1; round<=n; round++)
    {
        string s;
        in>>s;
        out<<"Case #"<<round<<": "<<solve(s)<<endl;
    }
    return 0;
}

string solve(string s)
{
    
    int i=0;
    for(i=0; i<s.size()-1; i++)
    {
        if(s[i]>s[i+1])
        {
            int j=i;
            s[j]--;
            for(j=i+1; j<s.size(); j++)
            {
                s[j]='9';
            }
            break;
        }
    }
    
    for(int j=i-1; j>=0; j--)
    {
        if(s[j]>s[j+1])
        {
            s[j]--;
            s[j+1]='9';
        }
    }
    
    if(s[0]=='0')
        s=s.substr(1, string::npos);
    return s;
}
