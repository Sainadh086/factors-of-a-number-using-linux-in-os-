#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
pid_t p;
p=fork();
if(p==0)
{
printf("child process is created");
int i,n;
printf("\n Enter the value");
scanf("%d",&n);
while(n>0)
{
printf("The entered number is %d positive",n);
printf("\nThe sequence is ");
for(i=n;i<=n;i--)
{
if(i>0 && n%i==0)
{
printf("\n%d",i);
}
}
return 0;
}
}
else
{
waitpid(p,NULL,0);
printf("\n Parent process id is %d",getpid());
}
}


