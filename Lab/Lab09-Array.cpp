/*
    จงเขียนโปรแกรมรับค่าจากผู้ใช้เข้าไปใส่ในอาเรย์และแสดงผลลัพธ์ออกมาทั้งหมดที่เป็นจำนวนเฉพาะเท่านั้น (ค่าที่ไม่ใช่จำนวนเฉพาะแสดงเครื่องหมาย # แทน)

    Test case:
        Enter N :
            6
        Enter value[0] :
            19
        Enter value[1] :
            18
        Enter value[2] :
            27
        Enter value[3] :
            15
        Enter value[4] :
            4
        Enter value[5] :
            2
    Output:
        Index:  0  1  2  3  4  5
        Array:  # 19  #  #  #  2
*/

#include <stdio.h>

int main() 
{
    int input = 0 ;
    printf( "Enter N: \n" ) ;
    scanf( "%d", &input ) ;

    int arry[ input ] ;
    for (int i = 0 ; i < input ; i++ ) 
        {
            printf( "Enter value[%d]\n", i ) ;
            scanf( "%d", &arry[ i ] ) ;
        } //end for

        printf( "index: " ) ;
        for ( int i = 0 ; i < input ; i++ ) 
        {
            printf( "%d ", i ) ;
        } //end for
        
        printf( "\n" ) ;
        printf( "Arry: " ) ; 
        for ( int i = 0 ; i < input ; i++ ) 
        {
            if ( arry[ i ] == 2 || arry[ i ] == 3 || arry[ i ] == 5 || arry[ i ] == 7 || arry[ i ] == 11 || arry[ i ] == 13 ) 
            {
                printf( "%d ", arry[ i ] ) ;   
            } //end if
            else if ( arry[ i ] % 2 != 0 && arry[ i ] % 3 != 0 && arry[ i ] % 5 != 0 && arry[ i ] % 7 != 0 && arry[ i ] % 11 != 0 
            && arry[ i ] % 13 != 0 && arry[ i ] % 17 != 0 && arry[ i ] % 19 != 0 && arry[ i ] % 23 != 0 && arry[ i ] % 29 != 0 
            && arry[ i ] % 31 != 0 && arry[ i ] % 37 != 0 && arry[ i ] % 41 != 0 && arry[ i ] % 43 != 0&& arry[ i ] % 47 != 0 
            && arry[ i ] % 53 != 0 && arry[ i ] % 59 != 0 && arry[ i ] % 61 != 0 && arry[ i ] % 71 != 0 && arry[ i ] % 73 != 0 
            && arry[ i ] % 79 != 0 && arry[ i ] % 83 != 0 && arry[ i ] % 89 != 0 && arry[ i ] % 97 != 0)
            {
                printf( "%d ", arry[ i ] ) ;
            } // end else if 
            else 
            {
                printf( "# " ) ;
            } //end else 
        } //end for
    return 0 ;
}//end main function