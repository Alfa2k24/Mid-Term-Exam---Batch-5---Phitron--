#include<stdio.h>
#include<string.h>

int main(){
char ch[10000];
int t;

scanf("%d",&t);
for(int i = 0; i < t; i++){
    int countSmallLatter = 0, countNumber = 0, countCapitalLatter = 0;

scanf("%s",ch);
int len = strlen(ch);

for(int j = 0; j < len; j++){
    if(ch[j] >= 'a' && ch[j]<= 'z')
    {
    countSmallLatter++;
    }
     else if(ch[j] >= '0' && ch[j] <= '9'){
     countNumber++;
     } 
     else if(ch[j] >= 'A' && ch[j] <= 'Z'){
        countCapitalLatter++;
     }
}
     printf("%d %d %d\n",countCapitalLatter, countSmallLatter, countNumber);

}
    return 0;
}


// Accepted 