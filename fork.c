#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){

int p = fork();
if (p == 0)
{
  printf("child %d\n",getpid());
}
else if (p>0)
{
  printf("parent %d\n",getpid());
}
else if (p<0)
{
  printf("error");
}
return 0;
}
