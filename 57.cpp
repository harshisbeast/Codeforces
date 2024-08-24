#include <iostream>
using namespace std;
int main()
{
    int nc;
    cin >> nc;
    while (nc--)
    {
        string s;
        cin >>s;
        string t;
        cin >> t;
        int n = s.length();
        int m = t.length();
        int i = 0;
        int j = 0;
        int flag = 0;
        while (i < n && j < m)
        {
            if (s[i] == t[j])
            {
                i++;
                j++;
            }
            else if (s[i] == '?')

            {
                s[i] = t[j];
                i++;
                j++;
            }
            else
            {
                i++;
            }
        }
        if( j==m)
        {
            cout<<"YES"<<endl;
            for( int i=0; i< n; i++)
            {
                if( s[i]=='?')
                {
                    s[i]='a';
                }
            }
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}