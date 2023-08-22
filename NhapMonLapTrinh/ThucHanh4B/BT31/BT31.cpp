#include <iostream>
#include <algorithm>
using namespace std;
const int MAX = 100;
int a[MAX][MAX];
int main()
{
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int k = 0; k < n; k++)
        for (int i = 0, j = k; j < n; i++, j++)
            if (a[i][i] > a[j][j])
                swap(a[i][i], a[j][j]);
    for (int k = 1; k < n; k++)
        for (int i = k, j = 0; i < n; i++, j++)
            if (a[j][k + j] > a[i][k + i])
                swap(a[j][k + j], a[i][k + i]);
    cout << "Sorted matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}