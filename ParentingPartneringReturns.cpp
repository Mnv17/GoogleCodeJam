#include<bits/stdc++.h>
using namespace std;
 
signed main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
   
    int H;
    cin>>H;

    for(int hell=1;hell<=H;hell++){
        cout<<"Case #"<<hell<<": ";

        int n;
        cin>>n;

        vector<pair<pair<int, int>, int>> work;
        for(int i=0;i<n;i++){
            int s, e;
            cin>>s>>e;

            work.push_back({{s, e}, i});
        }
        string s = "";
        for(int i=0;i<n;i++) s += '@';

        vector<pair<int, int>> kaam;

        for(auto it:work){
            kaam.emplace_back(it.first.first, (it.second + 1));
            kaam.emplace_back(it.first.second, -(it.second + 1));
        }

        sort(kaam.begin(), kaam.end());
        bool c = true, j = true;
        bool tire = true;

        for(auto it:kaam){
            if(it.second > 0){
                int list = it.second;
                if(c){
                    s[list - 1] = 'C';
                    c = false;
                }
                else if(j){
                    s[list - 1] = 'J';
                    j = false;
                }
                else{
                    tire = false;
                    break;
                }
            }
            else{
                int list = -it.second;
                if(s[list - 1] == 'C') c = true;
                else if(s[list - 1] == 'J') j = true;
                else{
                    tire = false;
                    break;
                }
            }
        }

        if(tire) cout<<s<<endl;
        else cout<<"IMPOSSIBLE"<<endl;
    }
} 
