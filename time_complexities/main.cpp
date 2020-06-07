BUBBLE SORT : ( SORTED ARRAY FROM THE END , MAX GEOS AND SWAPS THE LAST)
  worst & average case : O(n^2) reverse sorted
  best case : O(N) already sorted
  space : O(1)
  in place : yes
  stable : yes
  https://www.geeksforgeeks.org/bubble-sort/
    
SELECTION SORT : ( ALMOST LIKE BUBBLE SORT, MIN OF REMAINING ARRAY COMES IN THE FRONT AFTER EVERY ITERATION)
  worst||average||best case : O(n^2) 
  space : O(1)
  no. of swaps in worst case : O(n)
  in place : yes
  stabel : no
 
INSERTION SORT : ( like shuffling of cards, pickup a card and place it in the right position in the sorted array from left)
  worst || average : O(N^2)  ( sorted in reverse order)
  Best case : O(N) (already sorted)
  space : O(1)
  in place : yes
  stable : yes
  Uses: Insertion sort is used when number of elements is small. 
        It can also be useful when input array is almost sorted, only few elements are misplaced in complete big array.  
  
BINARY INSERTION SORT :
  https://www.geeksforgeeks.org/binary-insertion-sort/
    in the above algorithm of insertion sort, instead of directly comparing and shifting every element, 
    find out the location where the element is to be inserted and then shift one by one just like in the above algorithm
    The algorithm as a whole still has a running worst case running time of O(n^2)
    because of the series of swaps required for each insertion
    
    
    
    
 GRAPHS : 
https://www.geeksforgeeks.org/graph-and-its-representations/
    adjacency matrix implementation :  TIME
                                        removing an edge O(1)
                                        marking an edge(1)
                                        query to check if vertex from (u) to (v) exist : O(1)
                                        Adding a vertex is O(V^2) time.
                                       SPACE
                                        O(V^2) space in all cases
    
    adjacency list implementation : TIME 
                                      adding vertex is easier
                                      query if vertex from (u) to (v) exist take O(V) time , not efficient
   
                                     SPACE : 
                                            O(|V| + |E|) , in worst case there can be vChoose2 (V^2) nuber of edges, hence worst case O(V^2)
      
      
      
      
      
      
      
      
    
