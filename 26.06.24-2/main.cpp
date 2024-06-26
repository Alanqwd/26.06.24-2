#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <Windows.h>




int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    std::vector<int> originalVector;
    std::srand(std::time(0));


    for (int i = 0; i < 10; ++i) 
    {
        originalVector.push_back(std::rand() % 41 - 20); 
    }


    std::cout << "Исходный вектор: ";
    for (int num : originalVector) 
    {
        std::cout << num << ", ";
    }
    std::cout << std::endl;


    auto it = originalVector.begin();
    while (it != originalVector.end()) 
    {
        if (*it <= 0) 
        {
            it = originalVector.erase(it);
        }
        else
        {
            ++it;
        }
    }


    std::cout << "Вектор после удаления отрицательных чисел и нулей: ";
    for (int num : originalVector)
    {
        std::cout << num << ", ";
    }
    std::cout << std::endl;


    for (int i = 0; i < originalVector.size(); ++i) 
    {
        for (int j = i + 1; j < originalVector.size(); ++j)
        {
            if (originalVector[i] > originalVector[j]) 
            {
                int temp = originalVector[i];
                originalVector[i] = originalVector[j];
                originalVector[j] = temp;
            }
        }
    }


    std::cout << "Отсортированный вектор: ";
    for (int num : originalVector) 
    {
        std::cout << num << ", ";
    }
    std::cout << std::endl;


    std::vector<int> sortedVector(originalVector.begin(), originalVector.end());


    std::cout << "Второй вектор: ";
    for (int num : sortedVector) 
    {
        std::cout << num << ", ";
    }
    std::cout << std::endl;

    return 0;
}