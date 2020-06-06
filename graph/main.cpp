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

   TIME COMPLEXITIES :
If we have a graph with (n) vertices , then the minimum number of edges is = 0(dont connect any vertex), minimum number of edges
in a connected graph =(n-1)(it is basically a tree O(N) ), and the maximum number of edges is =nC2 =  (n-1)*n/2 ( O(N^2) ) ( it is basically called 
a complete graph , every vertex has an edge with every other edge)
    minimum no. of connected graph = O(N) ( N is complexity in terms of number of vertices ) 
    max .. ......                   = O (N^2)
    
   
   
   IMPLEMENTATION WAYS:
  1) Edge list : An array of vertices. An array of edges contatining a pair of edges suggesting an edge.
      no a very good way of implemeting graphs because for every quesry of type : check if there is an edge between A and B ,
      we need to go through the list everytime for the same, this is a very common query. This list is worst case O(N^2)
  2) Adjacency list :  we have an array containing all the vertices. Each of the vertices in the above array will  have 
     their own list of vertices the have a direct edge to. Just like an 2D Matrix
     so if we have vertices list -> (A - B - C - D) so for the quesry - check if there is vertice bw A and C 
                                     |               so we would have to do at worse O(N) time to asnwer
                                     c               it can be better if we use hash map
                                     |
                                     D
   3) Adjacency matrix( preferredd ) : If n vertices. Create a 2D matrix of n x n and each cell [i,j] indices whether 
    there is an edge bw i,j and j,i , eg if vertices 4 and 5 have an edge. check mat[4][5] , is it 0 or 1 . 
     Very fast and easy to implement
     it takes alot of space . O(N^2) definitely
     in case of few edges ( sparse graph) the matrix will be filled with alot of false. space waste
     because of ease of implementation we use giving a test and CP and use adjacency matrix.
     
     IMPLEMENTATION 
     
  ADJACENY MATRIX - DFS
   
   Take input from user and prnt out the graph
   -ask how many vertices - (n)-- ( 0,....n-1)
   - how many edges - E - run a for loop for E edges input ( each inpit will be of pair Vertex 1 --> Vectex 2)
   - in our 2d array of edjacency matrix keep marking 1 for a vertex 1 to vertex 2 mark mar[1][2] = mar[2][1] = 1;
   our edges are bidirectional
   how to print ur graph - just print out all the verte 
   our vertices here will have numberers like 1 , 2 ,3 
    create 2d array dynamically 
    
  input : our vertices are names 0 ,1 ,2, 3, 4;
 edge : 1 2  represents that there is an edge between 1 and 2
  n ; number of vertiecs if we put 4 it means the vertices are names as 0 ,1 ,2, 3
   
  complete input to run the bwlow program:
 4   //number of vertices -> 0,1,2,3
 3   // number of edges
 0 2 // edge from 0 to 2
 2 1 // edge from 2 to 1
 1 3 // edge from 1 to 3
 
  output in dfs
  0
  2
  1
  3
  


#include<bits/stdc++.h>
using namespace std;
void print ( int** mat, int* visited, int n, int start){
   cout<<start<<endl; // print the starting vertex
   visited[start]=1;  //since we have printed the vertex we need to mark it as visited and not visit it again in recursion

   for(int i=0;i<n;i++){  // for every vertex we visit we need to check every other vertex if there is an edge between them
        if(i==start){   // this is a self loop condition that if an edge is pointing to itself do nothing
         continue;
        }
        if(mat[start][i] ==1){ // from the present vertex check for ecery other vertex if there is an edge 
        if(visited[i]){ //if there is and edge and if it is already visited skip it 
        continue;
        }
         print(mat,visited,n,i);  // if there is an edge and it is ne=ot visited before call the printing function;
        }
   }
}

int main(){
 int n; //number of vertices
 int e; // number of edges
 cin>>n>>e; //input the verties and edges
 int ** mat = new int*[n]; //initialize 2D array with an array holding pointers of another attay
 for(int i=0;i<n;i++){
     mat[i]=new int[n]; //for every element in the above defined array create a new array of sixe n
     for(int j=0;j<n;j++){ // initialize the array with 0 representing that there are no edges initially
        mat[i][j] = 0;
      }
 }
 for(int i = 0; i<e; i++){
      int f; // here we are taking input of edges pointing from f -> e   input is of the form 1 2 ;
      int e;
      cin>>f>>e;
      mat[f][e]=1; // since our graph is bi directional hence we need to mark f->e and e->f both as 1
      mat[e][f]=1;
 }

  
//we also need an visited array to keep a check visited vertices and not to visit them again
 int *visited = new int[n]; // n is the number of vertices
 for(int i = 0 ; i<n ; i++){
      visited[i] = 0;
 }

 //then we call the print function which basically prints out vertices in DFS order , we need to give and starting vertex
 
 print(mat, visited , n , 0); 
}
    
https://www.geeksforgeeks.org/graph-and-its-representations/
adjacency matrix pros :
   easier to implement
   removing an edge takes O(1)
   Queries like whether there is an edge from vertex ‘u’ to vertex ‘v’ are efficient and can be done O(1)
    
    cons:
    consumes O(V^2) space
    adding a vertex is O(V^2) time
    
    
  adjcency list representation
  we create an array of pointers just like above in 2d matrix re[resentation of adjacency matrix , but instead of adding
  array of size n , we use dynamic vectors to represent vertices frmo a -> b
  so its like
  0-> 1,2,3
  1->0,3,4
  2->0
  3->0,1
  4->1                                                                 
