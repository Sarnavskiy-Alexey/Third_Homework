#include <iostream>

extern const int GL_A;
extern const int GL_B;
extern const int GL_C;
extern const int GL_D;

int main()
{
    std::cout << "Task #2\n";
    // инициализация переменных для задания 2
    int i_userNumber = 0;
    int i_result = 0;

    std::cout << "Enter integer: ";
    std::cin >> i_userNumber;

    i_result = (i_userNumber <= 21) ? i_userNumber - 21 : (i_userNumber - 21) * 2;

    std::cout << "Result is: " << i_result << std::endl;
    std::cout << "______________________________________" << std::endl << std::endl;
    system("pause");

    /* ********************************************************************* */
    std::cout << "Task #3\n";
    // инициализация переменных для задания 3
    int aMas[3][3][3] = { 0 };
    int* ptr = aMas[0][0];
    int* ptr2 = ptr;

    // реализация задания
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                aMas[i][j][k] = i* 9 + j * 3 + k + 1;
            }
        }
    }

    for (int i = 0; i < 27; i++)
    {
        std::cout << i + 1 << " element: " << *ptr << std::endl;
        ptr++;
    }

    ptr2 = ptr2 + 13;
    std::cout << "\tElement in the center is: " << *ptr2 << std::endl;

    std::cout << "______________________________________" << std::endl << std::endl;
    system("pause");

    /* ********************************************************************* */
    std::cout << "Task #4\n";
    // инициализация переменных для задания 4
    float f_result = 0.0f;

    // вывод на экран текущих значений a, b, c, d
    std::cout << "\ta = " << GL_A << std::endl;
    std::cout << "\tb = " << GL_B << std::endl;
    std::cout << "\tc = " << GL_C << std::endl;
    std::cout << "\td = " << GL_D << std::endl;
    
    // расчет значения a * (b + (c / d))
    f_result = GL_A * (GL_B + ((float)GL_C / GL_D));
    std::cout << "\na * (b + (c / d)) = " << f_result << "f" << std::endl;

    return 0;
}
