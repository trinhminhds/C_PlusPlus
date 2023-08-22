
#include <iostream>
using namespace std;

int main() {

    int ts1, ms1, ts2, ms2;
    cout << "Nhap tu so va mau so cua phan so thu nhat: ";
    cin >> ts1 >> ms1;
    cout << "Nhap tu so va mau so cua phan so thu hai: ";
    cin >> ts2 >> ms2;
    int ts = ts1 * ms2 - ts2 * ms1;
    int ms = ms1 * ms2;
    cout << "Ket qua la: " << ts << "/" << ms << endl;
    return 0;

}

