//
// Created by Denys Prokhorin on 24.08.2022.
//
#include <list>
#include <iostream>

using namespace std;


class Array {
private:
    list<int> nums;
public:
    Array(int n) {
        srand(time(0));
        for (int i = 0; i < n; i++) {
            int val = rand() % 10 + 1;
            if (val % 2 == 0) {
                nums.push_front(val - 1);
            } else {
                nums.push_front(val + 1);
            }
        }
    }

    ~Array() {
        nums.clear();
        nums.empty();
    }

    list<int> getNums() {
        return nums;
    }

    void printElements() {
        for (int n: nums) {
            cout << n << endl;
        }
    }
};


int sumOfOddElements(Array a) {
    int sum = 0;
    list<int> nums = a.getNums();
    for (int n: nums) {
        if (n % 2 != 0) {
            sum += n;
        }

    }
    return sum;
}

int main() {
    Array array(3);
    array.printElements();
    int res = sumOfOddElements(array);
    cout << res;

}