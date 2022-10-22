s=input()
t=input()
i=len(s)
j=len(t)
while s[i-1]==t[j-1] and i>0 and j>0:
    i=i-1
    j=j-1
print(i+j)
