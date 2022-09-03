#include <iostream>
using namespace std;

class Matrix
{
public:
    void input(int mat[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("Enter matrix[%d][%d]: ", i, j);
                cin >> mat[i][j];
            }
        }
        return;
    }
    void display(int mat[3][3])
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
                printf("%d ", mat[i][j]);
            printf("\n");
        }
        return;
    }
    void add(int mat[3][3], int mat2[3][3], int sum[3][3])
    {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                sum[i][j] = mat[i][j] + mat2[i][j];
    }
};

int main()
{
    Matrix myMatrix;
    int mat[3][3], mat2[3][3], sum[3][3];
    myMatrix.input(mat);
    cout<<"The first matrix is: \n"; 
    myMatrix.display(mat);
    myMatrix.input(mat2);
    cout<<"The second matrix is: \n"; 
    myMatrix.display(mat2);
    myMatrix.add(mat, mat2, sum);
    cout<<"The sum of two matrices is: \n"; 
    myMatrix.display(sum);
    return 0;
}