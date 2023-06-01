arr = list(map(float, input("Введите вещественные числа через пробел: ").split()))
print(arr)
arr.reverse()
k = 0
for i in arr:
    if i < 0: break
    k += 1
print('Сумма элементов, расположенных правее последнего отрицательного элемента: ', sum(arr[i] for i in range(k)))
