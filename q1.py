n=int(input(""))#input the value n
if 2<=n<=20:
    for i in range (0,n-1):
        x=n-1
        print("  ",end="")
        print("* "*x)
    for k in range(n+1,0,-1):
        txt="* "*k
        y=2*(n+1)
        print(txt.center(y," "))
        txt=""   
