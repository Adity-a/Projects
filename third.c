#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
int main(){



int n;
printf("enter the size\n");
scanf("%d",&n);

int arr[n];
printf("enter the elements\n");
for(int i=0;i<n;i++)
scanf("%d", &arr[i]);

int a=fork();
if(a>0){
wait(NULL);
 for(int i =0;i<n;i++)
   if (arr[i]%2==0)
   printf("number is even (parent) %d \n" , arr[i]);
   sleep(20);
 
}
else if(a==0){
 for(int i =0;i<n;i++)
   if (arr[i]%2!=0)
   printf("number is odd (child) %d \n" , arr[i]);
   sleep(30);
     
}
else if(a<0)
printf("error %d \n" , getpid());


return 0;
}
