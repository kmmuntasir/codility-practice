/**
*** Codility 001: Binary Gap
*** URL: https://app.codility.com/programmers/lessons/1-iterations/binary_gap/
**/

#include <bits/stdc++.h>

using namespace std;

string int2bin (long int number) {
    string binary;
    int i = 0;
    while (0 != number) {
        binary = (0 == number % 2) ? "0" + binary : "1" + binary;
        number /= 2;
    }
    return binary;
}

int findGap(string binary) {
    int maxGap = 0, tempGap = 0;

    for(int i = 0; i < binary.size(); ++i) {
        if('1' == binary[i]) {
            maxGap = max(maxGap, tempGap);
            tempGap = 0;
        } else {
            ++tempGap;
        }
    }

    return maxGap;
}

int solution(int N) { // This is the solution method for codility
    string binary = int2bin(N);
    return findGap(binary);
}

int main() { // Driver function
    freopen("in.txt", "r", stdin);

    long int number;
    int gap;
    string binary;

    while(scanf("%ld", &number) == 1) {
        binary = int2bin(number);
        gap = findGap(binary);

        cout << number << " = " << gap << endl;
    }

    return 0;
}
