# Referenced by @faper (https://github.com/Seo-Faper)

def f(s): return s[::-1]
t = int(input())
a = [list(map(f, input().split())) for i in range(t)]
[print(*b) for b in a]

# same with "for b in a: print(*b)"

# short-coding

#def f(s): return s[::-1]
#[print(*b) for b in [list(map(f, input().split())) for i in range(int(input()))]]
