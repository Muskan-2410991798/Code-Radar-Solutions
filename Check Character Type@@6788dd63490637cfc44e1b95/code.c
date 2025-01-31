#include <stdio.h>

int main() {
    int a;
    scanf("%c",&a);
    if((a>=65 && a<=90) || (a>=97 && a<=122)){
        if(a==(int)'a' || a==(int)'e' || a==(int)'i' a==(int)'o'||a==(int)'u'||a==(int)'A' || a==(int)'E' || a==(int)'I'||a==(int)'O'||a==(int)'U'){
            printf("Vowel");

        }
        else{
            printf("Consonant");
        }
    }
    else if(a>=0 && a<=9){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}