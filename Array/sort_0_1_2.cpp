//sort without using sorting algorith
//time complexity must be O(n) only
 void sort012(int a[], int n)
    {
        int ptr1=0;
        int ptr2=n-1;
        int i=0;
        while(i<=ptr2){
            if(a[i]==0){
                swap(a[i++],a[ptr1++]);
            }else if(a[i]==2){
                swap(a[i],a[ptr2--]);
            }
          else{
              i++;
          }
        }
        
        
    }
