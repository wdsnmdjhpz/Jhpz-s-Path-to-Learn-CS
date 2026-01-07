#include<stdio.h>

const char* codes(int n) {
    switch(n) {
        case 0: return ".----";
        case 1: return "..---";
        case 2: return "...--";
        case 3: return "....-";
        case 4: return ".....";
        case 5: return "-....";
        case 6: return "--...";
        case 7: return "---..";
        case 8: return "----.";
        case 9: return "-----";
        default: return "\0";
    }
}

int main() {
    printf("-");
    char n;
    while(scanf("%c",&n)!=EOF) {
        if(n>='0' && n<='9') {
            printf("%s-",codes(n-'0'));
        }
    }

    return 0;
}