#include<stdio.h>
#include<string.h>
int main()
{

    char txt[1000];
    char pat[1000];
   int M = strlen (pat);
   int N = strlen (txt);
   scanf("%s %s",&txt, &pat);
   for (int i = 0; i <= N - M; i++){
        int j;
      for (j = 0; j < M; j++)
         if (txt[i + j] != pat[j])
      break;
      if (j == M)
         printf ("Pattern matches at index %d \n", i);

   }
   return 0;

}

