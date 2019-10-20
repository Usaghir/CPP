/*=============================================================================
 File Name   : main.cpp
 Author      : Raja Umer Saghir
 Description : This program will do the matrixes multiplication .
 
 Matrix multiplication

 Issue

 Multiplication of matrices is often used for solving system of equations and
 for rotation of graphic objects in computer graphics. In this task you will 
 write a program that takes a pair of matrices, multiplies and produces another 
 matrix.

 Theory:

 In the multiplication C = A*B, where A is a m•p-matrix and B is a p•n-matrix,
 C will then be a m•n-matrix. A condition must be that the number of columns in
 A = the number of rows in B. The elements of C are calculated using the 
 formula: 𝐶(𝑟𝑜𝑤, 𝑐𝑜𝑙) = E^p-1_i=0; 𝐴 (𝑟𝑜𝑤, 𝑖)∙B(𝑖, 𝑐𝑜𝑙)
 
 Example:
 |1 2 3|   |1 1|   |1 ∙ 1 + 2 ∙ 3 + 3 ∙ 1 1 ∙ 1 + 2 ∙ 4 + 3 ∙ 2|    |10 15|
 |4 5 6| ∙ |3 4| = |4 ∙ 1 + 5 ∙ 3 + 6 ∙ 1 4 ∙ 1 + 5 ∙ 4 + 6 ∙ 2| =  |25 36|
           |1 2|

 Task

 Write a program that multiplies two loaded matrices. The program should at 
 least use the following declarations:

 const int MAXDIM = 5;
 typedef double Matrix[MAXDIM][MAXDIM];

 void readMatrix(Matrix M, int row, int col);
 // Reads one matrix with row rows and col columns

 void multMatrix(const Matrix A, const Matrix B, Matrix C, int m, int n, int p);
 // Multiplies m•p-matrix A with p•n matrix B and stores the result in the 
 m•n-matrix C

 void printMatrix(const Matrix M, int row, int col);
 // Prints the matrix M
 Global variables may not be used!
 ============================================================================*/

#include <iostream> // for input and output stream
#include <iomanip>  // for setfill()and setw(2)
#include <string>   // for using toupper();

using namespace std;

const int MAXDIM = 5;
typedef double Matrix[MAXDIM][MAXDIM];

void readMatrix(Matrix M, int row, int col);
// Precondition: M is two dimensional typeof double data type and row and col
// are number of rows and column values with maximum value 5.
// Postcondition: The function will read the values of the two matrix to be
// multiplied.

void multMatrix(const Matrix A, const Matrix B, Matrix C, int m, int n, int p);
// Precondition: Matrix a and Matrix B are two matrix and should be const but
// number of rows of first matrix is p should be equal to number of columns of
// second matrix is p.
// Postcondition: The function will multiply the two matrices

void printMatrix(const Matrix M, int row, int col);
// Precondition: Matrix M is resultant matrix row and col are the number of
// rows and columns of resultant.
// Postcondition: The function will display the resultan matrices

// Reads one matrix with row rows and col columns
void readMatrix(Matrix M, int row, int col)
{
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cin >> M[i][j];
    }
  }
}

//Multiplies m•p-matrix A with p•n matrix B and stores the result in the m•n-matrix C
void multMatrix(const Matrix A, const Matrix B, Matrix C, int m, int n, int p)
{
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < p; k++)
      {
        C[i][j] += 0;
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }
}

//Prints the matrix M
void printMatrix(const Matrix M, int row, int col)
{

  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      cout << M[i][j] << "\t";
    }
    cout << endl;
  }
}
int main()
{

  int m, n, p; // Variables declaration
  char answer; // For user choice.

  do
  {

    system("clear"); // Clear Screen
    cout << "=======================================================" << endl;
    cout << "           Matrix multiplication" << endl;
    cout << "=======================================================" << endl;

    Matrix A, B, C;
    cout << "Please enter the dimension of matrix A row and col: ";
    cin >> m >> p;
    cout << "=======================================================" << endl;
    cout << "Please enter the content of matrix A row and col: \n";
    readMatrix(A, m, p);
    cout << "=======================================================" << endl;
    cout << "Please enter the dimension of matrix B row and col: ";
    cin >> p >> n;
    cout << "=======================================================" << endl;
    cout << "Please enter the content of Matrix B row and col: \n";
    readMatrix(B, p, n);
    multMatrix(A, B, C, m, n, p);
    cout << "=======================================================" << endl;
    cout << "The Matrix AxB = C is: " << endl;
    printMatrix(C, m, n);
    cout << "=======================================================" << endl;

    // For repetition request from user.
    cout << "\nOne more time? (Y/N): ";
    cin.ignore();
    cin.get(answer);

  } while (toupper(answer) == 'Y');
  cout << "=============================================" << endl;
  cout << endl;

  return 0;
}
