# 07/03/20
# https://dmoj.ca/problem/gfssoc1j1
n = int(input())
m = int(input())
sum = 0
for i in range(m):
    x = int(input())
    if(x>=n): sum+=1
print(sum)
