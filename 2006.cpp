#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,i,c=0;
    scanf("%d",&a);
    if(a>0&&a<5)
    {
    for(i=0;i<5;i++)
    {
      scanf("%d",&b);
      if(b>0&&b<5)
      {
        if(b==a)
        {
            c++;
        }
      }
    }
    }
    printf("%d\n",c);
    return 0;
}