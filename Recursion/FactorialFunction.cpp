//g++ test.cpp -o test.exe
// .\test.exe

// Factorial by Recursion
#include <iostream>
using namespace std;
int fact (int n){

   if (n==0)
   return 1;
   return fact(n-1)*n;
}
// factorial by iteration
int Ifact(int n){
   int f=1;
   int i;
   for(i=1;i<=n;i++){
      f=f*i;
   }
   return f;
}

int main(){

   int r;
   r=fact(5);
   cout << r << endl;
   return 0;
}

