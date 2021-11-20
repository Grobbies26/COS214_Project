#ifndef FALCON_NINE_CPP
#define FALCON_NINE_CPP

#include "Falcon9.h"

Falcon9::Falcon9() : Rocket( "Falcon9" ){
    this->core = new Falcon9Core();

    this->core->startEngine();
    
    MerlinEngine* eng = new MerlinEngine();

    this->engines = new MerlinEngine*[9];
    
    for ( int i = 0; i < 9; i++ ) {
        this->engines[ i ] = new MerlinEngine(*eng);
        this->engines[ i ]->startEngine();
    }

    delete eng;
}

Falcon9::~Falcon9(){
    for ( int i = 0; i < 9; i++ ) {
        if ( this->engines[ i ] ) delete this->engines[ i ];
    }

    delete [] this->engines;
    delete this->core;


    this->engines = 0x0; 
    this->core = 0x0;
}

Falcon9Core* Falcon9::getCore(){
    return this->core;
}

MerlinEngine* Falcon9::getEngine( int index ){
    return ( index > -1 && index < 3 ) ? this->engines[ index ] : 0x0;
}

bool Falcon9::coreSystemCheck(){
    return this->core->isActive();
} 

bool Falcon9::engineSystemCheck(){
    for ( int i = 0; i < 9; i++ ) 
        if ( !this->engines[ i ]->isActive() ) return false;

    return true;
} 

void Falcon9::handleRequest(Rocket* pRocket){
    if( pRocket->getPayloadType() == "Falcon9" ){
        cout << "Falcon9 initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by Falcon9."<<endl;
        Rocket::handleRequest( pRocket );
    }
}

#endif