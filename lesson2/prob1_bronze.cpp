#include <stdio.h>

char STR[500001];
int main() {
    int N;
    scanf("%d", &N);
    scanf("%s", STR);
    int n_lonely = 0;
    for(int i=0; i<N-2; i++) {
        char c = STR[i];
        int cnt1=0, cnt2=0;
        for (int j=i; j<i+3; j++) {
            if (STR[j] == c) {
                cnt1++;
            } else {
                cnt2++;
            }
        }
        if (cnt1==1 || cnt2==1) {
            n_lonely++;
        }
        // printf("(i = %d) - %c %c %c \n", i, STR[i], STR[i+2], STR[i+2]);
        // printf("    cnt1=%d cnt2=%d n_lonely=%d\n", cnt1, cnt2, n_lonely);
        for (int j=i+3; j<N; j++) {
            if (cnt1 > 1 && cnt2 > 1) {
                break;
            }
            if (STR[j] == c) {
                cnt1++;
            } else {
                cnt2++;
            }
            if (cnt1==1 || cnt2==1) {
                n_lonely++;
            }
        }
    }
    printf("%d\n", n_lonely);
    return 0;
}
