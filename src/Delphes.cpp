#define Delphes_cxx
#include "Delphes.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TLorentzVector.h"
#include "TROOT.h"
#include "TString.h"
#include "TEfficiency.h"
#include "math.h"
#include <iostream>
#include <vector>
using namespace std;


class MyTLorentzVector : public TLorentzVector{
   public:
   // MyTLorentzVector(double x, double y, double z, double t){
   //    this->SetXYZT(x, y, z, t);
   // };
   // ~MyTLorentzVector(){};
   Bool_t m_IsBTagged;
   void Vypis2(){
      cout <<"IsBTagged" << m_IsBTagged <<endl;
      cout <<"Hmota" << this->M() <<endl;
   }

};


class Event{
   public:
   Event(){};
   ~Event(){};
   MyTLorentzVector Electron1;
   MyTLorentzVector Electron2;
   MyTLorentzVector Muon1;
   MyTLorentzVector Muon2;
   MyTLorentzVector WHadron;
   MyTLorentzVector WLepton;
   MyTLorentzVector BJet1;
   MyTLorentzVector BJet2;
   MyTLorentzVector Jet3;
   MyTLorentzVector Jet4;

   bool b_Electron1;
   bool b_Electron2;
   bool b_Muon1;
   bool b_Muon2;
   bool b_WHadron;
   bool b_WLepton;
   bool b_BJet1;
   bool b_BJet2;
   bool b_Jet3;
   bool b_Jet4;
   void Vypis3(){
      cout << "energie eventu je:" << (   (Electron1+Electron2)  ).Energy() <<endl;
   }
   double EnergieEventu(){
      return (   (Electron1+Electron2)  ).Energy();
   }
};

void Delphes::Loop(TString Output, TString Tag, int NEvents)
{


   
//   In a ROOT session, you can do:
//      root> .L Delphes.C
//      root> Delphes t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch   
   if (fChain == 0) return;
   
   Long64_t nentries;

   if (NEvents > -1){ 
      nentries = NEvents;
      }
   else {
      nentries = fChain->GetEntriesFast();
   }

   

   Event *HelpEvent;
   vector<Event*> SignalEvents;
   vector<Event*> BkgEvents;

   TFile *OutFile = new TFile("outDelphes.root", "recreate");
   TDirectory *Events = OutFile->mkdir("Events");
   Events->cd();
   TTree *tree_signal = new TTree("Signal_Events","Signal_Events");
   
   float Electron1_Data_PT;
   tree_signal->Branch("Electron1_Data_PT", &Electron1_Data_PT ,"Electron1_Data_PT/F");
   
   float Electron1_Data_Eta;
   tree_signal->Branch("Electron1_Data_Eta", &Electron1_Data_Eta,"Electron1_Data_Eta/F");







   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<10000;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
 if (jentry % 100 == 0){
   cout << "Processing: " << jentry/100 << " \%"<< endl;
   }

    for (int i = 0; i<kMaxElectron; i++) {
      Electron1_Data_PT = Electron_PT[i];
      Electron1_Data_Eta = Electron_Eta[i];
      tree_signal->Fill();
   
   }

   }

tree_signal->Write();
OutFile->Write();

}
