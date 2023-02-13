from datetime import datetime
from functools import cmp_to_key

t = int(input())
fmt = '%d-%m-%Y %H:%M:%S'
def compare(i1,i2):
    tstamp1 = datetime.strptime(i1[0], fmt)
    tstamp2 = datetime.strptime(i2[0], fmt)
    return tstamp1>tstamp2

aplus = 0
aminus = 0
bplus = 0
bminus = 0
abplus = 0
abminus = 0
oplus = 0
ominus = 0
lst = []
for i in range(t):
    lst.append(input().split())
for j in range(len(lst)):
    lst[j][0] = lst[j][0].replace('/', '-')
    lst[j][0] = lst[j][0].replace('#', ' ')
# for j in range(len(lst)):
#     if(lst.count(lst[j][1]) == 1):
#         if(lst[j][3]=='A+'): aplus+=1
#         if(lst[j][3]=='A-'): aminus+=1
#         if(lst[j][3]=='B+'): bplus+=1
#         if(lst[j][3]=='B-'): bminus+=1
#         if(lst[j][3]=='AB+'): abplus+=1
#         if(lst[j][3]=='AB-'): abminus+=1
#         if(lst[j][3]=='O+'): oplus+=1
#         if(lst[j][3]=='O-'): ominus+=1
#     else
lst1 = [dict()]
lst.sort(key=cmp_to_key(compare))
print(lst)
for j in range(len(lst)):
    lst1.append({lst[j][1]:lst[j][3]})
for j in range(len(lst)):
    if(lst[j][3] == 'A+'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            aplus+=1

    if(lst[j][3] == 'A-'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            aminus+=1
    if(lst[j][3] == 'B+'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            bplus+=1
    if(lst[j][3] == 'B-'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            bminus+=1
    if(lst[j][3] == 'AB+'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            abplus+=1
    if(lst[j][3] == 'AB-'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            abminus+=1
    if(lst[j][3] == 'O+'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            oplus+=1
    if(lst[j][3] == 'O-'):
        if(lst1.count(lst[j][1])==0):
            lst1.append(lst[j][1])
            ominus+=1
print(aplus, aminus, bplus, bminus, abplus, abminus, oplus, ominus)
        
        
    