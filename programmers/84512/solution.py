def solution(word):
    answer = 1

    l = ['A', 'E', 'I', 'O', 'U']
    gen = ['A']
        
    while word != ''.join(gen):
        if len(gen) != 5:
            gen.append('A')
        elif gen[-1] != 'U':
            u = l[l.index(gen[-1]) + 1]
            gen.pop()
            gen.append(u)
        else:
            gen.pop()
            while gen[-1] == 'U':
                gen.pop()
            u = l[l.index(gen[-1]) + 1]
            gen.pop()
            gen.append(u)
        answer += 1

    return answer

print(solution("I")) # 1563
print(solution("EIO")) # 1189
