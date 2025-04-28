#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char stringArray[10001];
    
    scanf("%s", stringArray);
    
    int countString[10001] = {0};

    int stringLength = strlen(stringArray);
    
    for(int i = 0; i < stringLength; i++){
        int value = stringArray[i];
        countString[value]++;
    }
    
    for(int i = 97; i <= 122; i++){
        printf("%c => %d\n", i, countString[i]);
    }
    
    return 0;
}