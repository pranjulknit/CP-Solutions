t = int(input())
 
while t:
    n = int(input())
    l = list(map(int,input().split()))
    if(sum(l) % n ==0):
        check = sum(l)//n
        k=0
        for i in range(n):
            if check < l[i]:
                k+=1
        print(k,end="\n")
    else:
        print("-1")
 
    t-=1