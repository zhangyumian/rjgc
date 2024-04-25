#include <stdio.h>
#include<time.h>
#include<stdlib.h>

void bubble_sort(double arr[], int len);
void insertion_sort(double arr[], int len);
void selection_sort(double arr[], int len);

int main() {
    double arr[1000];
    int i, len;

    // ����
    printf("����������С���\n");
    for (i = 0; i < 1000; i++) {
       arr[i] = 0 + 1.0 * (rand() % RAND_MAX) / RAND_MAX * (1000 - -1000);	//��ΪRAND_MAX,���Ч������;
    }
    len = 1000;
    printf(" ѡ�������㷨 bubble insertion selection\n");
   
    // ð������
    bubble_sort(arr, len);
    printf("ð����������\n");
    for (i = 0; i < len; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    // �����������
    insertion_sort(arr, len);
    printf("���������������\n");
    for (i = 0; i < len; i++) {
        printf("%lf ", arr[i]);
    }
    printf("\n");

    // ѡ������
    selection_sort(arr, len);
    printf("ѡ����������\n");
    for (i = 0; i < len; i++) {
        printf("%lf", arr[i]);
    }
    printf("\n");

    return 0;
}

// ð������
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

 //�����������
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

//// ѡ������
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
