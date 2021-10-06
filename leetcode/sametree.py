class Solution(object):
    def isSameTree(self, p, q):
      def levelOrder(root): 
          q1=deque([root])
          temp=[]
          while(q1):
                for i in range(len(q1)):
                        node=q1.popleft()  
                        temp.append(node.val)
                        if node.left:
                                q1.append(node.left)  
                        else:
                              temp.append(0)  
                        if node.right:
                                q1.append(node.right)
                        else:
                                temp.append(1)
          return temp
      if not(p) and not(q):
                return True
      elif not(p) or not(q):
            return False
      else:
        return levelOrder(p)==levelOrder(q)
