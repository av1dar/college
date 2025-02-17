#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double P, R;
    int T;
    
    cout << " (P): ";
    cin >> P;
    cout << " (T): ";
    cin >> T;
    cout << " (R): ";
    cin >> R;
    
    double I = (P * T * R) / 100;
    
    cout << fixed << setprecision(2);
    cout << " (float): " << I << endl;
    cout << " (int): " << static_cast<int>(I) << endl;
    
    return 0;
}
