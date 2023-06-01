arr = list(map(int, input("Введите числа через пробел: ").split()))
k = 0
for i in arr:
    if i > 0:
        k += i
print('Массив ', arr)
print('Сумма положительных элементов ', k)
