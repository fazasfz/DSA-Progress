//g++ test.cpp -o test.exe
// .\test.exe

// Taylor Series by Recursion

#include <iostream>
using namespace std;
double e(int x, int n){
   static double p=1, f=1;
   double r;
   if (n==0)
   return 1;
   r=e(x, n-1);
   p=p*x;
   f=f*n;
   return r+p/f;
}

int main(){

   cout << e(1,10) << endl;
   return 0;
}
// comment out any one of the program to run the other
// --------------------------------------------------

//Taylor series Horner's Rule
#include <iostream>
using namespace std;
double e (int x, int n){
   static double s;
   if(n==0){
      return s;
   }
   s=1+x*s/n;
   return e(x, n-1);
}
int main(){
   cout << e(1,10) << endl;
   return 0;
}

// comment out any one of the program to run the other
// --------------------------------------------------

// Taylor Series Iterative
#include <iostream>  
using namespace std;
double e ( int x, int n){
   double s=1;
   int i;
   double num=1, den=1;
   for(i=1; i<=n; i++){
      num=num*x;
      den=den*i;
      s=s+num/den;
   }
   return s;
}
int main(){
   cout << e(1,10) << endl;
   return 0;
}