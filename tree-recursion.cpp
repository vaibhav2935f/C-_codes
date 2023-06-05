/* EXAMPLE OF TREE RECURSION*/
/*
#include<iostream>
   using namespace std;
   void fun(int n)
   {
    if (n>0)
    {
        cout<<n;
        fun(n-1);
        fun(n-1);

    }
    
   }
int main()
{
    fun(3);
    return 0;
}*/
/* output 3211211*/
/*EXAMPLE OF  INDIRECT RECURSION*/
/*
#include<iostream>
   using namespace std;
   void funB(int n);
   void funA(int n)
   {
    if (n>0)
    {
        cout<<n<<",";
        funB(n-1);
    }
   }
   void funB(int n)
   {
    if (n>1)
    {
        cout<<n<<",";
        funA(n/2);
    }
   }
    int main()
    {
        funA(20);
        return 0;
    }
    */
    /* OUTPUT 20, 19, 9, 8, 4, 3, 1*/

    /*
    EXAMPLE OF NESTED RECURSION*/
    /*
    #include<iostream>
    using namespace std;
    int fun(int n)
    {
      if (n>100)
      return n-10;
      else
      return fun(fun(n+11));
    }
    int main()
    {
        int r;
        r = fun(95);
        cout<<r;
        return 0;
    }*/
    /* OUTPUT 91*/