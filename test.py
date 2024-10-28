from collections import deque


def print_bfs(top):

    dist = [-1] * 1000

    q = deque()

    q.append(top)
    dist[top] = 0

    while q:
        v = q.popleft()
        print(v, end=", ")

        for var in [v.left, v.right]:
            if dist[var] != -1:
                continue

            q.append(var)
            dist[var] = dist[v] + 1
