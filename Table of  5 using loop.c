#include<stdio.h>
main()
{
    int i,j,k;
    printf("The Table of 5:\n");
    for(i=5,j=1,k=5; j<=10,k<=50; j++,k=k+5)
        printf("%d x %d = %d\n",i,j,k);
}
