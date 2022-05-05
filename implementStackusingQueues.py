class MyStack(object):
    
    """
    Stack is LIFO (last in, first out)
    """
    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.q = []
        

    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: None
        """
        self.q.append(x)
        for item in self.q:
            # reversing the order of the queue by appending elements popped from the back
            self.q.append(self.q.pop())
        

    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        return self.q.pop()

    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        return self.q[-1]
        

    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return len(self.q) == 0
