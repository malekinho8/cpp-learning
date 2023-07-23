import os
import add_impl
print(os.getpid())
result = add_impl.add([1,2,3],[4,5,6])
print(result)