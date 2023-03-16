#include <stdio.h>
#pragma pack(1)
struct student
{
    float cgpa;
    int id;
};
void sort(struct student arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].cgpa < arr[j + 1].cgpa)
            {
                struct student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            else if (arr[j].cgpa == arr[j + 1].cgpa && arr[j].id > arr[j + 1].id)
            {
                struct student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    struct student arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %f", &arr[i].id, &arr[i].cgpa);
    }
    FILE *op;
    op = fopen("output.txt", "w");
    sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        fprintf(op, "%d %.2f\n", arr[i].id, arr[i].cgpa);
    }
    fclose(op);
}