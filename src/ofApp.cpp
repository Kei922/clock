#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    ofEnableAlphaBlending();
    ofSetCircleResolution(60);
    ofSetFrameRate(1);
    radius = 60;
    radius2 = 180;
    radius3 = 432;

}

//--------------------------------------------------------------
void ofApp::update(){
    
   
    radius = 60 - ofGetSeconds();
    
    radius2 = 180  - ofGetMinutes() * 3;
    
    radius3 = 432 - ofGetHours() * 18;
    
    
    if(radius2 < 0){
        radius2 = 360;
    }
    
    if(radius2 < 0){
        radius2 = 864;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    
    
    
     
     
    
    
    
    ofFill();
        ofSetColor(0, 0, 255);
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius3);
    
    ofFill();
        ofSetColor(255, 255, 0);
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius2);
    
    ofFill();
    ofSetColor(255, 0, 0);
    ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, radius);
    
    
    
    ofNoFill();
        ofSetColor(0, 0, 0);
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 180);
        
        ofNoFill();
        ofSetColor(0, 0, 0);
        ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 60);
       
    ofNoFill();
         ofSetColor(0, 0, 0);
         ofDrawCircle(ofGetWidth()/2, ofGetHeight()/2, 432);

    
    
    
    

    
    
    
    
    
        

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
