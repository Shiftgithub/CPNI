mov a,#25h  // declaring a number a
mov b,#12h  // declaring a number b

add a,b     // adding a and b
mov 40h,a   // moving result a to 40 memory location

mov a,#25h  //reset the value of a 

subb a,b    // subtracting b from a
mov 41h,a   // moving result a to 41 memory location

mov a,#25h  // reset the value of a

mul ab      // multiplication of a and b
mov 42h,a    //moving result a to 42 memory location 
mov 43h,b    //moving result b to 43 memory location

mov a,#25h    //reset the value of a
mov b,#12h   //reset the value of b

div ab      // a is being divided by b
mov 44h,a     // quotient moved to 44h memory location
mov 45,b      //reminder moved to 45h memory location

mov a,#25h    //reset the value of a
mov b,#12h   //reset the value of b

inc a   // increment of a

dec a   // decrement of a

end