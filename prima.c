#include <stdio.h>
#include <math.h>
int main(){

    //FitPoly[{(97,25), (199,46), (293,62), (397, 78), (499, 95), (599, 109), (691, 125), (797, 139), (887, 154), (997, 168), (47, 15), (9973, 1229), (49999, 5133), (99991, 9592), (499979, 41538)}, 5]
    int a, b, n, pc, pb;
    while (1){
    pc = 0;
    printf("Prima. Masukkan n : ");
    scanf(" %d", &n);
    int p[(int)ceil(pow((double)n, (3.11 + (double)n / 1000000.0)/ 4.0))];

    for (a = 2; a <= n; a++){
        pb = 0;
        double sqrta = sqrt((double)a);
        for (b = 0; b < pc; b++){
            if (p[b] > sqrta)
                break;
            if (a%p[b] == 0){
                pb = 1;
                break;
            }
        }
        if (pb == 0){
            p[pc] = a;
            pc++;
            printf("%d, ", a);
        }
    }

    printf("\nCount : %d\n", pc);
    }
    return 0;
}
