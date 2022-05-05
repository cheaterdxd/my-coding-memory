# import time
# def countdown(t):
#     while(t>0):
#         print t
#         t -=1
#         time.sleep(1)

# countdown(60)
import time 
startTime = time.time()
while True:
    count = time.time()-startTime
    print time.strftime("%H:%M:%S",time.gmtime(count))
    time.sleep(1)
