#include<stdio.h>
int graph[70][70];
int color[20];
int dis[30];
int preds[50];
int queue[50];

void print_path(int s,int k)
{
    if(k==s)
    {
         printf("\n%d",s);
    }


    else if(preds[k]==-1)
    {
        printf("\nNo path from %d to %d",s,k);
    }

    else

        {
            print_path(s,preds[k]);
            printf("\nThe path is followed:%d %d ",s,k);

        }

}


int main()
{
  int i,u,j,vertex,edges,source,dest,start,end;
  int head=0;
  int tail=0;

scanf("%d %d",&vertex,&edges);
  scanf("%d %d",&source,&dest);

  for(i=1;i<=vertex;i++)
  {
      for(j=1;j<=vertex;j++)
      {
          graph[i][j]=0;
      }
  }

  for(i=0;i<edges;i++)
  {
      scanf("%d %d",&start,&end);
    graph[start][end]=1;
    graph[end][start]=1;
  }

  for(i=0;i<=vertex;i++)
  {
      color[i]=1;
      dis[i]=1000;
      preds[i]=-1;

  }
color[source]=2;
dis[source]=0;
preds[source]=-1;

queue[head++]=source;

while(head!=tail)
{
    u=queue[tail];
    tail++;
    for(i=0;i<=vertex;i++)
    {

    if(graph[u][i]==1 && color[i]==1)
    {
        printf("white edge %d %d\n",u,i);
        color[i]=2;
        dis[i]=dis[u]+1;
        preds[i]=u;
        queue[head++]=i;
    }

    }
    color[u]=3;

}
for(i=1;i<=vertex;i++)
{
    printf("%d\n",dis[i]);
}
for(i=1;i<=vertex;i++)
{

    printf("%d ",color[i]);
}

print_path(source,dest);




}

