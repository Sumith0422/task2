#include <iostream>
using namespace std;

int main()
{
   int sparseMatrix[4][5] =
    {
        {0 , 0 , 3 , 0 , 4 },
        {0 , 0 , 5 , 7 , 0 },
        {0 , 0 , 0 , 0 , 0 },
        {0 , 2 , 6 , 0 , 0 }
    };
    int row=4, column =5;
    int size = 0;
    for (int row = 0; row < 4; row++)
        for (int column = 0; column < 5; column++)
            if (sparseMatrix[row][column] != 0)
                size++;

    int resultMatrix[3][size];

    int k = 0;
    for (int row = 0; row < 4; row++)
        for (int column = 0; column < 5; column++)
            if (sparseMatrix[row][column] != 0)
            {
                resultMatrix[0][k] = row;
                resultMatrix[1][k] = column;
                resultMatrix[2][k] = sparseMatrix[row][column];
                k++;
            }
    for (int row=0; row<3; row++)
    {
        for (int column = 0; column<size; column++)
            cout<<resultMatrix[row][column]<<" ";

        cout<<endl;
    }
           
       if (size < ((row * column)/ 2))
          cout<<"sparse matrix"<<endl;
       else
          cout<<"not a sparse matrix"<<endl;

    return 0;
}
