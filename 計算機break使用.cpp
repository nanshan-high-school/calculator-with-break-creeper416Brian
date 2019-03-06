#include <iostream>
using namespace std;
int main() {
int i,total=0;
int  number[i];

for (int i = 0 ;i < 100 ; i++) {
  cout << "請輸入數字:",
  cin >> number[i],
  total= total + number[i];
  
  if (number[i] == 0) 
  break;
  
  else 
  continue; 
 }
 cout << "總合為" << total ;
}
