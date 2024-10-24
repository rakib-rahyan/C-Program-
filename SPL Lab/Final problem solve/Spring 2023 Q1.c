#include <stdio.h>

// ফাংশন যা চেক করবে একটি সংখ্যা Mersenne প্রাইম কিনা
int is_mersenne_prime(int x) {
    // প্রথমে x+1 কে ২ এর ঘাত কিনা চেক করতে হবে
    if (power_of_2(x + 1)) {
        // যদি x+1 ২ এর ঘাত হয়, তাহলে সেটি p = log2(x+1) এর মান হবে
        int p = 0;
        while ((1 << p) - 1 != x) {
            p++;
        }
        // এখন p যদি প্রাইম হয়, তাহলে x একটি Mersenne প্রাইম
        if (is_prime(p)) {
            return 1;
        }
    }
    return 0;
}

// প্রাইম সংখ্যা চেক করার ফাংশন
int is_prime(int x) {
    if (x <= 1) {
        return 0;
    } else {
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return 0;
            }
        }
        return 1;
    }
}

// ২ এর ঘাত চেক করার ফাংশন
int power_of_2(int x) {
    if (x == 1) {
        return 1;
    } else if (x % 2 != 0 || x == 0) {
        return 0;
    } else {
        return power_of_2(x / 2);
    }
}

int main() {
    int n = 0;
    printf("Enter your number: ");
    scanf("%d", &n);

    // যদি n Mersenne প্রাইম হয়, তখন Yes প্রিন্ট করবে
    if (is_mersenne_prime(n)) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
