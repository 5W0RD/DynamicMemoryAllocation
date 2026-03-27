#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;
    char choice;

    printf("Enter Elements : ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Allocation Failed\n");
        return 1;
    }
    printf ("Enter Value : \n");
        for ( i = 0 ; i < n ; i++ ) {
            scanf("%d", ptr + i);
        }
        printf ("Output : ");
        displayData(ptr, n);

        printf ("\nWould you like to add more Elements? (Y/N) : ");
        scanf (" %c", &choice);

        if (choice == 'Y' || choice == 'y'){
            int extra;

            printf ("How many Elements? : ");
            scanf ("%d", &extra);

            int *temp = realloc(ptr, (n + extra) * sizeof(int));

            if (temp == NULL) {
                printf("Reallocation Failed\n");
            } else {
                ptr = temp;
                printf("Enter Additional Value: \n");
                    for (i = n ; i < n + extra ; i++ ) {
                    scanf("%d", ptr + i);

            }

            n = n + extra;

            printf ("Update Value: ");
            displayData(ptr, n);
        }
    }
        free(ptr);

}
