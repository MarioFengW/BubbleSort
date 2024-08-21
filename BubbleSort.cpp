#include <iostream>
#include <vector>

using namespace std;


void swap(int &position1, int &position2) {

    int temp = position1;
    position1 = position2;
    position2 = temp;

}

void BubbleSort(vector<int> &vec) {

    int n = vec.size();

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n - 1 - i; j++) {

            if (vec[j] > vec[j + 1]) {

                swap(vec[j], vec[j + 1]);

            }

        }

    }

}

int main() {

    vector<int> vec = {100, 70, 95, 60, 90};

    BubbleSort(vec);

    for (int num : vec) {

        cout << num << " ";

    }
    
    cout << endl;

    return 0;
}