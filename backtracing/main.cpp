1) Given a 2D Array . We are given the top left corner (0,0) and we need to traverse to (2,2) of a 3x3 matrix. Only 2 movements are allowed Right or Down. Find all 
  possible ways to go from (0,0) -> (2,2) . When take a right step print H , when take a down turn print V . 
  Eg HVHV is a path from (0,0) -> (2,2) 
  similarly print all paths
  
  my intuition : we need some way to know from where we are coming from so that we are not struck inside ifinite loop. and mark them. 
                  then we need to visit the unmarked ones, 
                  sumultaneously we need to keep a check that we do not overflow from our position
                  success if we reach the end point (2,2) print the total string 
                  we also need to know th current position hence x and y variables
                  
 void allthepaths(int arr[][],int x,int y){
  //success condition
  if(x==2 && y==2) { 
    cout<<string<<endl;
    }
   //overflow condition 
  if(x>2 || y>2 || x<0 || y<0) {
     
    return;
    }
    
 
 
 }
 
 
 
 int main(){
 int arr[3][3] = {0};
 string s;
 cout<< allthepaths(arr,0,0,s);
 
 
 
 
 }
