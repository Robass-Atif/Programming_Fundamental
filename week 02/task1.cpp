#include <iostream>
#include <string>

using namespace std;

void printMatrix(int matrix[][3], int rowSize);
void addMatrices(int matrix1[][3], int matrix1RowSize, int matrix2[][3], int matrix2RowSize, int answer[][3], int answerRowSize);
void subtractMatrices(int matrix1[][3], int matrix1RowSize, int matrix2[][3], int matrix2RowSize, int answer[][3], int answerRowSize);
void multiplyMatrices(int matrix1[][3], int matrix1RowSize, int matrix2[][3], int matrix2RowSize, int answer[][3], int answerRowSize);
void scalarMultiplication(int matrix1[][3], int matrix1RowSize, int number, int answer[][3], int answerRowSize);
bool isIdentityMatrix(int matrix[][3], int rowSize);
void transposeOfMatrix(int matrix[][3], int matrixRowSize, int answer[][3], int answerRowSize);
bool isDiagonalMatrix(int matrix[][3], int rowSize);
bool isSymmetricMatrix(int matrix[][3], int rowSize);

main()
{
    int A[3][3] = {{0, 0, 0},
                   {0, 0, 0},
                   {0, 0, 0}};
    int B[3][3] = {{0, 0, 0},
                   {0, 0, 0},
                   {0, 0, 0}};
    int C[3][3] = {{0, 0, 0},
                   {0, 0, 0},
                   {0, 0, 0}};
    string input;
    while (input != "Exit")
    {
        cout << "  >>";
        cin >> ws;
        getline(cin, input);
        if (input.length() == 21)
        {
            int count = 3;
            if (input[0] == 'A')
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        A[i][j] = stoi(string(1, input[count]));
                        count = count + 2;
                    }
                }
            }
            if (input[0] == 'B')
            {
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        B[i][j] = stoi(string(1, input[count]));
                        count = count + 2;
                    }
                }
            }
        }
        if (input == "print(A)")
        {
            printMatrix(A, 3);
        }
        else if (input == "print(B)")
        {
            printMatrix(B, 3);
        }
        else if (input == "print(C)")
        {
            printMatrix(C, 3);
        }
        else if (input == "C=A+B")
        {
            addMatrices(A, 3, B, 3, C, 3);
        }
        else if (input == "C=A-B")
        {
            subtractMatrices(A, 3, B, 3, C, 3);
        }
        else if (input == "C=B-A")
        {
            subtractMatrices(B, 3, A, 3, C, 3);
        }
        else if (input == "C=A*B")
        {
            multiplyMatrices(A, 3, B, 3, C, 3);
        }
        else if (input.length() == 5 && input[2] != 'A' && input[2] != 'B' && input[4] == 'A')
        {
            scalarMultiplication(A, 3, stoi(string(1, input[2])), C, 3);
        }
        else if (input.length() == 5 && input[2] != 'A' && input[2] != 'B' && input[4] == 'B')
        {
            scalarMultiplication(B, 3, stoi(string(1, input[2])), C, 3);
        }
        else if (input == "transpose(A)")
        {
            transposeOfMatrix(A, 3, C, 3);
        }
        else if (input == "transpose(B)")
        {
            transposeOfMatrix(B, 3, C, 3);
        }
        else if (input == "transpose(A)")
        {
            transposeOfMatrix(C, 3, C, 3);
        }
        else if (input == "isDiagonal(A)")
        {
            cout << "    " << isDiagonalMatrix(A, 3) << endl;
        }
        else if (input == "isDiagonal(B)")
        {
            cout << "    " << isDiagonalMatrix(B, 3) << endl;
        }
        else if (input == "isDiagonal(C)")
        {
            cout << "    " << isDiagonalMatrix(C, 3) << endl;
        }
        else if (input == "isSymmetric(A)")
        {
            cout << "    " << isSymmetricMatrix(A, 3) << endl;
        }
        else if (input == "isSymmetric(B)")
        {
            cout << "    " << isSymmetricMatrix(B, 3) << endl;
        }
        else if (input == "isSymmetric(C)")
        {
            cout << "    " << isSymmetricMatrix(C, 3) << endl;
        }
        else if (input == "isIdentity(A)")
        {
            cout << "    " << isIdentityMatrix(A, 3) << endl;
        }
        else if (input == "isIdentity(B)")
        {
            cout << "    " << isIdentityMatrix(B, 3) << endl;
        }
        else if (input == "isIdentity(C)")
        {
            cout << "    " << isIdentityMatrix(C, 3) << endl;
        }
    }
}

void printMatrix(int matrix[][3], int rowSize)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout << matrix[row][col] << "\t";
        }
        cout << endl;
    }
}

void addMatrices(int matrix1[][3], int matrix1RowSize, int matrix2[][3], int matrix2RowSize, int answer[][3], int answerRowSize)
{
    for (int row = 0; row < answerRowSize; row++)
    {
        for (int col = 0; col < answerRowSize; col++)
        {
            answer[row][col] = matrix1[row][col] + matrix2[row][col];
        }
    }
}

void subtractMatrices(int matrix1[][3], int matrix1RowSize, int matrix2[][3], int matrix2RowSize, int answer[][3], int answerRowSize)
{
    for (int row = 0; row < answerRowSize; row++)
    {
        for (int col = 0; col < answerRowSize; col++)
        {
            answer[row][col] = matrix1[row][col] - matrix2[row][col];
        }
    }
}

void multiplyMatrices(int matrix1[][3], int matrix1RowSize, int matrix2[][3], int matrix2RowSize, int answer[][3], int answerRowSize)
{
    for (int row = 0; row < answerRowSize; row++)
    {
        for (int col = 0; col < answerRowSize; col++)
        {
            answer[row][col] = 0;
            for (int k = 0; k < 3; k++)
            {
                answer[row][col] += matrix1[row][k] * matrix2[k][col];
            }
        }
    }
}

void scalarMultiplication(int matrix1[][3], int matrix1RowSize, int number, int answer[][3], int answerRowSize)
{
    for (int row = 0; row < answerRowSize; row++)
    {
        for (int col = 0; col < answerRowSize; col++)
        {
            answer[row][col] = matrix1[row][col] * number;
        }
    }
}

bool isIdentityMatrix(int matrix[][3], int rowSize)
{
    bool identityMatrix = true;
    for (int i = 0; i < 3; i++)
    {
        if (matrix[i][i] != 1)
        {
            identityMatrix = false;
        }
    }
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row != col && matrix[row][col] != 0)
            {
                identityMatrix = false;
                break;
            }
        }
    }
    return identityMatrix;
}

void transposeOfMatrix(int matrix[][3], int matrixRowSize, int answer[][3], int answerRowSize)
{
    for (int row = 0; row < answerRowSize; row++)
    {
        for (int col = 0; col < answerRowSize; col++)
        {
            answer[col][row] = matrix[row][col];
        }
    }
}

bool isDiagonalMatrix(int matrix[][3], int rowSize)
{
    bool diagonalMatrix = true;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row != col && matrix[row][col] != 0)
            {
                diagonalMatrix = false;
                break;
            }
        }
    }
    return diagonalMatrix;
}

bool isSymmetricMatrix(int matrix[][3], int rowSize)
{
    bool symmetricMatrix = true;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (matrix[row][col] != matrix[col][row])
            {
                symmetricMatrix = false;
                break;
            }
        }
    }
    return symmetricMatrix;
}