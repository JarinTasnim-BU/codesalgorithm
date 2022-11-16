#include<stdio.h>
int main()
{
    int N,i;

    for(i=1;i<=N;i++)
   {
    scanf("%d",&N);
    if (N%2 == 0 && N > 0)
            printf("EVEN POSITIVE\n");

    else if (N%2 == 0 && N<0)
            printf("EVEN NEGATIVE\n");


    else if(N == 0)
        printf("NULL");

    else if(N%2 != 0 && N < 0)
        printf("ODD NEGATIVE\n");

    else if(N%2 != 0 && N > 0)
        printf("ODD POSITIVE\n");
    }

    return 0;
}
