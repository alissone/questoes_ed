n = list(map(int, input("").split()))
r = 'D' if n==sorted(n, reverse=True) else 'N'
print('C' if n == sorted(n) else r)