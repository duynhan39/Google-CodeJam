#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string solve(string s, int size)
{
    int count=0;
    for(int i=0; i<=s.size()-size; i++)
    {
        if(s[i]=='-')
        {
            for(int each=0; each<size; each++)
            {
                if(s[i+each]=='-')
                    s[i+each]='+';
                else
                    s[i+each]='-';
            }
            count++;
        }
    }
    for(int i=s.size()-size+1; i<s.size(); i++)
    {
        if(s[i]=='-')
            return "IMPOSSIBLE";
    }
    return to_string(count);
}

int main(int argc, char* argv[]) {
    
    ifstream in(argv[1]);
    ofstream out(argv[2]);
    
    int n;
    in>>n;
    for(int round=1; round<=n; round++)
    {
        string s;
        int size;
        in>>s>>size;
        out<<"Case #"<<round<<": "<<solve(s, size)<<endl;
    }
    return 0;
}
