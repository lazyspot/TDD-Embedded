#include <stdio.h>
#include <stdlib.h>

char score_array[21];

int score() {
    int result =0;
    for(int i = 0; i < 21; ++i) {
        if(score_array[i] == -1) break;
        if(score_array[i] == 10) {
            result += 20;
            continue;
        }
        if(score_array[i + 1] >= 0) {
            if((score_array[i] + score_array[i+1]) == 10) {
                result += 20;
            }
            else {
                result += score_array[i] + score_array[i+1];
                ++i;
            }
        }
    }
    return result;
};

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        for(int i = 0; i < 21; ++i) {
            score_array[i] = -1;
        }
        int i = 0;
        char c;
        while(scanf("%d%c", &score_array[i], &c)) {
            if(c != ' ') break;
            i += 1;
        }
        printf("%d\n", score());
    }
    return 0;
}
