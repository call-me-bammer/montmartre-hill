def solution(sequence, k):
    answer = []
    partial_sum = [0] * (len(sequence) + 1)
    min_len = 0
    
    for idx, i in enumerate(sequence):
        partial_sum[idx + 1] += partial_sum[idx] + i
        
    tmp = 0
    for idx, i in enumerate(partial_sum):
        if i < k: continue
        
        if answer == []:
            min_len = idx
        
        #print('range: ', idx - min_len, idx)
        for z in range(max(idx - min_len, tmp), idx):
            if i - partial_sum[z] < k:
                tmp = z
                break
            if i - partial_sum[z] > k: continue
            
            if answer == []:
                answer = [z, idx - 1]
                min_len = idx - z
                break
            
            elif idx - z < min_len:
                answer = [z, idx - 1]
                min_len = idx - z
                break                
            
            elif z < answer[0]:
                answer = [z, idx - 1]
                min_len = idx - z
                break
    
    return answer

def main():
    sequence = [1, 1, 1, 2, 3, 4, 5]
    solution(sequence, 5)

if __name__ == "__main__":
    main()

  