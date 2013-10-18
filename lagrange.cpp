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
    int i;
    scanf("%d",&cnt);
    for(i=1;i<=cnt;++i)
    {
        scanf("%lf%lf",&xx[i],&yy[i]);
    }
}
int main()
{
    int i,j;
    double x,y,tmp;
    pre();
    while(scanf("%lf",&x)!=EOF)
    {
        y=0;
        for(i=1;i<=cnt;++i)
        {
            tmp=1.0;
            for(j=1;j<=cnt;++j)
            {
                if(j==i) continue;
                tmp*=(x-xx[j])*1.0/(xx[i]-xx[j]);
            }
            y+=tmp*yy[i];
        }
        printf("%f\n",y);
    }
    return 0;
}
