N=int(input())

for i in range(N):
    a,b=map(int, input().split())
    count=0
    for i in range(a,b+1):
        i=str(i)
        j=list(i)
        if '0' in j:
            for i in j:
                if i=='0':
                    count+=1
    print(count)