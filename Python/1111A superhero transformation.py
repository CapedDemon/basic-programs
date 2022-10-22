
s=input()
t=input()
count=0
for i in range(len(s)):
    if len(s)==len(t):
        if s[i]=='a'=='e'=='i'=='o'=='u'==t[i]:
            count+=1
        elif s[i]!='a'!='e'!='i'!='o'!='u'!=t[i]:
            count+=1
        else:
            count==count

    if count==len(s):
        print('YES')
    else:
        print('NO')















