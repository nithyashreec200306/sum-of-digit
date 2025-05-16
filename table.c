#include<stdio.h>
int main()
{
    int x;
    int y;
    scanf("%d",&x);
    scanf("%d",&y);
    for(int i=1;i<=x;i++){
        printf("%d * %d = %d\n",i,y,i * y);
    }
    return 0;
}