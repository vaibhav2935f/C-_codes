/* create A 2D array by using pointer*/
/*
#include<iostream>
using namespace std;
int main()
{
 int A[3][4]={{1,2,3,4},{2,4,6,8},{1,3,5,7}};
 int i , j ;
 int *B[3];
 int **C;
 
 B[0] = new int [4];
 B[1] = new int [4];
 B[2] = new int [4];
 
 C =new int*[3];
 C[0] = new int[4];
 C[0] = new int[4];
 C[0] = new int[4];

 for(i=0;i<3;i++)
 {
 for(j=0;j<4;j++)
 cout<<C[i][j]<<endl;
 }
 return 0;
}
*/
/*array data TYPE */

/*
#include<iostream>
using namespace std;
struct array
{
    int *A;
    int size;
    int length;
};
void Display(struct array arr)
{
    int i;
    cout<<endl<<"Enter elements"<<endl;
    for ( i = 0; i < arr.length; i++)
    {
      cout<<arr.A[i];
    }
    
}
int main()
{
    struct array arr;
    int n , i ; 
    cout<<"Enter the size of array";
    cin>> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    cout<<"Enter the number = "<<endl;
    cin>>n;
    cout<<"Enter all elements ="<<endl;
    for ( i = 0; i <n; i++)
        cin>>arr.A[i];
        arr.length = n;
        Display(arr);
    
    return 0;
}
*/
// Inserting and Appending in a Array 
/*#include<iostream>
using namespace std;
struct Array
{
 int A[10];
 int size;
 int length;
}; 
 void Display(struct Array arr)
 {
 int i;
 cout<<"\nElements are\n";
 for(i=0;i<arr.length;i++)
 cout<<arr.A[i];
 }
 void Append(struct Array *arr,int x)
 {
 if(arr->length<arr->size)
 arr->A[arr->length++]=x;
 }
 void Insert(struct Array *arr,int index,int x)
 {
 int i;
 
 if(index>=0 && index <=arr->length)
 {
 for(i=arr->length;i>index;i--)
 arr->A[i]=arr->A[i-1];
 arr->A[index]=x;
 arr->length++;
 }
 } 
int main()
{
struct Array arr1={{2,3,4,5,6},10,5};
Append(&arr1,10);
Insert(&arr1,5,12);
Display(arr1);
 return 0;
}
*/
I 
//Delete in a Array 
/*#include<iostream>
using namespace std;
struct Array
{
 int A[10];
 int size;
 int length;
};
 void Display(struct Array arr)
 {
 int i;
 printf("\nElements are\n");
 for(i=0;i<arr.length;i++)
 printf("%d ",arr.A[i]);
 }
int Delete(struct Array *arr,int index)
{
 int x=0;
 int i;
 if(index>=0 && index<arr->length)
 {
 x=arr->A[index];
 for(i=index;i<arr->length-1;i++)
 arr->A[i]=arr->A[i+1];
 arr->length--;
 return x;
 }
 return 0;
}
int main()
{
 struct Array arr1={{2,3,4,5,6},10,5};
 printf("%d",Delete(&arr1,0));
 Display(arr1);
 return 0;
*/
