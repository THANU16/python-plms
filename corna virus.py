n=int(input(""))
x=0
data_1=[]
y=0
z=0
for i in range(0,n):
    data=input("").split(" ")
    x=len(data[0])-len(data[1])+1
    for j in range(0,x):
        data_1.append(data[0][j:(len(data[1])+j)])
    for l in data_1 :
        for k in range(0,len(data[1])):
            if l[k]==data[1][k]:
                y+=1
        if y+1>=len(data[1]):
            print(data_1.index(l),end="")
            data_1[data_1.index(l)]=" "
            z+=1
        y=0
    if z==0:
        print("No Match!")
    else:
        print()
    data_1=[]
    z=0

        
             
        
        
                      
