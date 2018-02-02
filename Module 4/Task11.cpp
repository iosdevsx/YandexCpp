#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f;

    double md = a * d - b * c;
    double xd = e * d - b * f;
    double yd = a * f - e * c;

    cout << xd / md << " " << yd / md;
}