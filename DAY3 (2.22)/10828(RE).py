class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.head = None
        self.tail = None
        self.cnt = 0

    def push(self, data):
        new_node = Node(data)

        if (self.head == None and self.tail == None):
            self.head = new_node
            self.tail = new_node
        else:
            current = new_node
            self.tail.next = current
            self.tail = current
        self.cnt += 1    
    
    def empty(self):
        return 1 if self.head == None else 0
    
    def size(self):
        return self.cnt
    
    def pop(self):
        if self.empty():
            return -1
       
        current = self.head
        self.head = self.head.next
        self.cnt -= 1

        if self.head == None:
            self.tail = None
        return current.data
        
    
    def front(self):
        return -1 if self.empty() else  self.head.data

    def back(self):
        return -1 if self.empty() else  self.tail.data