#include<bits/stdc++.h>
using namespace std;
long long ar[10000100];
vector<long long>v;
void sieve()
{
    long long i,j,n=10000100;
    v.push_back(2);
    for(i=3; i<n; i+=2)
    {
        if(ar[i]==0)
        {
            v.push_back(i);
            if(i>n/i)
                continue;
            for(j=i*i; j<=n; j+=(i+i))
                ar[j]=1;
        }
    }
}

int main()
{
    int c;
    long long i,large,n;
    sieve();
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cout<<v[v.size()-1]<<endl;
    while(cin>>n)
    {
        if(n==0)break;
        if(n<0)n=(long long) abs(n);
        large=0;
        c=0;
        for(i=0; v[i]<=sqrt((double)n); i++)
        {

            if(n%v[i]==0)
            {
                 c++;
                large=v[i];
                while(n%v[i]==0)
                {
                    n/=v[i];
                }

}
}
        if(n!=1)
        {
            c++;
            large=n;
        }
       if(c>=2) printf("%lld\n",large);
       else printf("-1\n");

    }

    return 0;
}
