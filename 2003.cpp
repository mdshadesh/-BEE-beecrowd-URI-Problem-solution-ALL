#include <iostream>
 
using namespace std;
 
int main()
{
    int h,m;
    while(scanf("%d:%d",&h,&m)!=EOF)
    {
        if(h<7||(h==7&&m==0)){
            printf("Atraso maximo: 0\n");
        }
        else
        {
            if(h<8)
            {
                printf("Atraso maximo: %d\n",m);
            }
            else if(h<9)
            {
                printf("Atraso maximo: %d\n",m+60);
            }
            else if(h==9)
            {
                printf("Atraso maximo: %d\n",m+120);
            }
        }
    }
    return 0;
}