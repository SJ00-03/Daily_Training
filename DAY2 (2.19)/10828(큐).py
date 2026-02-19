class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        self.cnt = 0

class Queue:
    def __init__(self):
        self.head = None
        self.tail = None
        
    
    def push(self, data):
        new_node = Node(data)

        if self.head is None:
            self.head = self.tail = new_node
        else:
            current = new_node
            self.tail.next = current
            self.tail = current

        self.cnt += 1
            
    def empty(self):
        return self.head is None

    def pop(self):
        if self.empty() is None:
            self.cnt = 0
            return -1
        current = self.head
        self.head = current.next
        self.cnt -= 1
        return current.data

    def size(self):
        return self.cnt

    def front(self):
        return -1 if self.empty() else self.head.data

    def back(self):
        return -1 if self.empty() else self.tail.data



