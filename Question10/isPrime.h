#include "vector"
using std::vector;

uint64_t sumPrimes(int limit) {
    vector<bool> prime(limit, true);
    prime[0] = prime[1] = false;
    for (int num = 2; num * num < limit; ++num) {
        if (prime[num]) {
            for (int multi = num * num; multi < limit; multi += num) {
                prime[multi] = false;
            }
        }
    }
    uint64_t sum = 0;
    for (int i = 2; i < limit; ++i) {
        if (prime[i]) {
            sum += i;
        }
    }
    return sum;
}