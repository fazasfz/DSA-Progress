//g++ test.cpp -o test.exe
// .\test.exe

// tower of hanoi using recursion
#include <iostream>
using namespace std;
void TOH(int n, int A, int B, int C){
   if(n>0){
      TOH(n-1,A,C,B);
      cout << "Move disk " << n << " from rod " << A << " to rod " << C << endl;
      TOH(n-1,B,A,C);   
      cout << "Move disk " << n << " from rod " << B << " to rod " << C << endl;
   }
}
int main(){
TOH(2,1,2,3);
return 0;
}