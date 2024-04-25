#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<float.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void bubble_sort(double arr[], int len);
void insertion_sort(double arr[], int len);
void selection_sort(double arr[], int len);

int main() {
    double arr[1000];
    int i, len;

    // 输入
    printf("生成随机数中……\n");
    for (i = 0; i < 1000; i++) {
       arr[i] = 0 + 1.0 * (rand() % RAND_MAX) / RAND_MAX * (1000 - -1000);	//设为RAND_MAX,随机效果更好;
    }
    len = 1000;
    printf(" 选择排序算法 bubble insertion selection\n");
   
    // 冒泡排序
    
    bubble_sort(arr, len);
    printf("冒泡排序结果：\n");
    for (i = 0; i < len; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    // 逐个插入排序
    
    insertion_sort(arr, len);
    printf("逐个插入排序结果：\n");
    for (i = 0; i < len; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    // 选择排序
    
    selection_sort(arr, len);
    printf("选择排序结果：\n");
    for (i = 0; i < len; i++) {
        printf("%lf", arr[i]);
    }
    printf("\n");

    return 0;
}

// 冒泡排序

void bubble_sort(double arr[], int len) {
    int i, j;
    double temp;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

 //逐个插入排序

void insertion_sort(double arr[], int len) {
    int i, j;
    double temp;
    for (i = 1; i < len; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > temp; j--) {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = temp;
    }
}

//// 选择排序

void selection_sort(double arr[], int len) {
    int i, j, min;
        double temp;
    for (i = 0; i < len - 1; i++) {
        min = i;
        for (j = i + 1; j < len; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
