#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Array lenght: \n";
    cin >> n;
    double* m{new double[n]};
    for (int i=0; i < n; i++) {
        cout << "Element at index " << i << ":\n";
        cin >> m[i];
    }
    delete [] m;
}