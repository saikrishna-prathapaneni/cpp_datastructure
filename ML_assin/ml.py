f= open("chr21_genes_categories.txt",'r')
lines= f.readlines()
dic={}
for line in lines:
    l=line.split('\n')
    if len(l)==2:
        l=l[:1][0]
    else:
        l=l[0]
    
    try:  
        float(l[:3])
        dic[float(l[:3])]= l[6:]
    except:
       
        dic[list(dic.keys())[-1:][0]]= dic[list(dic.keys())[-1:][0]]+" "+l[6:]
print(dic)    
        
        
        
         
    

