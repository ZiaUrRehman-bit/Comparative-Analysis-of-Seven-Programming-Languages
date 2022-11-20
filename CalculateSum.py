import time
iterations = 10000000
x = 0
start = time.time()
for i in range(0, iterations):
   x = x + i
end = time.time()
print('sum: ' + str(x))
print('Time taken for ' +  str((end - start))
 + ' seconds')
