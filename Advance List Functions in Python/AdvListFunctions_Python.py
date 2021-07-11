from collections import Counter
from itertools import permutations
def unique(a):
    return len(set(a))

def pdt_unique(a):
    pdt = 1
    for i in set(a):
        pdt *= i
    
    return pdt

def extractK(a,k):
    a = [i for i in set(a) if a.count(i)>k]
    return a

def inRange(a,start,end):
    for i in a:
        if i not in range(start, end+1):
            return 0
    return 1
    
def consec3(a):
    tot = list()
    for i in range(0,len(a)-2):
        if(a[i]==a[i+1]==a[i+2]):
            tot.append(a[i])
    return tot
    
def adjStrong(a):
    tot = list()
    for i in range(len(a)-1):
        tot.append(max(a[i],a[i+1]))
    return tot
    
def singleString(a):
    return ''.join(elem for i in a for elem in i)
    
def extract(lst1,lst2,lst3):
    res = list()
    for i in range(0,len(lst2)):
        if lst2[i].find(lst3)!=-1:
            res.append(lst1[i])
    return res

def segregate(a):
    res = list()
    strn = ""
    for i in a:
        strn = i
        count = 0
        for j in range(0,len(strn)):
            if(ord(i[j])>=65 and ord(i[j])<=65+26):
                print(i[j],j)
                strn = strn[:j+count]+" "+strn[j+count:]
                count += 1
        res.append(strn)
    return res
    
    
def removeWords(a, b):
    for i in b:
        for j in a:
            if j.find(i)!=-1:
                a.pop(a.index(j))
    return a
    
def replace(a,remch,retch):
    for i in range(0,len(a)):
        if(a[i]!=retch):
            a[i] = remch
    return a
s = [['g', 'f', 'g'], ['i', 's'], ['b', 'e', 's', 't']]
test_list1 = ["Gfg", "is", "not", "best", "and", 
              "not", "for", "CS"]
test_list2 = ["Its ok", "all ok", "wrong", "looks ok",
              "ok", "wrong", "ok", "thats ok"]
sub_str = "ok"
test_list3 = ['gfg', 'is', 'best', 'for', 'geeks']
test_list = ["gfgBest", "forGeeks", "andComputerScienceStudentsElectronicsAndCommunications","gfg"]
input_list = [1,2,3,4,5,6,7,8,9,10,11]
char_list = ['g', 'o']
items = Counter(input_list).keys()
print(items)
print(unique(input_list))
print(pdt_unique(input_list))
print(extractK(input_list, 2))
print(bool(inRange(input_list, 3, 10)))
print(consec3(input_list))
print(adjStrong(input_list))
print(singleString(s))
print(extract(test_list1,test_list2,sub_str))
print(segregate(test_list))
print(removeWords(test_list3, char_list))
print(replace(['G', 'F', 'G', 'I', 'S', 'B', 'E', 'S', 'T'],'*', 'G')) 