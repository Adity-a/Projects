#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){

int p = fork();
if (p == 0)
{
sleep(5);
printf("\nprocess id is %d\n",getpid());
}
else
{
   printf("Parent process id is %d\n",getppid());
}
return 0;
}
