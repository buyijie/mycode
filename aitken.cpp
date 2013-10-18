#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
const int maxn=105;
double xx[maxn],yy[maxn];
int cnt;
void pre()
{
    int i,j;
    scanf("%d",&cnt);
    for(i=1;i<=cnt;++i)
    {
        scanf("%lf%lf",&xx[i],&yy[i]);
    }
}
int main()
{
    int i,j;
    double tmp,x,y;
    pre();
    while(scanf("%lf",&x)!=EOF)
    {
        for(i=2;i<=cnt;++i)
        {
            for(j=i;j<=cnt;++j)
            {
                yy[j]=yy[i-1]+((yy[j]-yy[i-1])/(xx[j]-xx[i-1]))*(x-xx[i-1]);
            }
        }
        printf("%f\n",yy[cnt]);
    }
    return 0;
}
