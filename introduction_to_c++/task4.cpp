#include<iostream>
using namespace std;
int main()
{
  
  int i;
  int j;
  int k;
  int s;

  cout<<"Enter the any no:"<<endl;
  cin>>s;
  
  for(i=1;i<=s;i++)
     {
	     for(j=1;j<=i;j++)	
 	     cout<<"*";
 	     cout<<endl;
     }
			
	 for (int i = s-1; i>0; i--)
	 {
	     for(k=0;k<i;k++){
	     cout<<"*";
	     }
	  
	     	cout<<endl;
	 }
}