#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    int m;
    cout << "Diziniz kaç elamanlidir (m) ";
    cin >> m;

    int* dizi = new int[m];

    auto start = high_resolution_clock::now();

    for (int i = 0; i < m; i++) {
        dizi[i] = i + 1;
    }

    cout << "Dizinin elemanlari: ";
    for (int i = 0; i < m; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    auto end = high_resolution_clock::now();
    auto elapsed = duration_cast<microseconds>(end - start);

    cout << "Zaman karmasikligi: O(m)" << endl;
    cout << "Islem suresi: " << elapsed.count() << " mikro saniye" << endl;

    delete[] dizi;

    return 0;
}


