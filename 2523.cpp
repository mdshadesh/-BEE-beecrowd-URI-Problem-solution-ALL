#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,i,j;
    char b[30];
    while(scanf("%s",&b)!=EOF){
        scanf("%d",&a);
        for(i=0;i<a;i++){
            scanf("%d",&j);
            if(i==a-1){
                 printf("%c\n",b[j-1]);
            }
            else
            printf("%c",b[j-1]);
        }
    }
    return 0;
}