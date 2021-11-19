#include<iostream>
using namespace std;
int main()
{
  int n,l,i,j,c=0;
  int h[22];
  cout<<"enter the number of elements\n";
  cin>>n;
  cout<<"enter the elemnts\n";
  for( i=0;i<n;i++)
{
  cin>>h[i];
  cout<<"\n";
}
cout<<"enter element you want to search\n";
cin>>l;
for( j=0;j<n;j++)
{
  if(h[j]==l)
  {
    c=1;
    break;
  }  
}

if(c==1)
{cout<<"element found at index,\t"<<j+1<<endl;}
else
cout<<"element not found\n";
return 0;
}
