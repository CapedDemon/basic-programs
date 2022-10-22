s=input()
n=len(s)
a=0
for i in range(n):
    if s[i]=='a':
        a+=1
    else:
        continue
if a>(n//2):
    print(n)
else:
    print((2*a)-1)
            
    
    
