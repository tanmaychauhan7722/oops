#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};

    for (auto element : numbers) {
        cout << element << " ";
    }

    return 0;
}