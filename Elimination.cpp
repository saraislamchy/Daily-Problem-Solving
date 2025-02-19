#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    //stack<string>st;

    while(t--)
    {
        string s;
        cin>>s;
        stack<char>st;

        for(char c: s)
        {
            if(c=='0')
            {

                st.push(c);
            }
            else if( !st.empty() && c=='1')
            {
                if(st.top()=='0')
                {
                    st.pop();
                }
            }
        }

        if(!st.empty())
            cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }

    return 0;
}

