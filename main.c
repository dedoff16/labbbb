#include <stdio.h>
#include "lr.h"
int main() {
    int n,z;
    printf("����� ����� ������������?");
    scanf("%d",&n);
    if (n==1) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr1();
        }
        else{
            lr1dop();
        }
    }
    if (n==2) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr2();
        }
        else{
            lr2dop();
        }
    }
    if (n==3) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr3();
        }
        else{
            lr3dop();
        }
    }
    if (n==4) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr4();
        }
        else{
            lr4dop();
        }
    }
    if (n==5) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr5();
        }
        else{
            lr5dop();
        }
    }
    if (n==6) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr6();
        }
    }
    if (n==7) {
        printf("(1)�������� ������� ��� (2)��������������?\n");
        scanf("%d",&z);
        if (z==1){
            lr7();
        }

    return 0;
}
}

