#include <iostream>
using namespace std;

struct P {
    string n;
    int w;
    int p;
};

void maxP() {
    int maxW = 15;
    P pr[] = { {"Rice", 7, 700}, {"Lentils", 5, 600}, {"Sugar", 2, 240}, {"Salt", 5, 250}, {"Basmati Rice", 3, 1050} };
    int sz = 5, tw = 0, tp = 0;

    cout << "Selected Products to maximum profit:" << endl;
    for (int i = 0; i < sz; i++) {
        if (tw + pr[i].w <= maxW) {
            tw += pr[i].w;
            tp += pr[i].p;
            cout << pr[i].n << " - " << pr[i].w << "kg - " << pr[i].p << "tk" << endl;
        } else {
            int rw = maxW - tw;
            if (rw > 0) {
                int partialPrice = (pr[i].p * rw) / pr[i].w;
                tw += rw;
                tp += partialPrice;
                cout << pr[i].n << " - " << rw << "kg - " << partialPrice << "tk" << endl;
            }
            break;
        }
    }
    cout << "Total Weight: " << tw << "kg" << endl;
    cout << "Total Cost: " << tp << "tk" << endl;
}

int main() {
    maxP();
}
