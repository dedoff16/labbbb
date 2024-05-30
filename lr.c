#include "lr.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
double sqrtsf(double x) {
 if (x < 0) {
 return -1;
 }
 double left = 0, right = x + 1;

 for (int i = 0; i < 20; i++) {
 double middle = (left + right) / 2;
 if (middle * middle < x) {
 left = middle;
 } else {
 right = middle;
 }
 } return left;
}
int lr1()
{
float L;
float t1;
float t2;
float v;
printf("L = ");
scanf("%f", &L);
printf("t1 = ");
scanf("%f", &t1);
printf("t2 = ");
scanf("%f", &t2);
v = (L / t1 - L / t2) / 2;
printf("speed = %f\n", v);
return 0;
}
int lr1dop()
{
float L;
float t1;
float t2;
float v;
printf("L = ");
scanf("%f", &L);
printf("t1 = ");
scanf("%f", &t1);
printf("t2 = ");
scanf("%f", &t2);
v = (L / t1 - L / t2) / 2;
printf("speed = %f\n", v);
return 0;
}
int lr2()
{
 float s; // сумма ряда
 float a; // очередной элемент ряда
 int n; // число элементов ряд
 float sign; // знак очередного элемента ряда
 s = 0 ;
 sign = 1;
 printf("n = ");
 scanf("%d", &n);
 for (int i = 0; i < n; i++) {
 a = (3 + (i * 1));
 a /=(1 + (i * 3));
 s += (a * sign);
 sign = -sign;
 }
 printf("%f", s);
 return 0;
}

int lr2dop()
{
 float s, a, n, i;
 int N, sign;
 printf("N=");
 scanf("%d", &N);

 s=0;
 sign=1;
 i=1;
 n=1;
 a= (i+2)/(n);

 for (i=1; i<N; i++)
 {
 s= s+sign*a;
 sign= -sign;
 n= n+3;
 a= (i+2)/(n);
 }
 printf("s=%f\n", s);
 return 0;
 printf("ответ = %f", s);
 return 0;
}
int lr3() {
       char str[1000];
    char ch;
    int len = 0;
    int prev_len = 0;
    int words_same_length = 1;

    printf("Введите строку: \n");

    int i = 0;
    while ((ch = getchar()) != EOF && i < 999) {
        if (ch == EOF) break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        ch = str[j];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            len++;
        } else {
            if (len != 0) {
                if (prev_len != 0 && len != prev_len) {
                    words_same_length = 0;
                    break;
                }
                prev_len = len;
                len = 0;
            }
        }
    }

    if (len != 0 && len != prev_len) {
        words_same_length = 0;
    }
printf("\n");
    if (words_same_length) {
        printf("Все слова в строке имеют одинаковую длину. \n");
    } else {
        printf("Некоторые слова в строке имеют разную длину. \n");
    }

    return 0;
}

    int lr3dop() {
    char str[1000];
    char ch;
    int len = 0;
    int prev_len = 0;
    int words_same_length = 1;
    int same_length_count = 0;
    int diff_length_count = 0;
    int total_count = 0;

    printf("Введите строку: ");

    int i = 0;
    while ((ch = getchar()) != EOF && i < 999) {
        if (ch == '\n') break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        ch = str[j];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            len++;
        } else {
            if (len != 0) {
                total_count++;
                if (prev_len != 0 && len != prev_len) {
                    words_same_length = 0;
                    diff_length_count++;
                } else {
                    same_length_count++;
                }
                prev_len = len;
                len = 0;
            }
        }
    }

    if (len != 0 && len != prev_len) {
        total_count++;
        words_same_length = 0;
        diff_length_count++;
    }

    if (words_same_length) {
        printf("Все слова в строке имеют одинаковую длину.\n");
    } else {
        printf("Некоторые слова в строке имеют разную длину.\n");
        printf("Количество слов одинаковой длины: %d\n", same_length_count);
        printf("Количество слов разной длины: %d\n", diff_length_count);
        printf("Общее количество слов: %d\n", total_count);
    }

    return 0;
}

int lr4(){
int N = 4;
char string[100];
    printf("Enter a text: ");
    scanf("%[^\n]s", string);

    int start = 0;
    int end = 0;
    int i=0,j=0;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ' || string[i]=='.' || string[i]== ',' || string[i]==';' || string[i]==':')
            {
            if ((end - start)<N)
            {
                for ( j = start; j < end; j++)
                {
                    printf("%c", string[j]);
                }
                printf(" ");
            }
            start = i + 1;
        }
        end++;
    }

    if ((end - start)<N)
        {
        for ( j = start; j < end; j++)
        {
            printf("%c", string[j]);
        }
    }

    return 0;

}
int lr4dop() {}
int lr5(){
    int array[10];
    int temp;


    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }


    for (int i = 0; i < 5; i++) {
        temp = array[i];
        array[i] = array[9 - i];
        array[9 - i] = temp;
    }


    printf("The mirrored array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
int lr5dop(){
struct InfoType{
    char has_progression;
    float average;
    int array[10];
} ;


    struct InfoType info;
    int temp;

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &info.array[i]);
    }


    float sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += info.array[i];
    }
    info.average = sum / 10.0;


    info.has_progression = '+';
    for (int i = 1; i < 10; i++) {
        if (info.array[i] != info.array[i - 1] + 1) {
            info.has_progression = '-';
            break;
        }
    }


    for (int i = 0; i < 5; i++) {
        temp = info.array[i];
        info.array[i] = info.array[9 - i];
        info.array[9 - i] = temp;
    }


    printf("The mirrored array is:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", info.array[i]);
    }
    printf("\n");


    printf("Has progression: %c\n", info.has_progression);
    printf("Average: %.2f\n", info.average);

    return 0;
}
int lr6() {
int K = 3;
int N = 5;


int x [K][N];
int i, j;
int flag = 1;

for( i = 0; i < K; i++ )
    for( j = 0; j < N; j++ )
        scanf("%d", &x[i][j]);

for( i = 0; i < K; i++ ){
    for( j = 0; j < N; j++ ){
        if(x[i][j] == x[i][N-1-j] && flag == 1){
            flag = 1;
        }else{
            flag = 0;
        }
    }
    if (flag == 1){
        for( j = 0; j < N; j++ )
            x[i][j] = 0;
    }
    flag = 1;
}
for( i = 0; i < K; i++ ){
    for( j = 0; j < N; j++ )
        printf("%4d ", x[i][j]);
    printf("\n");
}
}


unsigned int reverseBits(unsigned int num) {
    unsigned int reversed = 0;
    int bits = sizeof(num) * 8 - 1;

    while (num > 0) {
        reversed |= (num & 1) << bits;
        num >>= 1;
        bits--;
    }

    return reversed;
}

int lr7() {
    unsigned int num;

    printf("enter a number: ");
    scanf("%u", &num);


    unsigned int reversed = reverseBits(num);

    printf("your nunber: %u\n", reversed);

    return 0;
}
