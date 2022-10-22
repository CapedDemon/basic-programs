t=int(input())
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=sorted(a)
    if b[0]!=b[1]==b[2]:
        print((a.index(b[0]))+1)
    elif b[-1]!=b[-2]==b[-3]:
        print((a.index(b[-1]))+1)
        
            
        
    
