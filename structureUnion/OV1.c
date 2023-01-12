#include <stdio.h>
struct Worker
{
    int id, count;
};
struct Product
{
    int total;
    struct Worker wrk[1000];
};
int main()
{
    int n;
    printf("Enter how many production lines were active today: ");
    scanf("%d", &n);
    struct Product lines[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Data for Production line %d.\n", i + 1);
        int k;
        printf("Enter how many workers were active today at production line %d: ", i + 1);
        scanf("%d", &k);
        lines[i].total = k;
        for (int j = 0; j < k; j++)
        {
            printf("Enter ID of Worker %d in production line 1:", j + 1);
            scanf("%d", &lines[i].wrk[j].id);
        }
        int max = -1;
        int id = -1;
        int sum = 0;
        for (int j = 0; j < k; j++)
        {
            printf("Enter number of drones tested by Worker having ID %d:", lines[i].wrk[j].id);
            scanf("%d", &lines[i].wrk[j].count);
            if (lines[i].wrk[j].count > max)
            {
                max = lines[i].wrk[j].count;
                id = lines[i].wrk[j].id;
            }
            sum += lines[i].wrk[j].count;
        }
        printf("Total number of drones tested in production line 1: %d\n", sum);
        printf("Congrats! The worker with ID %d tested the most drones in production line 1! He gets a 500 tk bonus!\n", id);
    }
}