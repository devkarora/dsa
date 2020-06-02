https://www.topcoder.com/community/competitive-programming/tutorials/power-up-c-with-the-standard-template-library-part-1/#containers

#include <bits/stdc++.h> 

definition : The Standard Template Library (STL) is a set of C++ template classes to provide 
common programming data structures and functions such as lists, stacks, arrays, etc. 

  1) Containers : 
>Array is a type of a container. But we need more functionalities than what is offered by an array.
s. For most containers the title of standard header matches the name of the container, and no extension is required. For example, if you are going to use stack, just add the following line at the beginning of your program:

  #include <stack>
>Container types (and algorithms, functors and all STL as well) are defined not in global namespace, but in special namespace called “std.” Add the following line after your includes and before the code begin:

using namespace std;
>Another important thing to remember is that the type of a container is the template parameter.
  vector< int > N; int is a template parameter
>When making nested constructions, make sure that the “brackets” are not directly following one another – leave a blank between them.

vector< vector< int > > CorrectDefinition;
vector<vector<int>> WrongDefinition; // Wrong: compiler may be confused by ‘operator > >’

>The simplest STL container is vector. Vector is just an array with extended functionality. By the way, vector is the only container that is backward-compatible to native C code – this means that vector actually IS the array, but with some additional features.
  vector<int> v // declares an empty vector
  vector<int> v[10] // declares v as an array of 10 vectors
  to report size of a vector we use int elements_count = v.size();
to check if a vector is empty we use bool is_empty = v.empty();

Another very popular function to use in vector is push_back. Push_back adds an element to the end of vector, increasing its size by one. 
  v.resize(25); // increases or decreases the container size
To clear a vector use clear() member function. This function makes vector to contain 0 elements. It does not make elements zeroes – watch out – it completely erases the container.
  
we can create a vector from another vector 
vector< int > v1;
// …
vector< int > v2 = v1;
vector< int > v3(v1); The initialization of v2 and v3 in the example above are exactly the same.

  
  If you want to create a vector of specific size, use the following constructor:

vector< int > Data(1000);
  
In the example above, the data will contain 1,000 zeroes after creation. Remember to use parentheses, not brackets. If you want vector to be initialized with something else, write it in such manner:

 vector< string > names(20, “Unknown”);

Multidimensional arrays are very important. The simplest way to create the two-dimensional array via vector is to create a vector of vectors.

vector< vector< int > > Matrix;

It should be clear to you now how to create the two-dimensional vector of given size:

int N, M;
// …
vector< vector< int > > Matrix(N, vector< int >(M, -1));

Here we create a matrix of size N*M and fill it with -1.
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
