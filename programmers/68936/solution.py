def quad_tree(arr):
    zeros = 0
    ones = 0
    
    s = 0
    for i in arr:
        s += sum(i)

    if s == 0:
        return [1, 0]

    if s == len(arr[0]) ** 2:
        return [0, 1]

    l = int(len(arr[0]) / 2)
    
    a = []
    b = []
    c = []
    d = []
    for j in range(len(arr[0])):
        if j < l:
            a.append(arr[j][:l])
            b.append(arr[j][l:])
        else:
            c.append(arr[j][:l])
            d.append(arr[j][l:])

    z, o = [i for i in quad_tree(a)]
    zeros += z
    ones += o
    
    z, o = [i for i in quad_tree(b)]
    zeros += z
    ones += o
    
    z, o = [i for i in quad_tree(c)]
    zeros += z
    ones += o

    z, o = [i for i in quad_tree(d)]
    zeros += z
    ones += o
    
    return [zeros, ones]
    
def solution(arr):
    answer = quad_tree(arr)
    return answer

# [1, 0]
print(solution([[0]]))
# [4, 9]
print(solution([[1,1,0,0],[1,0,0,0],[1,0,0,1],[1,1,1,1]]))
# [10, 15]
print(solution([[1,1,1,1,1,1,1,1],[0,1,1,1,1,1,1,1],[0,0,0,0,1,1,1,1],[0,1,0,0,1,1,1,1],[0,0,0,0,0,0,1,1],[0,0,0,0,0,0,0,1],[0,0,0,0,1,0,0,1],[0,0,0,0,1,1,1,1]]))
