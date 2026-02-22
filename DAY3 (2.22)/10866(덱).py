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
            current.next = self.head
            self.head = current
            
        self.cnt += 1
        return data

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
        return data

    def empty(self):
        if self.head is None and self.tail is None:
            return 1
        else:
            return 0

    def pop_front(self):
        if self.empty():
            return -1
        
        current = self.head
        self.head = self.head.next
        self.cnt -= 1

        if self.head is None:
            self.tail = None

        return current.data

    def pop_back(self): 
        if self.empty():
            return -1
        
        current = self.tail
        self.tail = self.tail.prev
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

a = Deque()
repeat = int(input())

for _ in range(0, repeat):
    action = input()
    parts = action.split()

    if (parts[0] == "push_front"):
        a.push_front(int(parts[1]))
        
    elif (parts[0] == "push_back"):
        a.push_back(int(parts[1]))
            
    elif (parts[0] == "pop_front"):
        print(a.pop_front())
    
    elif (parts[0] == "pop_back"):
        print(a.pop_back())

    elif (parts[0] == "size"):
        print(a.size())
    
    elif (parts[0] == "empty"):
        print(a.empty())

    elif (parts[0] == "front"):
        print(a.front())
    
    elif (parts[0] == "back"):
        print(a.back())


