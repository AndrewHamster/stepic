#include <iostream>

using namespace std;

    int main() {
        float x, y, a, b, c, d, e, f, det, det_x, det_y;
        cin >> a >> b >> c >> d >> e >> f;
        det = a * d - b * c;
        det_x = e * d - b * f;
        det_y = a * f - e * c;
        x = det_x / det;
        y = det_y / det;
        cout << x << " " << y;
    }
