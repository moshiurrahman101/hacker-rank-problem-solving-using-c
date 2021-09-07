/* 
Function in C 
author: Rm Hridoy
*/


#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int gretest;
    if(a>b && a>c && a>d){
        gretest = a;
    }else if(b>a && b>c && b>d){
        gretest = b;
    } else if (c>a && c>b && c>d) {
        gretest = c;
    }else {
        gretest = d;
    }
    return gretest;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}