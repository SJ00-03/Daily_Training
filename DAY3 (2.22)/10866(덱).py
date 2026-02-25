class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.prev = None

class Deque:
    def __init__(self):
        self.head = None
        self.tail = None
        self.cnt = 0

    def push_front(self, data):
        new_node = Node(data)

        if (self.head is None and self.tail is None):
            self.head = self.tail = new_node
        
        else:
            current = new_node
            self.head.prev = new_node
            current.next = self.head
            current.prev = None
            self.head = current
            
        self.cnt += 1
        

    def push_back(self, data):
        new_node = Node(data)

        if (self.head is None and self.tail is None):
            self.head = self.tail = new_node
        
        else:
            current = new_node
            current.prev = self.tail
            self.tail.next = current
            self.tail = current
        self.cnt += 1
        

    def empty(self):
        if self.head is None and self.tail is None:
            return 1
        else:
            return 0

    def pop_front(self):
        if self.empty():
            return -1
        
        if self.cnt == 1:
            current = self.head
            self.head = None
            self.tail = None
            self.cnt -= 1
            return current.data

        current = self.head
        self.head = self.head.next
        self.head.prev = None
        self.cnt -= 1

        if self.head is None:
            self.tail = None

        return current.data

    def pop_back(self): 
        if self.empty():
            return -1
        
        if self.cnt == 1:
            current = self.tail
            self.head = None
            self.tail = None
            self.cnt -= 1
            return current.data
        
        current = self.tail
        self.tail = self.tail.prev
        self.tail.next = None
        self.cnt -= 1

        if self.tail is None:
            self.head = None
            
        return current.data

    def size(self): 
        return self.cnt
    
    def front(self):
        return -1 if self.head is None else self.head.data
    
    def back(self):
        return -1 if self.tail is None else self.tail.data

import sys
input = sys.stdin.readline

dq = Deque()
n = int(input())

out = []
for _ in range(n):
    parts = input().split()
    cmd = parts[0]

    if cmd == "push_front":
        dq.push_front(int(parts[1]))
    elif cmd == "push_back":
        dq.push_back(int(parts[1]))
    elif cmd == "pop_front":
        out.append(str(dq.pop_front()))
    elif cmd == "pop_back":
        out.append(str(dq.pop_back()))
    elif cmd == "size":
        out.append(str(dq.size()))
    elif cmd == "empty":
        out.append(str(dq.empty()))
    elif cmd == "front":
        out.append(str(dq.front()))
    elif cmd == "back":
        out.append(str(dq.back()))

sys.stdout.write("\n".join(out))


