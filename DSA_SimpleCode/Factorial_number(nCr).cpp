#include<iostream>
using namespace std;

unsigned long long fact(int n)
{
    unsigned long long ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}

int nCr(int n,int r)
{
    int num = fact(n);
    int deno = fact(r) * fact(n-r);
    int ans2  =num/deno;
    
    return ans2;
}


int main()
{
    int n,r;
    cin>>n >> r;
    cout<<"Answer is="<<nCr(n,r)<<endl;
}
