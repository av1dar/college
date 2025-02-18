#include <iostream>

using namespace std;

int main() {
    double A, B, C;
    

    cout << " (A): ";
    cin >> A;
    cout << " (B): ";
    cin >> B;
    cout << " (C): ";
    cin >> C;
    
   
    double volume = A * B * C;
    
    
    double surface_area = 2 * (A * B + B * C + A * C);
    
   
    cout << "V: " << volume << endl;
    cout << "Sп: " << surface_area << endl;
    
    return 0;
}
