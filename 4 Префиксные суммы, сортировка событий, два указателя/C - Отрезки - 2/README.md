# C. Отрезки - 2
Ограничение по времени на тест : 1 секунда

Ограничение по памяти на тест : 256 мегабайт

#

### На числовую прямую накладываются отрезки, определите какая точка числовой прямой будет накрыта наибольшим числом отрезков, если возможных ответов несколько, то выведите самый левый ответ.

#

## Входные данные
В первой строке вам дано число N (1 ⩽ N ⩽ 2⋅10<sup><i>5</i></sup>) — количество отрезков, уложенных на прямую. В следующих N строках заданы сами отрезки в виде пар чисел разделённых пробелом l<sub><i>i</i></sub> и r<sub><i>i</i></sub> ( | l<sub><i>i</i></sub> | , | r<sub><i>i</i></sub> | ⩽ 10<sup><i>9</i></sup>, l<sub><i>i</i></sub> ⩽ r<sub><i>i</i></sub>) (отрезок накрывает все точки с l<sub><i>i</i></sub> по r<sub><i>i</i></sub> включительно).

## Выходные данные
Выведите два числа, наибольшее количество отрезков покрывающее одну точку числовой прямой и самую левую точку покрытую таким количеством отрезков.

#

## Пример

### Входные данные :
4

-10 10

-20 0

-30 0

15 20
### Выходные данные :
3 -10