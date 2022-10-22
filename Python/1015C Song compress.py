n,m=map(int,input().split())
l=[]
s=0
p=0
for i in range(n):
    a,b=map(int,input().split())
    l.append(a-b)
    s+=a
    p+=b
l.sort()
l.reverse()
j,d = 0,-1
while s>m and n>j:
    s=s-l[j]
    j += 1
if m>=s:
    d=j
print(d)
    
