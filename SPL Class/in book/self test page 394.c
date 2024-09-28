/* (True/False) If bPtr points to array b’s second element (b[1]), then element b[3]
also can be referenced with the pointer/offset notation expression *(bPtr + 3).
Answer: False. Since the pointer points to array b’s second element (b[1]), the expression should be *(bPtr + 2*/
#include <stdio.h>
int main(void)
{
    int b[] = {0, 1, 2, 3, 4, 5};
int *bPtr = &b[1];  // bPtr এখন b[1] নির্দেশ করছে

// *(bPtr + 3) আসলে b[4] এর সমান
printf("%d\n", *(bPtr + 3)); // আউটপুট হবে 4

}
