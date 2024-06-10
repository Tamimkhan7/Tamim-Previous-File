#include <stdio.h>
double solve(int a){
    int k = a + a;
    return k;
}
int main(){
    double a;
    scanf("%lf", &a);
    int res = solve(a);
    printf("%d\n", res);
}

bubble = sort 