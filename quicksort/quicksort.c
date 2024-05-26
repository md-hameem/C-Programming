#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int CompareString(char *str1, char *str2) {
    int length1 = strlen(str1);
    int length2 = strlen(str2);
    int minLen = (length1 < length2) ? length1 : length2;
    for (int i = 0; i < minLen; i++) {
        if (str1[i] < str2[i]) {
            return 1;
        }
        else if (str1[i] > str2[i]) {
            return -1;
        }
    }
    if (length1 == length2) {
        return 0;
    }
    else if (length1 > length2) {
        return -1;
    }
    else {
        return 1;
    }
}

int Partition(char array[10][100], int low, int high) {
    char pivot_key[100];
    strcpy(pivot_key, array[low]);
    while (low < high) {
        while (low < high && CompareString(array[high], pivot_key) >= 0) {
            high--;
        }
        strcpy(array[low], array[high]);
        while (low < high && CompareString(array[low], pivot_key) <= 0) {
            low++;
        }
        strcpy(array[high], array[low]);
    }
    strcpy(array[low], pivot_key);
    return low;
}

void QuickSort(char array[10][100], int low, int high) {
    if (low < high) {
        int pivot = Partition(array, low, high);
        QuickSort(array, low, pivot - 1);
        QuickSort(array, pivot + 1, high);
    }
}

int main() {
    int total = 10;
    char strs[10][100];
    strcpy(strs[0], "acos");
    strcpy(strs[1], "char");
    strcpy(strs[2], "ceil");
    strcpy(strs[3], "atan");
    strcpy(strs[4], "define");
    strcpy(strs[5], "floor");
    strcpy(strs[6], "clock");
    strcpy(strs[7], "float");
    strcpy(strs[8], "ctime");
    strcpy(strs[9], "exep");

    QuickSort(strs, 0, total - 1);

    int i;
    for (i = 0; i < total; i++) {
        printf("%s\n", strs[i]);
    }

    return 0;
}