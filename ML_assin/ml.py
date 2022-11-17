d={'a':'1','b':'2','k':'2','c':'3','j':'1'}
j={}
for i in d.keys():
    print(d[i])
    if d[i] in j.keys() and  d[i] in d.values():
        j[d[i]]=j[d[i]]+1
    else:
        j[d[i]]=1
print(j)

