#include <iostream>
#include <cstdlib>
#include <ctime>

void task1()
{
    srand (time(nullptr));
    int rows = 0;
    int cols = 0;
    std::cout << "Enter rows and collums of the array: " << std::endl;
    std::cin >> rows;
    std::cin >> cols;
    int** arr = new int*[rows];
    for (int i = 0; i < rows; ++i) 
    {
        arr[i] = new int[cols];
    }
    for (int i = 0; i < rows; ++i)
    {
        for(int j = 0; j < cols; ++j)
        {
            float random = (rand() * 1.0f) / RAND_MAX;
            int actualRandom = 12 + random * 110.0f;
            arr[i][j] = actualRandom;
            std::cout << actualRandom << std::endl;
        }
    }

}

void task3()
{

}

int main()
{
    task1();
    return 0;
}
