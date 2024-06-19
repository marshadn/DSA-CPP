

#include <stdio.h>
#include <stdlib.h>
int flag = 0;
void main()
{
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int a[n][n], v[n];
    printf("Enter adjacency matrix for a directed acyclic graph:\n ");
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
        for (int j = 0; j < n; j++)
            scanf(" %d ", &a[i][j]);
    }
    printf("\n Topological Sorting:\t");
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        if (v[i] == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j][i] != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                v[i] = 1;
                printf("%d->\t", i);
                for (int j = 0; j < n; j++)
                    a[i][j] = 0;
            }       // remove all edges from the deleted vertex
            i = -1; // if one vertex is removed then again begin loop (from i=0)
        }
    }
}
