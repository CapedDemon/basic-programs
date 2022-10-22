t=int(input())
if t>=1 and t<=10**4:
    for i in range(t):
        n,k=map(int,input().split())
        if n%k==0:
            print(int(n/k))
        else:
            print(int(n/k)+1))
        
