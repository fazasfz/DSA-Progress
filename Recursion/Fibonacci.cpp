//g++ test.cpp -o test.exe
// .\test.exe

// Fibonacci sequence using recursion
#include <iostream>
using namespace std;
int fib(int n){   
  int t0=0, t1=1, s=0, i;
  if (n<=1) return n;
   for (i=2; i<=n; i++){
      s=t0+t1;
      t0=t1;
      t1=s;}
   return s;
}
//fibonacci sequence using recursion
int rfib(int n){
if ( n<=1)  return n;
return rfib(n-1)+rfib(n-2);
}

//memorization fibonacci function 
int F[10];
int mfib(int n){
   if (n<=1){
   F[n]=n;
   return n;

}
else {
if (F[n-2]==-1)
   F[n-2]=mfib(n-2);
if (F[n-1]==-1)
   F[n-1]=mfib(n-1);
   return F[n-2]+F[n-1];
}
}
int main(){
   int i;
   for (i=0; i<10; i++) 
   F[i]=-1;
   F[0]=0;
 cout << "Fibonacci sequence using recursion\n";
   cout << rfib(10) << "\n";
cout << "Fibonacci sequence using iteration\n";
   cout << fib(10);
   cout << "\nFibonacci sequence using memorization\n";
   cout << mfib(5);

   return 0;
}