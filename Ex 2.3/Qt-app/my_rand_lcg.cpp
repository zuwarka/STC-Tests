#include "my_rand_lcg.h"
#include "my_rand_coeff.h"

unsigned short const N = 4; //количество старотовых чисел для последовательности псевдослучайных чисел

unsigned short my_rand_lcg(unsigned short diapason_from, unsigned short diapason_to)
{
    //пользователю предлагается ввести старотовую последовательность для вычисления псевдослучайного ряда чисел
    unsigned short numbers[N], seed = 0; //старотовый массив, сид, флаг (кол-во чисел), диапазон случайных чисел
    unsigned short a = 0, c = 0, m = 0; //коэффициенты ЛКМ//std::cout << "Input four integer numbers (16bit) to form a row for randomize: " << std::endl;
    //заносим в массив numbers старотовые четыре числа с клавиатуры
    for (int i = 0; i < N; i++)
    {
        numbers[i] = my_rand_coeff();
    }
    //стартовый сид = это сумма последних четырех чисел массива numbers
    for (int i = 0; i < N; i++)
    {
        seed += numbers[i];
    }


    //флаг - это количество выводимых псевдослучайных чисел (вводится с клавиатуры)
    //цикл с постусловием
    //когда флаг станет нулевы, подсчет чисел и вывод завершится

    //---------------------необязательное улучшение алгоритма
    //чтобы сделать алгоритм еще более случайным, коэффициенты а, с, m будут выбираться для каждого сида "случайно"
    //при помощи отдельно прописанной функции, котороая работает по методу ЛКМ, но с программно заданными коэффициентами

    a = my_rand_coeff();
    c = my_rand_coeff();
    m = my_rand_coeff();

    //недостаток такого подхода: мы не знаем, насколько длинный период получится при заданных "случайно" коэффициентах

    //далее последующий сид ищется через линейный конгруэнтный метод (ЛКМ)
    seed = (seed * a + c) % m;
    return seed % (diapason_to - diapason_from + 1) + diapason_from;
}
