#include <stdio.h>

// ctrl-d for eof
int main(){
    long nc;
    nc = 0;
    while (getchar() != EOF){
        ++nc;
    }

    printf("%ld\n", nc);
    
}