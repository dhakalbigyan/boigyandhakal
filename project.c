#include <stdio.h>

// Function prototypes
void sort(int x[], int n);
int avg(int x[], int n);
int max(int x[], int n);
void key(int x[], int n);

int main()
{
    int n, i, x[100], ch;
    char cha;
    printf("How many numbers (max 100)? ");
    scanf("%d", &n);

    // Input the numbers
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &x[i]);
    }

    do {
        // Menu
        printf("\nPress 1 for print in ascending order\n");
        printf("Press 2 for average of the numbers\n");
        printf("Press 3 to find the key number\n");
        printf("Press 4 to find the max number\n");
        printf("Press 5 to exit from the program\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &ch);

        // Perform the action based on user's choice
        switch (ch) {
            case 1:
                sort(x, n);
                break;
            case 2:
                printf("Average of numbers is %d\n", avg(x, n));
                break;
            case 3:
                key(x, n);
                break;
            case 4:
                printf("The highest number is %d\n", max(x, n));
                break;
            case 5:
                return 0; 
            default:
                printf("Invalid choice.\n");
        }

        // Ask the user if they want to continue
        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cha);  // Add a space before %c to avoid issues with newlines

    } while (cha == 'y');

    return 0;
}

// Sorting function
void sort(int x[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    // Print sorted numbers
    printf("\nNumbers in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%5d", x[i]);
    }
    printf("\n");
}

// Find the maximum number
int max(int x[], int n)
{
    int i, m = x[0];
    for (i = 1; i < n; i++) {
        if (x[i] > m) {
            m = x[i];
        }
    }
    return m;
}

// Find the key number
void key(int x[], int n)
{
    int i, f, flag = 0;
    printf("\nEnter number to find its position: ");
    scanf("%d", &f);
    for (i = 0; i < n; i++) {
        if (x[i] == f) {
            flag = 1;
            printf("%d is at position x[%d]\n", f, i);
        }
    }
    if (flag == 0) {
        printf("INVALID NUMBER\n");
    }
}

// Calculate average
int avg(int x[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum / n;
}
