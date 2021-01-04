#include <stdio.h>
void ortalama();
int main() {
    ortalama();
}
void ortalama() {
    int numbers[10];
    int ortalama1 = 0;
    int loopkey1;
    for (loopkey1 = 0; loopkey1 < 10; loopkey1++) {
        printf("Please enter the value %d : " , loopkey1 + 1);
        scanf("%d" , &numbers[loopkey1]);
    }
    for (loopkey1 = 0; loopkey1 < 10; loopkey1++) {
        printf("Value %d is : %d\n" , loopkey1 + 1 , numbers[loopkey1]);
    }
    for (loopkey1 = 0; loopkey1 < 10; loopkey1++) {
    ortalama1 = ortalama1 + numbers[loopkey1];
}
int sonuc = ortalama1/10;
printf("Arithmetic mean : %d\n" , sonuc);
}