#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int a[100];
    int q[1000] = {0};
    printf("Number of elements in the array (n): ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        q[a[i]]++;
    }

    int choice;

    while (1)
    {
        printf("\n-----------------------------------\n");
        printf("\n               MENU                \n");
        printf("\n-----------------------------------\n\n");
        printf("1.  Optimized sorting\n");
        printf("2.  Insert element in the array\n");
        printf("3.  Delete element from the array\n");
        printf("4.  Rotate the array clockwise\n");
        printf("5.  Check if an element is in the array\n");
        printf("6.  Reverse the array\n");
        printf("7.  Exit the program\n\n");
        printf("Choice: ");
        scanf("%d", &choice);

        if (choice == 7)
            break;

        switch (choice)
        {
        case 1:
        {
            // sort the array here and print it
            for (int i = 1; i < n; i++)
            {
                int current = a[i];
                int j = i - 1;
                while (j >= 0 && a[j] > current)
                {
                    a[j + 1] = a[j];
                    j--;
                }
                a[j + 1] = current;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        }

        case 2:
        {
            int element, id;
            printf("Element: ");
            scanf("%d", &element);
            printf("Index: ");
            scanf("%d", &id);

            // insert "element" at index "id" and print the array
            int global = a[id];
            for (int i = id; i < n; i++)
            {
                int val = a[i + 1];
                a[i + 1] = global;
                global = val;
            }
            a[id] = element;
            q[element]++;
            n++;
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        }

        case 3:
        {
            int id;
            printf("Index: ");
            scanf("%d", &id);

            // remove element at index "id" and print the array
            int global = a[id];
            q[global]--;

            for (int i = n; i > id; i--)
            {
                int val = a[i - 1];
                a[i - 1] = global;
                global = val;
            }
            n--;
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        }

        case 4:
        {
            int degree;
            printf("Degree of rotation: ");
            scanf("%d", &degree);

            // rotate the array clockwise "degree" times and print it
            while (degree--)
            {
                int val = a[0];
                int temp = a[n - 1];
                for (int i = 0; i < n; i++)
                {
                    int localTemp = a[i + 1];
                    a[i + 1] = val;
                    val = localTemp;
                }
                a[0] = temp;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        }

        case 5:
        {
            int number;
            scanf("%d", &number);

            // print YES if it exists, print NO otherwise
            if (q[number] > 0)
                printf("YES\n");
            else
                printf("NO\n");
            break;
        }

        case 6:
        {
            // reverse the array and print it
            int left = 0;
            int right = n - 1;
            while (left <= right)
            {
                int temp = a[left];
                a[left] = a[right];
                a[right] = temp;
                left++;
                right--;
            }
            for (int i = 0; i < n; i++)
            {
                printf("%d ", a[i]);
            }
            break;
        }

        default:
            printf("Wrong input.");
        }
    }
    return 0;
}
