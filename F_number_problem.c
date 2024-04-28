#include<stdio.h>
#include<stdio.h>

int main(){

    char ch;
    int fq[26] = {0};
    while(scanf("%c",&ch) !=EOF){
        int index = ch - 'a'; // a = 97
        fq[index] = fq[index] + 1;

    }

    for(int i = 0; i < 26; i++){
        if(fq[i] > 0){
            printf("%c - %d\n", i+97, fq[i]);
        }
    }
    
    return 0;
}