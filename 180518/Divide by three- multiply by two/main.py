def dfs(cur, st, buf):
    if not st:
        return True

    if cur % 3 == 0 and cur / 3 in st:
        next = cur / 3
        st.remove(next)
        buf.append(next)
        if dfs(next, st, buf):
            return True
        st.add(next)
        buf.pop()

    if cur * 2 in st:
        next = cur * 2
        st.remove(next)
        buf.append(next)
        if dfs(next, st, buf):
            return True
        st.add(next)
        buf.pop()

    return False


if __name__ == '__main__':
    n = int(raw_input())
    ns = map(int, raw_input().split())

    for i in xrange(n):
        cur = ns[i]
        st = set(ns)
        st.remove(cur)

        buf = [cur]
        if dfs(cur, st, buf):
            print ' '.join(map(str, buf))
