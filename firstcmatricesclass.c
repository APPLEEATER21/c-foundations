#include <stdio.h>

int main()
{
    int i, j;
    int m1[3][3], m2[3][3], m3[3][3];

    // 1. Input for the first matrix(m1)
    printf("Enter elements for the first matrix: \n");
    for(i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("Enter the first matrix m1[%d][%d]: ", i, j);
            scanf("%d", &m1[i][j]);
        }
    }

    // Input for second matrix m2.
    printf("\nEnter elements for the 2nd matrix:\n");
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the second matrix m2[%d][%d]: ", i, j);
            scanf("%d", &m2[i][j]);
        }
    }

    // Matrix addition (m1+m2=m3)
    for (i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            m3[i][j] = m1[i][j] + m2[i][j];
        }
    }

    // Output of the resulting matrix
    printf("\nResulting matrix m3 (m1+m2):\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", m3[i][j]);   // \t adds a tab space for neat formatting
        }
        printf("\n"); // Moves to the next line after printing each row
    }

    return 0;
}
