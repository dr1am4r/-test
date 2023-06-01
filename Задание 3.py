arr = list(map(int, input("Введите числа через пробел: ").split()))
max_x = int(input('Введите максимальную величину: '))
print('ваш массив: ', arr)
for i in reversed(range(0, len(arr))):
    if arr[i] < max_x:
        del arr[i]
print('Сжатый список: ', arr)
