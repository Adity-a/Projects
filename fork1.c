#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){

int p = fork();
if (p == 0)
{
//sleep(5);
   printf("\nChild process id is %d\n",getpid());
   printf("Parent process id is %d\n",getppid());
}
else
{
sleep(5);
   printf("parent process id is %d\n",getpid());
}
return 0;
}
