#include <stdio.h>
void sort(int x[], int n);


    
int main()
{
    int n, i, x[100], ch;
    char cha;
    printf("How many numbers (max 100)? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &x[i]);
    }
     do
     {
      
        printf("\nPress 1 for print in ascending\n2 for average of the numbers\n3 to search the key number\n4 to find out the max\n5 to exit from program\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &ch);
        switch (ch)
        
        {
        case 1:
             sort(x, n);
            break;
        case 2:
            printf("average of number is %f",avg(x,n));

        case 3:



        case 4:



        case 5: 
         return 0; 
    
           default:
                printf("Invalid choice.\n")
        }
         printf("do you want to continu?(y/n)")
         scanf("%c"&cha) 
     }
      while (cha =="y");
     
           
         
     

 return 0;
    

}

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

     printf("\nNumbers in ascending order:\n");
    for (i = 0; i < n; i++) {

        printf("%5d", x[i]);}
}


