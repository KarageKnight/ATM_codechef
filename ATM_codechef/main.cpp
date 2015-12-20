//
//  main.cpp
//  ATM_codechef
//
//  Created by KarnageKnight on 14/01/15.
//  Copyright (c) 2015 KKCPP. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    double amt,w;
    
    cin>>w>>amt;
    if(amt>=0 && amt<=2000 && w>0 && w<=2000){
   
    if((int)w%5==0 && w<amt && w+0.5<=amt)
    {
    
            cout<<amt-w-0.50;
        
    
    }
    else
        cout<<amt;
    }
}