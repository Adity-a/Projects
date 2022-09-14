#include<stdio.h>
#include<unistd.h>
int main(){
int a;
a=fork();
if(a>1){
printf("parent created %d \n", getpid());
}
else if(a==0){
printf("child created %d \n" , getpid());
}
else if(a<0)
printf("error %d \n" , getpid());

return 0;
}
