#include <iostream>
#include <vector>

using namespace std;

vector<int> multiply_polynomials(vector<int> &a, vector<int> &b) {
    int m = a.size();
    int n = b.size();
    vector<int> result(m + n - 1, 0);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i + j] += a[i] * b[j];
        }
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        vector<int> a(m), b(n);
        for (int i = 0; i < m; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector<int> result = multiply_polynomials(a, b);
        for (int i = 0; i < m + n - 1; i++) {
            cout << result[i] << " ";
        }
        cout << "0" << endl;
    }
    return 0;
}


//Multiply polynomial
