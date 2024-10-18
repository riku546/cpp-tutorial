from collections import deque


attraction = deque()
next_pool = deque()
goal = deque()

num_of_visitors = 3
a = "A"
b = "B"
c = "C"

next_pool.append(a)
next_pool.append(b)
next_pool.append(c)

def next_action(visitor):
  print(visitor , "さんがアトラクションに並びました。")
  attraction.append(visitor)
  
for t in range(100):
  print("t =" , t)
  
  if len(attraction) > 0:
    v = attraction.popleft()
    print(v , "さんがアトラクションを回り終えました。")
    goal.append(v)
    
  
  while len(next_pool) > 0:
    v = next_pool.popleft()
    next_action(v)
    
  print("")
  if len(goal) >= num_of_visitors:
    print("終了時刻", t)
    break