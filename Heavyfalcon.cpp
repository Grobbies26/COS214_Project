#ifndef HEAVY_FALCON_CPP
#define HEAVY_FALCON_CPP

#include "Heavyfalcon.h"

HeavyFalcon::HeavyFalcon() : Rocket( "HeavyFalcon" ){
    Falcon9Core* cor = new Falcon9Core();

    this->cores = new Falcon9Core*[3];

    for ( int i = 0; i < 3; i++ ){
        this->cores[ i ] = new Falcon9Core(*cor);
        this->cores[ i ]->startEngine();
    }
    
    MerlinEngine* eng = new MerlinEngine();

    this->engines = new MerlinEngine*[27];
    
    for ( int i = 0; i < 27; i++ ) {
        this->engines[ i ] = new MerlinEngine(*eng);
        this->engines[ i ]->startEngine();
    }

    delete eng;
    delete cor;
}

HeavyFalcon::~HeavyFalcon(){
    for ( int i = 0; i < 27; i++ ) {
        if ( this->engines[ i ] ) delete this->engines[ i ];
    }

    for ( int i = 0; i < 3; i++ ) {
        if ( this->cores[ i ] ) delete this->cores[ i ];
    }

    delete [] this->engines;
    delete[] this->cores;


    this->engines = 0x0; 
    this->cores = 0x0;
}

Falcon9Core* HeavyFalcon::getCore( int index ){
    return ( index > -1 && index < 3 ) ? this->cores[ index ] : 0x0;
}

MerlinEngine* HeavyFalcon::getEngine( int index ){
    return ( index > -1 && index < 3 ) ? this->engines[ index ] : 0x0;
}

bool HeavyFalcon::coreSystemCheck(){
    for ( int i = 0; i < 3; i++ ) 
        if ( !this->cores[ i ]->isActive() ) return false;

    return true;
} 

bool HeavyFalcon::engineSystemCheck(){
    for ( int i = 0; i < 9; i++ ) 
        if ( !this->engines[ i ]->isActive() ) return false;

    return true;
} 

void HeavyFalcon::handleRequest(Rocket* pRocket){
    if( pRocket->getPayloadType() == "HeavyFalcon" ){
        cout << "HeavyFalcon initialising." << endl;
    }
    else{
        cout << "Incompatible payload. Request could not be handled by HeavyFalcon."<<endl;
        Rocket::handleRequest( pRocket );
    }
}

#endif