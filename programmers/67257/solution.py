import itertools

def solution(expression):
    answer = 0
    operands = []
    operators = []
    opr = []
    
    i = 0
    for j, c in enumerate(expression):
        if ord(c) >= ord('0'):
            continue
        
        operands.append(int(expression[i:j]))
        i = j + 1
        operators.append(c)
        
        if c not in opr:
            opr.append(c)
        
    operands.append(int(expression[i:]))

    permute = itertools.permutations(opr, len(opr))
    for p in permute:
        result = abs(calc(operands[:], operators[:], list(p)))
        answer = result if result > answer else answer
    
    return answer

def calc(operands, operators, p):
    while p:
        if p[0] not in operators:
            del p[0]
            continue
        
        i = operators.index(p[0])
        if operators[i] == '+':
            operands[i] += operands[i+1]
            
        elif operators[i] == '-':
            operands[i] -= operands[i+1]
            
        elif operators[i] == '*':
            operands[i] *= operands[i+1]
        
        del operands[i+1]
        del operators[i]

    return operands[0]

# 60420
print(solution("100-200*300-500+20"))
# 300
print(solution("50*6-3*2"))
