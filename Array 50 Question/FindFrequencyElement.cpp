
#https://practice.geeksforgeeks.org/problems/find-the-frequency/1


int findFrequency(vector<int> v, int x){

    // Your code here
    int count=0;
    int n= v.size();
    for(int i=0; i<n;i++)
    {
      if(v[i]==x){
          count++;
      }   
    }
    return count;
}
