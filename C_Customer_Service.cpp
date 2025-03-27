#include <iostream>
using namespace std;


long long sumDigits(long long N) {
    if (N == 0) return 0;

    long long sum = 0, factor = 1;
    while (N / factor > 0) {
        long long lower = N - (N / factor) * factor;
        long long cur_digit = (N / factor) % 10;
        long long higher = N / (factor * 10);

    
        sum += higher * (factor * 45);
        
    
        sum += cur_digit * (lower + 1);
        
     
        sum += (cur_digit * (cur_digit - 1) / 2) * factor;

        factor *= 10;
    }

    return sum;
}

int main() {
    long long N;
    cin >> N;
    cout << sumDigits(N) << endl;
    return 0;
}
