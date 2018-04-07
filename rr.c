// round robin scheduling c program
#include<stdio.h>
#include<conio.h>
struct process
{
    char na[20];
    int at,bt,ft,tat,rem,pr;
    float ntat;
}Q[5],temp;
int rr[20],q,x,k;
main()
{
    int f,r,n,i,j,tt=0,qt,t,flag,wt=0;
    float awt=0,antat=0,atat=0;
    
    printf("Enter the no. of jobs:");
    scanf("%d",&n);
    for(r=0;r<n;r++)
    {
        printf("Enter process name :\n");
        scanf("%s",Q[r].na);
		printf("Enter the arrival time :\n");
        scanf("%d",&Q[r].at);
		printf("Enter burst time :\n");
        scanf("%d",&Q[r].bt);
		printf("Enter priority :\n");
		scanf("%d",&Q[r].pr);
    }
    printf("Enter quantum:\n");
    scanf("%d",&qt);
    for(i=0;i<n;i++)
    {
       
 
