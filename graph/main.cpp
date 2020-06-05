trees dont have cycles , graphs can have cycles. ( tree is a connected graph which does not have a cycle.)
 trees are a subset of graphs
 eg social media network , road network etc
 
 TERMINOLOGIES:
  1) vertices
  2)connections are called as edges , they connect vertices
  3)adjacent vertices : direct edge between 2 vertices
  4)degree: is of a vertex : total number of edges that are going through that vertex
  5)path - the way to reach from vertex B from vertex A, where a direct edge is not there is called a path. ( the vertices 
     which are adjacent have direct edge) . Basically is a collection of edgesConnected graphs
  6)Connected graph : If for every 2 vertices there is a path between them , then its a connected graph, not necessarily direct.
  7)Connected components : When we have many graphs which are not connected. These separatergraphs are components of the whole graph. 
      A single component itself is a connected graph in itself.

If we have a graph with (n) vertices , then the minimum number of edges is = 0(dont connect any vertex), minimum number of edges
in a connected graph =(n-1)(it is basically a tree O(N) ), and the maximum number of edges is =nC2 =  (n-1)*n/2 ( O(N^2) ) ( it is basically called 
a complete graph , every vertex has an edge with every other edge)
    minimum no. of connected graph = O(N) ( N is complexity in terms of number of vertices ) 
    max .. ......                   = O (N^2)
    
    
    
    
    
    
    
    
    
    
    
