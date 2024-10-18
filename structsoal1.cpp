#include <iostream>
using namespace std;

// Struct untuk menyimpan array dan fungsi untuk menghitung pasangan OK
struct PairCounter {
    int nums[100]; // Array dengan ukuran 100 (bisa disesuaikan)
    int n; // Panjang array

    // Fungsi untuk menghitung jumlah pasangan OK
    int countOKPairs() {
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    PairCounter pc;
    pc.n = 5;
    pc.nums[0] = 1; pc.nums[1] = 2; pc.nums[2] = 3; pc.nums[3] = 1; pc.nums[4] = 1;
    
    cout << "Jumlah pasangan OK: " << pc.countOKPairs() << endl;
    return 0;
}
