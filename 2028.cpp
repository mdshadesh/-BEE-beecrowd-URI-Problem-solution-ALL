#include <iostream>
 
using namespace std;
 
int main()
{
    int a,b,c=1,d=1,i,j,k,l;
    while(scanf("%d",&a)!=EOF)
    {
        d=1;
        for(k=0;k<=a;k++){
            for(l=0;l<k;l++){
                d++;
            }
        }
        if(d==1){
            printf("Caso %d: %d numero\n",c,d);
        }
        else{
        printf("Caso %d: %d numeros\n",c,d);
        }
        for(i=0; i<=a; i++)
        {
            if(i==0)
                b=-1;
            else
                b=0;
            for(j=b; j<i; j++)
            {
                if(i==a&&j==i-1){
                    printf("%d\n",i);
                }
                else{
                printf("%d ",i);
                }
            }
        }
    c++;
    printf("\n");
    }
    return 0;
}