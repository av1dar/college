#include <iostream>
using namespace std;

int main() {
    double P, R;
    int T;
    
    cout << "Enter P: ";
    cin >> P;
    cout << "Enter T: ";
    cin >> T;
    cout << "Enter R: ";
    cin >> R;
    
    double I = (P * T * R) / 100;
    
    cout << "Interest (float): " << I << endl;
    cout << "Interest (int): " << (int)I << endl;
    
    return 0;
}
