#include <iostream>

using namespace std;

int main() {
   int x, y, z;
   cin >> x >> y >> z;
   if(x > y && x > z){
       cout << "Min = " << y << endl;
       cout << "Max = " << x << endl;
   } else if(y > x && y > z){
       cout << "Min = " << x << endl;
       cout << "Max = " << y << endl;
   } else {
       cout << "Min = " << x << endl;
       cout << "Max = " << z << endl;
   }
   
}