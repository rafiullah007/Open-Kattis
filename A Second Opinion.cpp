#include <iostream>
using namespace std;

void solve() {
    int total_seconds;
    cin >> total_seconds;
    
    int hours = total_seconds / 3600;
    int minutes = (total_seconds % 3600) / 60;
    int seconds = total_seconds % 60;

    cout << hours << " : " << minutes << " : " << seconds << endl;
}

int main() {
    solve();
    return 0;
}
