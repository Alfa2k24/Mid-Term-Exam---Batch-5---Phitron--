#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);

    for(int i = 0; i < t; i++){

    int n;
    scanf("%d",&n);
    long long int arr[n];   
   
  for(int j = 0; j < n; j++){
         scanf("%lld", &arr[j]);}

    int value;
        scanf("%d",&value);

int count = 0;

         for(int k = 0; k < n; k++){
    if(arr[k] == value){
    count++;
break;    
}          
}

if(count != 0){
printf("YES\n");
} else{
printf("NO\n");
}


}


    return 0;
}

// Accepted