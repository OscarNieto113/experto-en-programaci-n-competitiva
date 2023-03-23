#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char* argv[]) {
    int t;
    cin >> t;

    while (t--){
        int n, m, num, a;
        a = 0;

        cin >> n >> m;
        for (int j = 0; j < n; j++){
            cin >> num;
            if (num != j+1) a = j+1;
        }

        long double prob = 0.0;

        while (m--){
            int ri;
            long double pi;

            cin >> ri >> pi;

            if (ri >= a) prob += (1.0 - prob) * pi;
        }
        if (a == 0) prob = 1.0;

        cout << fixed << setprecision(6) << prob << endl;
    }
    return 0;
}