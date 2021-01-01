# 07/03/20
# https://dmoj.ca/problem/ccc06j3
def value(x):
    if ('a'<=x and x<='c'): return 2
    if ('d'<=x and x<='f'): return 3
    if ('g'<=x and x<='i'): return 4
    if ('j'<=x and x<='l'): return 5
    if ('m'<=x and x<='o'): return 6
    if ('p'<=x and x<='s'): return 7
    if ('t'<=x and x<='v'): return 8
    if ('w'<=x and x<='z'): return 9

def frq(x):
    if(x=='a' or x=='d' or x=='g' or x=='j' or x=='m' or x=='p' or x=='t' or x=='w'): return 1
    if (x=='b' or x=='e' or x=='h' or x=='k' or x=='n' or x=='q' or x=='u' or x=='x'): return 2
    if (x=='c' or x=='f' or x=='i' or x=='l' or x=='o' or x=='r' or x=='v' or x=='y'): return 3
    if (x=='s' or x=='z'): return 4
    
x = input()
while(x!="halt"):
    sum = 0
    pst = -1
    cur = 0
    for i in x:
        cur = value(i)
        sum+=frq(i)
        if (cur==pst): sum+=2
        pst = cur
    print(sum)
    x = input()