//
//  main.cpp
//  hy352_files
//
//  Created by Batzelios Thanos on 14/12/17.
//  Copyright © 2017 Batzelios Thanos. All rights reserved.
//

#include "hy352_gui.h"
#ifdef APPLE
#include <allegro5/allegro.h>
#endif
#include <stdarg.h>
#include <iostream>
#include <string>
#include <vector>

#include "LOGO.h"

START_PROGRAMM

////MAKE integer =  NUMBER:70
////    MAKE x =  NUMBER:10
////    MAKE y =  NUMBER:30
////    MAKE word = WORD: "Hello i am here!"
////    MAKE word1 = WORD: "Hello i am here here here!"
////    MAKE boolean = BOOLEAN: TRUE;
////
////    MAKE list = LIST [ WORD: "hELLO " , WORD: "WORLD"];
////    MAKE array =  ARRAY { NUMBER:20 , NUMBER:12 , NUMBER:7 , WORD:"Hello Mac" ,NUMBER:2 ,NUMBER:13 ,BOOLEAN: TRUE };
////    cout << integer <<  endl;
////    cout << word << endl;
////    cout << boolean << endl;
////    cout << list << endl;
////    cout << array << endl;
////
////
////SHOW:x;
////
////x=ITEM({1}, array);
//
//SHOW:x
//IF OR(x==integer,integer==(NUMBER:20) ,boolean == (BOOLEAN: FALSE)) DO
//
//PRINT1(x)
//ELIF x==(NUMBER:10) DO
//MAKE k = SUM (x,x,NUMBER:40,x,NUMBER:40,NUMBER:40)
//PRINT1(k);
//PRINT1(boolean)
//END
//
//IF AND (x==x,integer>=(NUMBER:30),boolean == (BOOLEAN: true))DO
//PRINT1("mphka sthn end");
//END
//ASSIGN x=SUM(x,x,NUMBER:40,x,NUMBER:40,NUMBER:40);
//
////x=word;
//PRINT("===========");
//SHOW:word1;
////;FORWARD 10;
//FORWARD ITEM({1}, array);
//FORWARD NUMBER:50;
////BACK 500;
//BACK NUMBER:300;
////CIRCLE 10;
////CIRCLE NUMBER:100;
////CENTER;
//SETPENSIZE 100;
////CIRCLE NUMBER:100;
////
////PRINT WORD:"Thanossssssssssssssssss"
//PRINT "thanossssssssssssssssss"
//

//PRINT("===========");
//
//
////cout << "=================\n";
////
////REPEAT 5 TIMES DO
////REPCOUNT;
////PRINT(REPCOUNT)
////    REPEAT 5 TIMES DO
////    REPCOUNT;
////    //PRINT(REPCOUNT);
////    cout<<REPCOUNT;
////    END
////END
////cout << "=================\n";
//
//
//
//
////cout<<w<<endl;
////cout<<re<<endl;
////int r=10;
////REPEAT WHILE x != (NUMBER:19) DO
////r++;
////PRINT(r);
////ENDs
////PRINT(r);
////x != NUMBER:19
//MAKE k = SUM (PRODUCT (x,NUMBER: 12,x),x,x,NUMBER:40,x,PRODUCT (x,NUMBER: 12,x),NUMBER:40,NUMBER:40,PRODUCT (x,NUMBER: 12,x))
//PRINT(k);
//MAKE q = DIFFERENCE (integer,NUMBER:40,x,x,x,NUMBER:40)
//PRINT(q);
//
//MAKE z = PRODUCT (x,NUMBER: 12,x)
////PRINT(z);
//
//MAKE v4 = QUOTIENT (x,NUMBER:5,x)
//PRINT(v4);
//
//
//MAKE v5 = MODULO (x,NUMBER:12,x,x,NUMBER:7,NUMBER:4)
//PRINT(v5);
////MAKE list1 = LIST [ NUMBER: 10 , NUMBER :20 , NUMBER:40]
////PRINT(list1)
////
////MAKE list2 = LIST [ LIST [  NUMBER:24  , NUMBER: 27] ,  NUMBER:30]
////PRINT(list2)
////max(1,2);
//
//
////MAKE array2 = ARRAY {
////    NUMBER:20 ,
////    WORD:"201" ,
////    LIST [
////            NUMBER:205 ,
////            LIST [
////                    WORD: "I owned you" ,
////                    NUMBER:31
////                ]
////        ] ,
////    ARRAY {
////        NUMBER:123 ,
////         NUMBER: 456 ,
////         WORD: "teleiwsa"
////         }
////    }
//MAKE v2 = MINUS (NUMBER:12)
//PRINT(v2);
//
//MAKE booloflife = SENTENCE(WORD:"Never stop believing" , WORD: " " , WORD: "TO U!!")
//PRINT(booloflife)
//
//FOREACH booloflife DO
//SHOW:ELEM
//;FOREACH array DO
//SHOW:ELEM
//;END
//END
//
//cout<<"thanos"<<endl;
//CALL maxi(LIST[LIST[NUMBER:30,NUMBER:3],NUMBER:20,NUMBER:10]);
//
//
//;cout<<"thanos"<<endl;
//


PENUP
;SETSCREENCOLOR [NUMBER:255 , NUMBER:100 , NUMBER:0]
;SETXY[NUMBER:100,  NUMBER:100];


END_PROGRAMM

