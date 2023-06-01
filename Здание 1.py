arr = [-3, 11, 8, 2, 50, 6, 23, 44, 4, 10]
k = 0
min_arr = arr.index(min(arr))
max_arr = arr.index(max(arr))
for i in range(len(arr)):
    if (i > min_arr) and (i < max_arr):
        k +=1
print(arr)
print('Между значениями', arr[min_arr], 'и', arr[max_arr],' - ', k, 'элементов')

