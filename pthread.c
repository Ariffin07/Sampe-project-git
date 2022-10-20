#include<stdio.h>
#include<pthread.h>
void *add()
{
int a=5,b=2;
printf("\n%d",a+b);
}
int main()
{
pthread_t t;
printf("TID:%ld",t);
int s= pthread_create(&t,NULL,add,NULL);
printf("%d",pthread_self());
if(s==0)
printf("\nThread is created successfully");
else
printf("\nThread creation is Failed");
int a= pthread_join(t,NULL);
if(a==0)
printf("\nThread Execution is completed successfully");
else
printf("\nThread Execution is not completed");
pthread_exit(0);
printf("\n%ld",t);
return 0;
}

