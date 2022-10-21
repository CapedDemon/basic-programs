class Node:
    def __init__(self, data = None):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.head = None
        self.last = None

    def enqueue(self, data):
        if not self.last:
            self.head = Node(data)
            self.last = self.head
        else:
            self.last.next = Node(data)
            self.last = self.last.next

    def dequeue(self):
        if not self.head:
            return None
        val = self.head.data
        self.head = self.head.next
        return val

    def display(self):
        temp = self.head
        while temp != None:
            print(temp.data)
            temp = temp.next

x = Queue()
# Creating object of queue class
# take use input if you want to enter element in queue
check=int(input("enter 1 if you want to insert element in the queue else enter any other number"))
while check==1:
    insert=int(input("enter element in queue"))
    x.enqueue(insert) # Add element to the queue
    check=int(input("enter 1 if you want to insert element in the queue else enter any other number"))

x.display() # 1 => 2
#delete element from queue
f=int(input("enter 1 if you want to delete element in the queue else enter any other number"))
while f==1:
    x.dequeue()
    f=int(input("enter 1 if you want to delete element in the queue else enter any other number"))
x.display() 
