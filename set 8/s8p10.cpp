#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    file.open("numbers.txt", ios::in);

    if (!file) {
        cout << "File cannot be opened!" << endl;
        return 0;
    }

    int num, sum = 0, count = 0;
    int max, min;

    file >> num;
    if (file.eof()) {
        cout << "File is empty!" << endl;
        return 0;
    }

    max = min = num;
    sum = num;
    count = 1;

    while (file >> num) {
        sum += num;
        count++;

        if (num > max)
            max = num;

        if (num < min)
            min = num;
    }

    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;
    cout << "Total Count = " << count << endl;

    file.close();
    return 0;
}
