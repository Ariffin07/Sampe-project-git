#include<stdio.h> 
#include<unistd.h> 
int main() 
{
int pid; 
pid=fork();
if(pid==0) 
{ 
printf("\nChild process is under execution");
printf("\nProcess id of the child process is %d", getpid());
}
else 
{ 
printf("\nParent process is under execution"); 
printf("\nProcess id of the parent process is %d", getpid());
} 
return(0); 
} 

