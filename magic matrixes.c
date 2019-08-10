void main()
{
    /*input n value*/
    int n;
    printf("input n for the matix : ");
    scanf("%d",&n);



    /*create matrix by n number*/
    int mat[n][n];

    /*jo n value is 0 to kain narvanu*/
    if(n > 0)
    {
        /*set all element to 0*/
        for ( int i = 0 ; i < n ; i++)
            for ( int j = 0 ; j < n ; j++)
                mat[i][j] = 0;
        //completion of setting 0

        int row = 0;
        int col = n/2;
        mat[0][n/2] = 1;

        for ( int i = 2 ; i <= n*n;  i++)
        {
            //printf("%d %d",row,col);
            row--;
            col++;

            if(row < 0 && col >= n)
            {
                row+=2;
                col--;
                mat[row][col] = i;
                continue;
            }

            if(row < 0)
            {
                row = n-1;
                if(mat[row][col] == 0)
                {
                    mat[row][col] = i;
                    continue;
                }

            }
            if(col  > n-1)
            {
                col = 0;

                if(mat[row][col] == 0)
                {
                    mat[row][col] = i;
                    continue;
                }
            }

            if(mat[row][col] != 0 )
            {
                col--;
                row+=2;
                mat[row][col] = i;
                continue;
            }

            mat[row][col] = i;
        }

        printf("\n\n");
        /*print the matrix*/
        for ( int i = 0 ; i < n ; i++)
        {
            for ( int j = 0 ; j < n ; j++)
            {
                printf("%3d | ",mat[i][j]);
            }
            printf("\n\n");
        }
        printf("\n\n");
        int sum = 0;
        for ( int i = 0 ; i < n ; i++)
        {
            sum+= mat[0][i];
        }
        printf("total = %3d",sum);
    }
    else
        printf("n is 0 or nagative number\n\n");
}
