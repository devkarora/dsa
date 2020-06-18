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
              
 types of  strings :  ABCDE 
 substrings A,B,C,D,E,AB,BC,CD,DE,ABC,BCD,CDE,ABCD,BCDE,ABCDE ( BASIALLY CONTINUOUS STRINGS)
 subsequences A,B,C,D,E,AB,AV,AD,AE,BC,BD,BE,CD,CE,DE,ABC,ABD,ABE....(NEED NOT TO BE CONTINUOUS)
 supersequence: shortest string that has both str1 and str2 as subsequences. str1 = "AGGTAB",  str2 = "GXTXAYB" answer = "AGXGTXAYB"
   
              
  >LONGEST COMMON SUBSEQUENCE
     1)length of LCS
     2)print lcs string/s
     
    to answer both we need int type of function because the function will return the 1) length answer and we can get the string/s 
    from the matrix
    m=length of string s1
    n=length of string s2
    
 >   int LCS(string s1, string s2,int m,int n){
    base case will be when 1)string length s1=0 and s2!=0 , then return NULL ( no lcs) 
    2)string length s1!=0 and s2=0 , return NULL
    3)both the strings lenth s1=s2=0; return NULL
    
    (if len.s1=0 || len s2=0) return NULL;
    
 >   since it is a top down approach we will compare the characters and the strings at the end of both of the strings i.e at
     positions s1[m-1] and s[n-1] , case 1)if they are equal then add +1 to the count and check the remaining s1[m-2] , s2[n-2]
    recursively ie LCS(s1,s2, m-1, n-1)
    case 2) they are unqual the return the maximum of a) (s1,s2,m-1,n) b) (s1,s2,m,n-1) becasue there is a possibility the the last
    character of s1 can match with second last of s2 or last of s2 can match with second last of s1.
    we will recursively solve
    
 >  matrix will store base case at matrix[0][0...m] and matrix[0...n][0] so to store the results we need to ,ake a matrix of size
    MATRIX[M+1][N+1]
     
       
      0 e k e l s
    0 (B A S E C A S E)  <- this whole row solution is the answer from our base cases ( in case string 2 is NULL )
    k B
    e A
    s S
      E
      ^ this whole column is the answer from our base case ( in case string 1 = NULL )     
                
    
>    here the first zero in here represents the possibility of strings to be NULL
    hence the actul answer to our subproblems are stored from [1,1] till [m+1,n+1] and the answer to our dp problem is at
    matrix[m+1][n+1]
    
     
>    when we are at matrix[1][1] we are basically checking string at postion 1 of string 1 and string 2 ie frist characters 
    of both

> initialize our DP by memset to 0 here for LCS 

https://www.geeksforgeeks.org/longest-common-subsequence-dp-using-memoization/

#include <bits/stdc++.h> 
using namespace std; 
  
int max(int a, int b);  
/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n,int **matrix )  
{   if (m == 0 || n == 0)
       
        return 0;
    if(matrix[m][n]!=0) return matrix[m][n];
      
    if (X[m-1] == Y[n-1])  {
        matrix[m][n]=1 + lcs(X, Y, m-1, n-1,matrix);
        return matrix[m][n];}  
    else{
        matrix[m][n]=max(lcs(X, Y, m, n-1,matrix), lcs(X, Y, m-1, n,matrix));
        return matrix[m][n];}  
}  
  
/* Utility function to get max of 2 integers */
int max(int a, int b)  
{  
    return (a > b)? a : b;  
}  
  
/* Driver code */
int main()  
{  
    char X[] = "AGGTAB";  
    char Y[] = "GXTXAYB";  
      
    int m = strlen(X);  
    int n = strlen(Y);  
    int ** matrix= new int*[m+1];
    for(int i=0;i<n;i++){
        matrix[i]=new int[n+1];
    } // m+1 rows x n+1 columns
    memset(matrix,0,sizeof(matrix));
    cout<<"Length of LCS is "<< lcs( X, Y, m, n,matrix ) ;  
      
    return 0;  
}  

notice that the size of dp is m+1 and n+1 and its relative positioning in the matrix.


USING LCS WE CAN SOLVE 13 FURTHER SIMILAR QUESTIONS.

LONGEST COMMON SUBSEQUENCE

1) Longest common subsequence
2)Printing LCS
3) Shortest common supersequence
4) print SCS
5)Minimum number of insertions/deletions to comvert from string A -> B
6)Largest repeating subsequence
7)length of largest subsequence of string A which is a substring of string B
8)Subsequence Pattern matching
9)Count how many time A string appears in string B
10)Largest palindromic subsequence
11)largest palindrmic subsequence
12)Count of palindrominc substring
14)Minimum number of deletions in a string to make it a palindrome
15)Minimum number of insertions in a string to make it a palindrome


1) Solved
2)theoretically solved using the matrix
3) lenght.str1 + length.str2 - LCS(str1.str2)
4)
5)
