# 07/03/20
# https://dmoj.ca/problem/nccc6j2
a = "pusheen"
b = input()
ans = 0
for i in range(len(a)):
    if (a[i]!=b[i]): ans+=1
print(ans)