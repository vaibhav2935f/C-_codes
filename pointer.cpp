/*#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;

    return 0;
}
*//*
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the number of Element= "<<endl;
    cin>>size;
    int A[size];
     
     cout<<sizeof A<<endl;

    
    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int x;
    int &y=x;
    cout<<x<<endl;
     y++;
     x++;

    cout<<x<<endl;
    cout<<&x<<" "<<&y;

    
    return 0;
}
