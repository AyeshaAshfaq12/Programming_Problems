#include <iostream>
#include <conio.h>
#include<windows.h>
using namespace std;
//------------Data Structures-----------//
int A[3][3];
int B[3][3];
int C[3][3];
//------------Function Prototypes--------------//
void InputValueInMatrix();                                 // function for taking input values in Matrix A and B
void print(int D[3][3]);                                   // function for displaying matrix values
void sum(int A[3][3], int B[3][3]);                        // function for adding two matrix
void subtraction(int A[3][3], int B[3][3]);                // function for subtraction of two matrix
void multiplication(int A[3][3], int B[3][3]);             // function for multiplication of two matrix
void scalarMultiplication(int A[3][3], int num);           // function for sacalar multiplication with matrix
void transposeMatrix(int M[3][3]);                         // function for transposing matrix
bool isIdentityMatrix(int M[3][3]);                        // function for checking property of identity matrix
bool isDiagonalMatrix(int M[3][3]);                        // function for checking property of diagonal matrix
bool isSymmetric(int M[3][3]);                             // function for checking is matrix is symmetric
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//-------------Main Body-------------//
main()
{
    system("cls");
    InputValueInMatrix();
    system("cls");
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "             Values of Matrix" << endl;
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "  Matrix A: " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);
    print(A);
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "  Matrix B: " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);
    print(B);
    cout << endl;
    SetConsoleTextAttribute(hConsole, 15);
    cout << "   Press any key to continue_";
    getch();
    system("cls");
    sum(A, B);
    SetConsoleTextAttribute(hConsole, 14);
    print(C);
    subtraction(A, B);
    SetConsoleTextAttribute(hConsole, 14);
    print(C);
    multiplication(A, B);
    SetConsoleTextAttribute(hConsole, 14);
    print(C);
    cout << endl;
    scalarMultiplication(A, 2);
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);
    print(C);
    transposeMatrix(A);
    cout << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << " Transpose Matrix" << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 14);
    print(C);
    SetConsoleTextAttribute(hConsole, 6);
    if (isIdentityMatrix(A))
    {
        cout << endl;
        cout << "   A is Identity Matrix " << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "   A is not Identity Matrix " << endl;
        cout << endl;
    }

    if (isDiagonalMatrix(A))
    {
        cout << endl;
        cout << "   A is Diagonal Matrix " << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "   A is not Diagonal Matrix " << endl;
        cout << endl;
    }

    if (isSymmetric(A))
    {
        cout << endl;
        cout << "   A is Symmetric Matrix " << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "   A is not Symmetric Matrix " << endl;
        cout << endl;
    }
    SetConsoleTextAttribute(hConsole, 15);
}
//-------------Function Definitions--------------//
void print(int D[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << "\t" << D[x][y];
        }
        cout << endl;
    }
    cout << endl;
}
void InputValueInMatrix()
{
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "    Enter the values of Matrix A " << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 15);
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << " For R" << x + 1 << "C" << y + 1 << " : ";
            cin >> A[x][y];
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 6);
    cout << "    Enter the values of Matrix B " << endl;
    SetConsoleTextAttribute(hConsole, 15);
    cout << endl;
    for (int x = 0; x < 3; x++) 
    {
        for (int y = 0; y < 3; y++)
        {
            cout << " For R" << x + 1 << "C" << y + 1 << " : ";
            cin >> B[x][y];
        }
        cout << endl;
    }
}
void sum(int A[3][3], int B[3][3])
{
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "   Addition of Matrices is : " << endl;
    cout << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] + B[x][y]; 
        }
    }
}
void subtraction(int A[3][3], int B[3][3])
{
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "   Subtraction of Matrices is : " << endl;
    cout << endl;
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] - B[x][y]; 
        }
    }
}
void multiplication(int A[3][3], int B[3][3])
{
    cout << endl;
    cout << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "   Multiplication of Matrices is : " << endl;
    cout << endl;

    C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] + A[0][2] * B[2][0];
    C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] + A[0][2] * B[2][1];
    C[0][2] = A[0][0] * B[0][2] + A[0][1] * B[1][2] + A[0][2] * B[2][2];

    C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] + A[1][2] * B[2][0];
    C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] + A[1][2] * B[2][1];
    C[1][2] = A[1][0] * B[0][2] + A[1][1] * B[1][2] + A[1][2] * B[2][2];

    C[2][0] = A[2][0] * B[0][0] + A[2][1] * B[1][0] + A[2][2] * B[2][0];
    C[2][1] = A[2][0] * B[0][1] + A[2][1] * B[1][1] + A[2][2] * B[2][1];
    C[2][2] = A[2][0] * B[0][2] + A[2][1] * B[1][2] + A[2][2] * B[2][2];
}
void scalarMultiplication(int A[3][3], int num)
{
    cout << endl;
    SetConsoleTextAttribute(hConsole, 12);
    cout << "   Scalar Multiplication of Matrix with " << num << " : " << endl;

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[x][y] = A[x][y] * num;
        }
    }
}
bool isIdentityMatrix(int M[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (x == y)
            {
                if (M[x][y] != 1)        //    if the diagonal values are not equal to 1 than return false
                {
                    return false;
                }
            }
            else
            {
                if (M[x][y] != 0)        //    if the other values are not equal to 0 than return false
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void transposeMatrix(int M[3][3])
{

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            C[y][x] = A[x][y];         //    giving the values of rows to columns
        }
    }
}
bool isDiagonalMatrix(int M[3][3])
{
    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (x == y)              //     skiping the diagonal values
            {
                continue;
            }
            else
            {
                if (M[x][y] != 0)    //     if the other values are not equal to 0 than return false
                {
                    return false;
                }
            }
        }
    }
    return true;
}
bool isSymmetric(int M[3][3])
{
    transposeMatrix(M);               //     changing rows into coloumns and saving in matrix C

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (C[x][y] != M[x][y])   //     if Matrix C and Matrix M (which is passed from main) are not same at any point return false
            {
                return false;
            }
        }
    }
    return true;
}