#include<stdio.h>
int main(){
int a;
a=fork();
if(a==0){
printf("child created\n");
}
else if(a==1){
printf("parent created\n");
}
else
printf("error\n");

return 0;
}
