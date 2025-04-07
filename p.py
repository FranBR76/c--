despesas = [12.00, 37.43, 55.90, 67.00, 105.88]

temp = 0
for i in range(5):
    for j in range(4):
        if despesas[j] < despesas[j + 1]:
            temp = despesas[j]
            despesas[j] = despesas[j + 1]
            despesas[j + 1] = temp



print(despesas)