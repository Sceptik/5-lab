#include <stdio.h>

/*
int main(){
    #define v 20
    int n, a, i;
    int A[10];
    for(i = 0, a = 2; a < v; a++){
        for(n = 2; n < a; n++)
            {if(a % n == 0) break;}
        if(n == a) A[i++]=a;
    }
    A[i] = 0;

    for(int j = 0; j < 9; j++){
        printf("%d ", A[j]);
    }
} //Выводит все простые числа до заданного
*/

/*
int main(){
    #define v 20
    int n, a, i, s;
    int A[10];
    for(i = 0, a = 2; a < v; a++){
        for(s = 0, n = 2; n < a; n++)
            if(a % n == 0) {s = 1;  break;}
        if(s == 0) A[i++]=a;
    }
    A[i] = 0;

    for(int j = 0; j < 9; j++){
        printf("%d ", A[j]);
    }
} //Выводит все простые числа до заданного
*/

/*
int main(){
    #define n 20
    int m, j, i;
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int B[6];
    for (j=0,i=0; i<n ; i++){
        for (m=2; m<A[i]; m++)
           { if (A[i]%m==0) break; }
        if (m==A[i]) B[j++]=A[i];
        }
B[j]=0; 


    for(int l = 0; l < 5; l++){
        printf("%d ", B[l]);
    }
} //Выводит все простые числа массива до задланного n
*/

/*
int main(){
    #define n 20
    int m, j, i, s;
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int B[6];
    for (j=0,i=0; i<n ; i++){
        for (s=0,m=2; m<A[i]; m++)
           if (A[i]%m==0) { s=1; break; }
        if (s==0) B[j++]=A[i];
        }
B[j]=0; 



    for(int l = 0; l < 5; l++){
        printf("%d ", B[l]);
    }
} //Выводит все простые числа массива до задланного n
*/

/*
int main() {
    int A[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int n = sizeof(A) / sizeof(A[0]); 
    for (int i = 0; i < n; i++) {
        int m;
        for (m = 2; m < A[i]; m++) {
            if (A[i] % m == 0) break;
        }
        if (m == A[i]) {
            for (int j = i; j < n - 1; j++) {
                A[j] = A[j + 1];
            }
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
} //проверяет каждый элемент массива A на простоту
*/

int main() {
    int A[] = {2, 3, 5, 7, 11, 13, 17, 19};
    int n = sizeof(A) / sizeof(A[0]); 

    int i, j, m, s;
    for (j = 0, i = 0; i < n; i++) {
        s = 0;
        for (m = 2; m < A[i]; m++) {
            if (A[i] % m == 0) {
                s = 1;
                break;
            }
        }
        if (s == 0) {
            for (j = i; j < n - 1; j++) {
                A[j] = A[j + 1];
            }
            n--;
            i--;
        }
    }
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }

    return 0;
} //удаляет все простые числа из массива A и выводит оставшиеся элементы.




