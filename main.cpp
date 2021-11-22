#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int i,j,n,time,sum_wait=0,sum_turnaround=0,smallest;
int at[10],bt[10],pt[10],rt[10],remain; //rt = remaining Time
cout<<"Enter no of Processes : ";
cin>>n;
remain=n;
for(i=0;i<n;i++)
{
cout<<"Enter arrival time, burst time and priority for process:"<<i+1;
cin>>at[i];
cin>>bt[i];
cin>>pt[i];
rt[i]=bt[i];
}
pt[9]=11;
cout<<"\n\nProcess\t"<<"Turnaround time"<<"waiting time\n";
for(time=0;remain!=0;time++)
{
smallest=9;
for(i=0;i<n;i++)
{
if(at[i]<=time && pt[i]<pt[smallest] && rt[i]>0)
{
smallest=i;
}
}
rt[smallest]--;
if(rt[smallest]==0)
{
remain--;
sum_wait+=time+1-at[smallest];
sum_turnaround+=time+1-at[smallest]-bt[smallest];
}
}
cout<<"\nAvg waiting time =\n"<<sum_wait*1.0;
cout<<"Avg turnaround time ="<<sum_turnaround*1.0;
return 0;
}




