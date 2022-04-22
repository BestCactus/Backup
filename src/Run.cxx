#include "Delphes.h"
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TString.h"
#include "TLorentzVector.h"
#include "TROOT.h"
#include "math.h"
#include <iostream>  
#include "TApplication.h"
#include "TTree.h"
using namespace std;

int main (int argc, char *argv[]) { 
    TString MyInput("/home/cactus/Coding/WorkCERN/rootfiles/tag_1_delphes_events.root"), MyTree("Delphes"), MyOutput("out_delphes.root");
    TString NEvents("-1");
    TApplication theApp("App",&argc, argv);
    cout << "argc je: " << argc <<endl;
    if (argc == 2){
        cout << "argv1 je: "<< argv[1] <<endl;
        NEvents = argv[1];
    }    
     else if (argc > 2) {
        cout << "funguje 2" <<endl;
        MyInput = argv[2];
        MyOutput = argv[3];
        MyTree = argv[4];
     }
    
    
    Delphes * t = new Delphes((TTree*)0, MyInput, MyTree, (TString)"test") ;
    t->Loop(MyOutput, MyTree, NEvents.Atoi());
    theApp.Run();
    return 0;
    
 }