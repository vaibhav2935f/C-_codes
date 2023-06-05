/*#include<iostream>
using namespace std;
int main()
{
   int A[6]= {2,4,4,5,6,7};
   for (int i = 0; i < 5; i++)
   {
    cout<<A[i]<<endl;
   }
    
    return 0;
}
*/
/*#include<iostream>
using namespace std;
int main()
{ 
    int i;
    float A[] = {5.5f,5.8f,7,5,78};
  for ( i = 0; i < 5; i++)
  {
    cout<<A[i]<<endl;
  }
  
    return 0;
}
*/ /*
#include<iostream>
using namespace std;
int main()
{
  int A[7]={2,3,4,5,66,7,9};
  int n=7, sum=0;
  for (int i = 0; i < 7; i++)
  {
    sum += A[i];
  }
  cout<<"sum is "<<sum<<endl;
  return 0;
}
*/ /*
#include<iostream>
using namespace std;
int main()
{
  int A[7]={5,8,8,9,7,5,8};
  int n=7, Max;
  Max= A[0];
for (int i = 0; i < 7; i++)
{
 if (A[i]>Max)
 {
  Max = A[i];
 }
}
 cout<<"Maximum no is = "<<Max<<endl;
  return 0;
}*/
/*LINEAR SEARCH*/ /*
#include<iostream>
using namespace std;
int main()
{
  int A[10],n = 10, i,key;
  cout<<"Enter number = "<<endl;
  for ( i = 0; i < n; i++)
  {
    cin>>A[i];
  }
  cout<<"Enter the key = "<<endl;
  cin>>key;
  for ( i = 0; i < n; i++)
  {
    if (key==A[i])
    {
      cout<<"key is founded "<<i<<endl;
      return 0;
    }
    
  }
  cout<<"key no found  ";
  return 0;
}*/
/*BINARY SEARCH*/ 
/*
#include<iostream>
using namespace std;
int main()
{
 int A[10] = {6,8,9,10,14,15,25,28,65,55};
 int l=0, h=9, key, mid;
 cout<<"Enter the key number which one you wnat to find = ";
 cin>>key;
 while (l<=h)
 {
  mid = (l + h)/2;
  if (key == A[mid])
  {
   cout<<"Found at "<<mid;
   return 0; 
  }
  else if (key<mid)
  h = mid-1;
  else
    l = mid + 1;
  
 }
 cout<<"not find  ";
  return 0;
}
*/
/*NESTED LOOP*/ /*
#include<iostream>
using namespace std;
int main()
{
  int i,j;
  for (i = 0; i <=5; i++)
  {
    for (j = 0; j<=5; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  
  return 0;
}
*/
/*PATTERNS*/ /*
#include<iostream>
using namespace std;
int main()
{
  int i, j, count =0;
  for ( i = 0; i < 4; i++)

  {
    for ( j = 0; j < 4; j++)
    {
      count= count+ 1;
      cout<<count<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}
*/
/*TRIANGLE PATTERN*/ /*
#include<iostream>
using namespace std;
int main()
{
  int i,j,n;
cout<<"Enter the number of lines of triangle = ";
cin>>n;
cout<<"  YOUR PATTERN IS   "<<endl;
for ( i = 0; i < n; i++)
{
  for ( j = 0; j <n; j++)
  {
      if (i>=j)
      {
        cout<<"*";
      }
      
  }
  cout<<endl;
}

  return 0;
}
*/
/*REVERSE TRIANGLE PATTERN*/ /*
#include<iostream>
using namespace std;
int main()
{
  int i, j, n ;
  cout<<"ENTER THE NUMBER OF LINE OF PATTERN = ";
  cin>>n;
  cout<<"YOUR PATTERN IS  "<<endl;
  for ( i = 0; i < n; i++)
  {
    for ( j = 0; j < n; j++)
    {
      if (i+j>n-1)
      {
        cout<<"*";
      }
      else
      cout<<" ";
    }
    cout<<endl;
  }
  
  return 0;
}
*//*
#include<iostream>
using namespace std;
int main()
{
  int i, j, n ;
  cout<<"ENTER THE NUMBER OF LINE OF PATTERN = ";
  cin>>n;
  cout<<"YOUR PATTERN IS  "<<endl;
  for ( i = 0; i <= n; i++)
  {
    for ( j = 0; j <= n-i+1; j++)
    {
     cout<<"* ";
    }
    cout<<endl;
  }
  
  return 0;
}*/
