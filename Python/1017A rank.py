n=int(input())
m=0
l=0
c=1
s=[]
for i in range(n):
    a,b,c,d=map(int,input().split())
    if i==0:
        a+b+c+d==m
    if i>0:
        a+b+c+d==l
        s.append(l)
    s.sort()
    for i in s:
        if s[-i-1]>m:
            c=c+1
            print(c-1)
        else:
            print(c)
    
        
    
