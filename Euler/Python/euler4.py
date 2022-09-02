def euler4(foo):
    for i in range(999,100,-1):
        for j in range(999,100,-1):
            ret=True
            foo=i*j
            bar=str(foo)
            if len(bar)%2==0:
                for c in range(int(len(bar)/2)):
                    if bar[c]!=bar[0-(c+1)]:
                        ret=False
                if ret:
                    print(i)
                    print(j)
                    return bar

foo=10
print(euler4(foo))
