>Dynamic programming is just like recursion but we keep storing the results so that if a fuction is called twice then the
time it doesnt have to be calculated again and the old results answer can be used again
>TWO TYPES OF DP : 
            top down : it means that the function F(n) is being reduced somehow to a smaller problem eg F(n-1) , we are traversing
            from top of the function to the bottom and storing the results in between in a matrix usually of 2D.
            bottom up : we fill out matrix( which represents solved subproblems) from base case(bottom )  till F(n) (top) .
            
>HOW TO RECOGNIZE A DP PROBLEM
  1)CHOICE : Just like in backtracking we have choices available whether to pickup an element/object or not to form a part of }
            solution.
  2)OPTIMISATION : Maximum / Minimum words would be used usually. 

  3)DIRECTED ACYCYIC GRAPH like properties. It basically means the a fucntion F(n) would be broken down in a smaller problem
    eg F(n-1) or F(n/2) . or into multiple parts just like fibonachi functions into multiple smaller functions.
    But it cannot take such form F(n) = F(n-1) + F(n+1) , one of the functions size increased instead of getting smaller.

      f(n) = f(n-1) + f(n+1    --- > f(n-1)= f(n-2) + f(n) -- > somehow we get this f(n) = f(n-1) + f(n-2) ( our original function
          ^                                                                                 | 
          |_________________________________________________________________________________|
          should not form like this , hence should be directed acyclic graph breaking inti sub problems only
   
  > Its also important to see and observe that optimal solutions to subproblems are required in order to solve the proglem optimally
  >TEMPLATE FOR DP questions
            1)in the function defiintion its important to include the changing entities for example in the case of solving problems of
            string type questions the changing entities are its length
            2) need to see the return type
            3)see carefully whats the base case
              
        string ABCDE 
        substrings A,B,C,D,E,AB,BC,CD,DE,ABC,BCD,CDE,ABCD,BCDE,ABCDE ( BASIALLY CONTINUOUS STRINGS)
        subsequences A,B,C,D,E,AB,AV,AD,AE,BC,BD,BE,CD,CE,DE,ABC,ABD,ABE....(NEED NOT TO BE CONTINUOUS)
   
              
  >LONGEST COMMON SUBSEQUENCE
                      
     
   

