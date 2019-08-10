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
        mat[row][col] = 1;

        for ( int i = 2 ; i <= n*n;  i++)
        {
            row--;col++;

            if(row < 0 && col >= n)
            {
                row+=2;
                col--;
                mat[row][col] = i;
                continue;
            }

            row = row < 0 ? n-1 : row;
            col = col  > n-1 ? 0 : col;

            if(mat[row][col] == 0)
            {
                mat[row][col] = i;
                continue;
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
        int sum ;
        for ( int i = 0 ; i < n ; i++)
        {
            sum = 0;
            for ( int j = 0 ; j < n ; j++)
            {
                sum+= mat[0][j];
                printf(" |%2d| ",mat[i][j]);
            }
            printf("\n");
        }
        printf("total = %3d",sum);
    }
    else
        printf("n is 0 or nagative number\n\n");
}
