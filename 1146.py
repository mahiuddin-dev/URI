
# while(1):
#     n = int(input())
#     if n >0:
#         for i in range(1,n):
#             print(i)
#     elif n == 0:
#         break

while True:
    n = int(input())
    if(n == 0):
        break
        
    r = ""
    for i in range(1,n+1):
        r += str(i) + " "
    print(r[:-1])