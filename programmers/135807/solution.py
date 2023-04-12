def gcd(a, b):
    if a < b:
        tmp = a
        a = b
        b = tmp
    
    while b != 0:
        n = a % b
        a = b
        b = n

    return a

def solution(arrayA, arrayB):
    answer = 0

    gcdA = arrayA[0]
    for i in range(1, len(arrayA)):
        gcdA = gcd(gcdA, arrayA[i])
    
    gcdB = arrayB[0]
    for i in range(1, len(arrayB)):
        gcdB = gcd(gcdB, arrayB[i])

    flagA = True
    flagB = True
    
    for i in arrayA:
        if i % gcdB == 0:
            flagB = False
            
    for i in arrayB:
        if i % gcdA == 0:
            flagA = False

    if flagA and flagB:
        answer = max(gcdA, gcdB)
    elif not flagA and not flagB:
        answer = 0
    elif not flagA:
        answer = gcdB
    elif not flagB:
        answer = gcdA
        
    return answer

print(solution([10, 17], [5, 20]))
print(solution([14, 35, 119], [18, 30, 102]))
print(solution([10, 20], [5, 17]))
