#include <iostream>

using namespace std;

class Matrix
{

public:
    int rows=2, column=2;
    int array[2][2] = {2, 2, 1, 2};
    void getMatrixData()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                cout << array[i][j] << "  ";
            }
        }
    }

    int getRows()
    {
        return rows;
    }

    int getColumns()
    {
        return column;
    }

    void setElement()
    {
        int r, c, data;
        cout << "\nEnter Row & Column\n";
        cin >> r >> c;
        cout << "Enter Data ";
        cin >> data;
        array[r][c] = data;
        cout << " Data At " << r << c << " is" << array[r][c];
    }

    Matrix addMatrix(Matrix m1, Matrix m2)
    {
        Matrix temp;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                temp.array[i][j] = m1.array[i][j] + m2.array[i][j];
            }
            cout<<"\n";
        }
        return temp;
    }

    Matrix multiplyMatrix(Matrix m1, Matrix m2)
    {
        Matrix temp;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < column; j++)
            {
                temp.array[i][j] = m1.array[i][j] * m2.array[i][j];
            }
             cout<<endl;
        }
        return temp;
    }
};

int main()
{
    Matrix m1;
    cout << "The Number of rows "
         << m1.rows;
    cout << "\nThe Number of rows "
         << m1.rows;
    cout << "\nSet Value at Particular Position" << endl;
    m1.setElement();

    cout << "\nAddition of two Matrix\n";
    Matrix m2 , m3,m4;
    m4=m4.addMatrix(m2, m3);
    cout << "Matrix Addition :\n"
         << endl;
    m4.getMatrixData();

     cout << "\nMatrix Multiplication :"
         << endl;
    m4=m4.multiplyMatrix(m2,m3);
    m4.getMatrixData();
    return 0;
}

