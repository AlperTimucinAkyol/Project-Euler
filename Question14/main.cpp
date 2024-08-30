#include"iostream"
#include"stdint.h"
using namespace std;

uint32_t Length(uint32_t n) {
    uint32_t length = 1; 
    
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = 3 * n + 1;
        }
        ++length;
    }

    return length;
}

uint32_t Longest(uint32_t limit) {
    uint32_t MAX = 0;
    uint32_t START = 0;
    for (uint32_t i = 2; i < limit; ++i) {
        uint32_t length = Length(i);
        if (length > MAX) {
            MAX = length;
            START = i;
        }
    }

    return START;
}

int main() {
    uint32_t limit = 1000000;
    uint32_t result = Longest(limit);
    cout << limit<<"\t" << result << endl;
    return 0;
}
