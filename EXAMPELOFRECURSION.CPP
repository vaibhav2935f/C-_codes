/* SUM OF N NUMBERS*/
/*
#include<iostream>
using namespace std;
int sum(int n)
{
    if (n<0)
    return 0;
    else 
    return sum(n-1)+n;
}
int main()
{
    int r;
    r = sum(10);
    cout<<r;
    return 0;
}*/
/* OUTPUT 55*/
/*FACTORIAL USING RECURSION */
/*
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    else
    return fact(n-1)*n;
}
int main(int argc, char const *argv[])
{
    int r;
    r = fact(5);
    cout<<r;
    return 0;
}
*/
/*  POWER USING RECURSION*/
/*
#include<iostream>
using namespace std;
int pow(int m,int n)
{
    if (n==0)
    return 1;
    else 
    return pow(m,n-1)*m;  
}
int main()
{
    int r;
    r = pow(2,12);
    cout<<r;
    return 0;
}
*/
/*  TAYLOR SERIES USING RECURSON*/
/*
#include<iostream>
using namespace std;
int exp(int x , int n)
{
    static int p=1, f =1;
    int r;
    if(n==0)
    return 1;
    else 
    {
     r = exp(x,n-1);
    f = f*n;
    p = p*x;
    return r + p/f;
}
}
int main()
{
    cout<<exp(3,10);
    return 0;
}
*/
/* FIBONACCI SERIES*/
/*
#include<iostream>
using namespace std;
int fibo(int n)
{
int t0 =0;
int t1 = 1 ;
int s , i;

  if (n<=1)
  {
    return n;
  }
  else
  for ( i = 2; i <= n; i++)
  {
    s = t0+t1;
    t0=t1;
    t1 = s;
  }
  return s;
  
  
}
int main()
{
    cout<<fibo(8);
    return 0;
}
*/
/*NCR USING RECURSION*/
/*
#include<iostream>
using namespace std;
int fact(int n)
{
 if(n==0)return 1;
 return fact(n-1)*n;
}
int nCr(int n,int r)
{
 int num,den;
 
 num=fact(n);
 den=fact(r)*fact(n-r);
 
 return num/den;
}
int NCR(int n,int r)
{
 if(n==r || r==0)
 return 1;
 return NCR(n-1,r-1)+NCR(n-1,r);
 
}
int main()
{
    cout<<nCr(5,3);
    return 0;
}
*/
/* tower of hanoi*/
#include<iostream>
using namespace std;

//tower of HANOI function implementation
void TOH(int n,char Sour, char Aux,char Des)
{ 
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
		return;
	}
	
	TOH(n-1,Sour,Des,Aux);
	cout<<"Move Disk "<<n<<" from "<<Sour<<" to "<<Des<<endl;
	TOH(n-1,Aux,Sour,Des);
}

//main program
int main()
{ 
	int n;
	
	cout<<"Enter no. of disks:";	
	cin>>n;
	//calling the TOH 
	TOH(n,'A','B','C');
	
	return 0;
}
