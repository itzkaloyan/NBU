#include <iostream>
using namespace std;

int task1()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Must be >= 0" << endl;
        return 1;
    }

    int* A = new int[n];
    cout << "Elements of A:" << endl;

    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    int* B = new int[n];
    int* pA = A;
    int* pB = B;

    //odd
    for (int i = 0; i < n; i += 2) {
        *pB = *pA;
        ++pB;
        pA += 2;
    }

    pA = A; //start again

    //even
    for (int i = 1; i < n; i += 2) {
        *pB = *pA;
        ++pB;
        pA += 2;
    }

    cout << "B: ";
    for (int i = 0; i < n; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;

    delete[] A;
    delete[] B;

    return 0;
}

int task2()
{
    int n;
    cout << "n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Out of bounds!" << endl;
        return 1;
    }

    int* A = new int[n];
    cout << "Elements of A:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "A[" << i << "]: ";
        cin >> A[i];
    }

    int* B = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "B[" << i << "]: ";
        if(A[i] < 5)
        {
            B[i] = 2 * A[i];
        }
        else
        {
            B[i] = A[i] / 2;
        }
    }

    return 0;
}

int task3()
{
    int n = 0;
    int count = 0;
    cout << "n: ";
    cin >> n;

    int* A = new int[n];

    cout << ": ";
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        if (A[i] > A[i + 1]) {
            ++count;
        }
    }

    cout << "Count: " << count <<endl;

    if (count > 0) 
    {
        int* resA = new int[count];
        int resI = 0;

        for (int i = 0; i < n - 1; ++i) 
        {
            if (A[i] > A[i + 1]) 
            {
                resA[resI++] = A[i + 1];
            }
        }

        cout << "Elements that are bigger than their right: " << count << endl;
        cout << "Elements in order from big to small: ";
        for (int i = 0; i < n - 1; ++i) 
        {
            if (A[i] > A[i + 1]) 
            {
            cout << A[i + 1] << " ";
            }
        }
        cout << endl;

        delete[] resA;
    } 
    else 
    {
        cout << "No bigger elements" << endl;
    }

    return 0;
}

int task4()
{
    int rows = 0;
    int cols = 0;
    cout << "Enter rows (1 < n < 20): " << endl;
    cin >> rows;
    cout << "Enter columns (1 < m < 30): " << endl;
    cin >> cols;

    if (rows <= 1 || rows > 20 || cols <= 1 || cols >= 30) {
        cout << "Out of bounds!" << endl;
        return 1;
    }

    int arrA[rows][cols];
    cout << "Enter elements: " << endl;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element["<< i <<"]["<< j <<"]: ";
            cin >> arrA[i][j];
        }
    }

    int compareNum;
    cout << "Row to compare: ";
    cin >> compareNum;

    if (compareNum <= 0 || compareNum > rows) {
        cout << "Out of bounds!" << endl;
        return 1;
    }

    cout << "Row matches: " << compareNum << ":" << endl;
    bool match = false;
    for (int i = 0; i < rows; ++i) {
        if (i + 1 != compareNum) {
            match = true;
            for (int j = 0; j < cols; ++j) {
                if (arrA[i][j] != arrA[compareNum - 1][j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                cout << "Row " << i + 1 << endl;
            }
        }
    }
}
int main()
{
    task1();
    task2();
    task3();
    task4();

    return 0;
}