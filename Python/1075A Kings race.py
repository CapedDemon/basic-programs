n=int(input())
a,b=map(int,input().split())
#l is no of moves by white
#m is no of moves by black
l=max(a,b)-1
m=n-min(a,b)
if l<=m:
    print('White')
else:
    print('Black')
