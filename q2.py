n=int(input(""))
row_data=[]
column_data=[]
data_1=[]
data_2=[]
data_3=[]
data1=""
for i in range(0,n):
    data=input("")
    row_data.append(data)
for i in range(0,n):
    for j in row_data:
        data1+=str(j[i])
    column_data.append(data1)
    data1=""
for i in range (0,n):
    x=i
    for j in range(0,n-i):
        data1+=str(row_data[j][x])
        x+=1
    data_1.append(data1)
    data1=""
for i in range (1,n):
    x=0
    for j in range(i,n):
        data1+=str(row_data[j][x])
        x+=1
    data_2.append(data1)
    data1=""
for i in range (0,n):
    x=i
    for j in range(0,i):
        data1+=str(row_data[j][x])
        x-=1
    data_2.append(data1)
    data1=""
for i in range (1,n):
    x=n-1
    for j in range(i,n):
        data1+=str(row_data[j][x])
        x-=1
    data_2.append(data1)
    data1=""
words=input("").split(" ")
for i in words:
    for j in row_data:
        y=i[::-1]
        if i in j:
            for k in i:
                output=k+":"+"("+str(row_data.index(j))+","+str(j.index(k))+")"
                print(output,end=" ")
            print()
        elif y in j:
            for k in i:
                output=k+":"+"("+str(row_data.index(j))+","+str(j.index(k))+")"
                print(output,end=" ")
            print()
    for j in column_data:
        y=i[::-1]
        if i in j:
            for k in i:
                output=k+":"+"("+str(j.index(k))+","+str(column_data[j])+")"
                print(output,end=" ")
            print()
        elif y in j:
            for k in i:
                output=k+":"+"("+str(j.index(k))+","+str(column_data[j])+")"
                print(output,end=" ")
            print()
    for j in data_1:
        y=i[::-1]
        if i in j:
            for k in i:
                z=data_1.index[j]+j.index(k)
                output=k+":"+"("+str(j.index(k))+","+str(z)+")"
                print(output,end=" ")
            print()
        elif y in j:
            for k in i:
                z=data_1.index[j]+j.index(k)
                output=k+":"+"("+j.index(k)+","+str(j.index(k))+")"
                print(output,end=" ")
            print()
    for j in data_2:
        y=i[::-1]
        if i in j:
            for k in i:
                z=data_2.index[j]+j.index(k)
                output=k+":"+"("+str(z)+","+str(j.index(k))+")"
                print(output,end=" ")
            print()
        elif y in j:
            for k in i:
                z=data_2.index[j]+j.index(k)
                output=k+":"+"("+str(z)+","+str(j.index(k))+")"
                print(output,end=" ")
            print()
    
    
            

            
        
        
            
            
