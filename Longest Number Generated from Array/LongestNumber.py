lista = [1, 9, 12, 3]
for i in range(0,len(lista)-1):
    for j in range(i+1, len(lista)):
        if(int(str(lista[i])+str(lista[j])) < int(str(lista[j])+str(lista[i]))):
            lista[i], lista[j] = lista[j], lista[i]
print("".join([str(i) for i in lista]),end = "")