#include <iostream>

using namespace std;

int main() {
    
    int length, breadth, Area, Perimeter;
    cin >> length >> breadth;
    Area = length * breadth;
    Perimeter = 2* (length + breadth);
    cout << "Area = " << Area << endl;
    cout << "Perimeter = " << Perimeter << endl;
}