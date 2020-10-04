"""
Writing Bot
A bot is reading from one book at "rs" lines/sec and writing at "ws" lines/sec 
from one book of "N1" pages and "l1" lines
to another book of N2 pages and l2 lines
Output the action taking place by Bot
and at which Page and line at time "time" 
"""

N1 = int(input())
l1 = int(input())
N2 = int(input())
l2 = int(input())
rs = int(input())
ws = int(input())
time = int(input())
onLine = -1
onPage = -1
action = ""
#data to be transfer
data = N1*l1
readtime = data/rs

#bot reading
if(readtime > time):
    action = "READ"
    dataread = time*rs
    onLine = int(dataread%l1)
    onPage =int(dataread//l1)

#bot writing
else:
    action = "WRITE"
    time-=readtime
    datawritten = time*ws
    onLine = int(datawritten%l2)
    onPage = int(datawritten//l2)

print(action,onPage,onLine)