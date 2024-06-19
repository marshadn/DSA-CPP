
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter no:of vertices: ");
    scanf("%d", &n);
    int a[n][n], vi[n], u, v, min = 999, cost = 0, e = 1;
    printf("Enter adjacency matrix: ");
    for (int i = 0; i < n; i++)
    {
        vi[i] = 0;
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 0)
                a[i][j] = 999;
            if (a[i][j] < min)
            {
                min = a[i][j];
                u = i;
                v = j;
            }
        }
    }
    cost += min;
    vi[u] = 1;
    vi[v] = 1;
    printf("\nSpanning Tree\n");
    printf("Edge {%d,%d}= %d\n", u, v, min);
    while (e < n - 1)
    {
        min = 999;
        for (int i = 0; i < n; i++)
        {
            if (vi[i] == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (a[i][j] < min && vi[j] == 0)
                    {
                        min = a[i][j];
                        u = i;
                        v = j;
                    }
                }
            }
        }
        cost += min;
        vi[v] = 1;
        printf("Edge {%d,%d}= %d\n", u, v, min);
        e += 1;
    }
    printf("Minimum Cost = %d", cost);
    return 0;
}
