#include<bits/stdc++.h>
using namespace std;
int ar[10000];
vector<int>v;
void sieve()
{
    int i,j,n=10000;
    v.push_back(1);
    v.push_back(2);
    for(i=3; i<=n; i+=2)
    {
        if(ar[i]==0)
        {
            v.push_back(i);
            if(i>n/i) continue;
            for(j=i*i; j<=n; j+=(i+i)) ar[j]=1;
        }
    }
}


int main()
{
    int i,j,x,n,c,a;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    sieve();
    while(cin>>n>>c)
    {
        i=0;
        while(v[i]<=n)
        {
            i++;
        }
        //cout<<v.size()<<endl;

        if(i%2==0)//i>2
        {
            x=2*c;
        }
        else
        {
            x=(2*c)-1;
        }
        cout<<n<<" "<<c<<":";
        if(x>=i)
        {

            for(j=0; v[j]<=n; j++)
                cout<<" "<<v[j];
            cout<<"\n\n";

        }
        else
        {

            a=(i-x)/2;
            for(j=a; j<a+x; j++)
                cout<<" "<<v[j];
            cout<<"\n\n";
        }
    }
    return 0;
}
