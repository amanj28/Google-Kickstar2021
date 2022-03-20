/* #C++17 (G++) */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
#define mp make_pair
#define pb push_back
#define in insert
#define se second
#define fi first
typedef vector<long long int> vl;
typedef vector<vector<long long int>> vvl;
typedef vector<pair<long long int,long long int>> vpl;
typedef vector<pair<int,int>> vpi;
typedef pair<long long int,long long int> pll;
typedef vector<int> vi;
typedef unordered_map<long long int , long long int> umap;
typedef map<long long int,long long int> smap;
typedef unordered_map<string , long long int> slumap;
typedef unordered_map<string , string> sumap;
typedef multimap<string , string> smul;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    for(ll ti=1;ti<=t;ti++){
        string s;
        cin>>s;
        ll sum=0;
        for(int i=0;i<s.size();i++){
            ll x=s[i]-'0';
            sum+=x;
        }
        if(sum%9==0){
            string r="";
            r+=s[0];
            r+='0';
            for(int i=1;i<s.size();i++){
                r+=s[i];
            }
            cout<<"Case #"<<ti<<": "<<r<<endl;
        }else{
            ll x = 0;
            while(sum%9!=0){
                sum++;
                x++;
            }
            char c = '0';
            c += x;
            string r="";
            /*ll ind=-1;
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]>=c){
                    r+=s[i];
                }else{
                    ind=i;
                    break;
                }
            }
            cout<<"Case #"<<ti<<": ";
            for(int i=0;i<=ind;i++){
                cout<<s[i];
            }
            cout<<c;
            reverse(r.begin(),r.end());
            cout<<r<<endl;*/
            ll n=s.size();
            string maxi=s;
            maxi=c+s;
            for(int i=0;i<n;i++){
                r="";
                r+=s.substr(0,i+1);
                r+=c;
                r+=s.substr(i+1,n);
                maxi=min(maxi,r);
            }
            cout<<"Case #"<<ti<<": "<<maxi<<endl;
        }
    }
    return 0;
}
