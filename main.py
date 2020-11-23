import math
print("Даньков Артем,ІС-01,27-V")
i = 10000
while i <= 1000000:
    p1 = i % 10
    p2 = i % 100
    p3 = i % 1000
    a = i
    k = 0
    while a >= 1:
        k += 1
        a = math.floor(a/10)
    if k == 5:
        d1 = i % 10
        d2 = math.floor(i/10) % 10
        d3 = math.floor(i / 100) % 10
        d4 = math.floor(i / 1000) % 10
        d5 = math.floor(i / 10000) % 10
        if d1 == d2 & d2 == d3 & d3 == d4 & d4 == d5:
            print(i)
    else:
        p21 = math.floor(i/10000)
        p22 = int((i-p21*10000-p2)/100)
        p31 = (i-p3)/1000
        if p2 == p21 & p21 == p22:
            print(i)
        elif p3 == p31:
            print(i)
    i += 1

