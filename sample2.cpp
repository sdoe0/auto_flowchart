
 #define outputA 6
 #define outputB 7
 #define outputC 8

 int counter = 0; 
 int aState;
 int sState;
 int aLastState;
 int sLastState;

 void main() { 
   aState = outputA; 
   sState = outputC;
   if (aState != aLastState){     
     if (outputB != aState) { 
       counter ++;
     } else {
       counter --;
     }

   } 
   aLastState = aState; 
   if (sState != sLastState){     

     } 

 }