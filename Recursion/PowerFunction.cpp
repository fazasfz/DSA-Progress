//g++ test.cpp -o test.exe
// .\test.exe

// Power Function by Recursion
#include <iostream>
using namespace std;
int power (int m, int n){

   if (n==0)
   return 1;
   return power (m, n-1)*m;
}
int power1 (int m, int n){
   if (n==0)
   return 1;
   if (n%2==0)
   return power1 (m*m, n/2);
   return power1 (m*m, (n-1)/2)*m;
}

int main(){

   int r=power1(3,4);
   cout << r << endl;
   return 0;
}

