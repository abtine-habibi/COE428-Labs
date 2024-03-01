void mySort(int data[], unsigned int n)
{
   int temp;  
   
   for (int i =0; i < n - 1; i++){ 

       for (int j = i+1; j < n; j++){ 
         if(data[i] > data[j]){ 
            temp = data[j]; 
            data[j] = data[i]; 
	         data[i] = temp; 
         } 
      } 
   } 
}
