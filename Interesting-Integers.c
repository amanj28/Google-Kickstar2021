/* C++17 (G++) */


#include <bits/stdc++.h>
using namespace std;

bool isDivisible(long long int n)
{

  long long int temp = n;


  long long int sum = 0,product=1;
  while (n) {
    int digit = n % 10;
    sum += digit;
    product*=digit;
    n /= 10;
  }

  n = temp;

if(product%sum==0)
  return true;
  else
  return false;
}


int main()
{   int T,j=1;
    cin>>T;
    while(T!=0)
    {
  long long int n ,m,count=0;
  cin>>n>>m;
    for(long long int i=n;i<=m;i++)
    {
        if(isDivisible(i))
            count++;
    }
    cout<<"Case #"<<j++<<": "<<count<<endl;
    T--;
        
    }
  return 0;
}
