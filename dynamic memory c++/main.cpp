https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/

c++ supports malloc() , calloc() from C
and (new) and (delete) operators
1) new :  If sufficient memory is available, new operator initializes the memory 
  and returns the address of the newly allocated and initialized memory to the pointer variable.
    pointer-variable = new data-type;
  pointer-variable is the pointer of type data-type. Data-type could be any built-in data type
  including array or any user defined data types including structure and class.
    
    There is a difference between declaring a normal array and allocating a block of memory using new. The most important difference is, normal arrays are deallocated by 
    compiler (If array is local, then deallocated when function returns or completes). 
    dynamically allocated arrays always remain there until either they are deallocated by programmer or program terminates
    
    
    ONE VARIABLE
    
    a) int *p = NULL; 
        p = new int; 
    b) int *p = new int;
    a and b are same ways to to request memory for a variable
    
    request + initialize : int *p = new int(5); // cout<<*p gives as 5.
                                float *r = new float(75.25); cout<<*r gives as 75.25
               delete : delete p;  
                        delete r;
                                  
        
      ARRAY / NLOCK OF MEMORY
      
      1D ARRAY 
      int *p = new int[20]; // ALLOCATES MEMORY FOR 20 CONTINUOUS INTEGERS LOCATED AT p[0]...p[19] 
      delete[] p; // frees the entire array
         
      2D ARRAY M rows x N columns
       https://www.techiedelight.com/dynamic-memory-allocation-in-c-for-2d-3d-array/
       WE CAN ALSO USE JUST POINTER ARITHMETIC USING SINGLE POINTER AS DESCRIBED IN ABOVE WEBSITE
       
      1) Create an array of size M to store pointers
          int ** A = new int*[M];
      2) Each cell of A holds a poninter of memory of size N . So it will be M rows and N columns. Dynamically allocate memory of size N for each row
        for(int i=0;i<M;i++){
        A[i] = new int[N];
        }
      ASSIGNNING VALUES FOR 2D ARRAY / SIMILARLY PRINT
      // assign values to allocated memory
        for (int i = 0; i < M; i++)
          for (int j = 0; j < N; j++)
            A[i][j] = rand() % 100;
       
      FREE MEMORY
      // deallocate memory using delete[] operator
        for (int i = 0; i < M; i++)
          delete[] A[i];

        delete[] A;     





                                  
                                  
                                  
                                  
                                  
