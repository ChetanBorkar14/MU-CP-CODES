#include <stdio.h>
#include <ctype.h>

void read(int a[], int length) {
    printf("Enter %d elements: ", length);
    for (int i = 0; i < length; i++) {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int length) {
    printf("Array elements: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insert(int a[], int addkey, int *length) {
    a[*length] = addkey;
    (*length)++;
}

void sort(int a[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void delete(int a[], int deletekey, int *length) {
    int i, pos = -1;
    for (i = 0; i < *length; i++) {
        if (a[i] == deletekey) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        for (i = pos; i < *length - 1; i++) {
            a[i] = a[i + 1];
        }
        (*length)--;
    } else {
        printf("Element %d not found.\n", deletekey);
    }
}

void search(int a[], int searchkey, int length) {
    int found = 0;
    for (int i = 0; i < length; i++) {
        if (a[i] == searchkey) {
            printf("Element %d found at position %d.\n", searchkey, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found.\n", searchkey);
    }
}

void merge(int a[], int length1, int b[], int length2, int c[]) {
    int i, j, k;
    for (i = 0; i < length1; i++) {
        c[i] = a[i];
    }
    for (j = 0, k = length1; j < length2; j++, k++) {
        c[k] = b[j];
    }
}

int main() {
    int array1[100], array2[100], array3[200], n, m, l = 0, key;
    char choice, absorbantchar;

    do {
        printf("Choice?\n ");
        printf("\tR read\n\tP display\n\tI insert\n\tS sort\n\tD Delete\n\ts search\n\tM merge\n");
        scanf(" %c", &choice);
        switch (choice) {
            case 'R':
                printf("calling read..\n");
                printf("array A size? "); scanf("%d", &n);
                printf("array B size? "); scanf("%d", &m);
                read(array1, n);
                read(array2, m);
                display(array1, n);
                display(array2, m);
                break;
            case 'P':
                printf("calling display..\n");
                display(array3, l);
                break;
            case 'I':
                printf("calling insert..\n");
                printf("key to be inserted? "); scanf("%d", &key);
                insert(array3, key, &l);
                break;
            case 'S':
                printf("calling sort..\n");
                sort(array1, n);
                sort(array2, m);
                break;
            case 'D':
                printf("calling delete..\n");
                printf("key to be deleted? "); scanf("%d", &key);
                delete(array3, key, &l);
                break;
            case 's':
                printf("calling search..\n");
                printf("key to be searched? "); scanf("%d", &key);
                search(array1, key, n);
                search(array2, key, m);
                break;
            case 'M':
                printf("calling merge..\n");
                merge(array1, n, array2, m, array3); l = n + m;
                display(array3, l);
                break;
            default:
                printf("\n\t invalid choice\n");
        }
        printf("\n\t\t continue(Y/N)? ");
        scanf(" %c", &choice);
        scanf(" %c", &absorbantchar);
    } while (toupper(choice) != 'N');
    return 0;
}