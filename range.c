#include <stdio.h>
int main()
{
    int start,end;
    printf("start number :");
    scanf("%d",&start);
    printf("end number :");
    scanf("%d",&end);
    if(start % 4!=0)
    {
        start=start = (4 - start %4);
    }
        for (int i = start; i <= end; i += 4) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
