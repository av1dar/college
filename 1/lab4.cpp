#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double PI = 3.14;
    double R;
    
    cout << "(R): ";
    cin >> R;
    
    double area = PI * R * R;
    double circumference = 2 * PI * R;
    
    cout << fixed << setprecision(2);
    cout << "A = πr2: " << area << endl;
    cout << "C = 2πr: " << circumference << endl;
    
    return 0;
}
