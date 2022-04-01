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
   
   //ElectronBranch//
   
   float Electron1_Data_PT;
   tree_signal->Branch("Electron1_Data_PT", &Electron1_Data_PT ,"Electron1_Data_PT/F");
   
   float Electron1_Data_Eta;
   tree_signal->Branch("Electron1_Data_Eta", &Electron1_Data_Eta,"Electron1_Data_Eta/F");

   //MuonsBranch//

   float Muon1_Data_Eta;
   tree_signal->Branch("Muon1_Data_Eta", &Muon1_Data_Eta,"Muon1_Data_Eta/F");
   
   float Muon1_Data_PT;
   tree_signal->Branch("Muon1_Data_PT", &Muon1_Data_PT ,"Muon1_Data_PT/F");

   //LJetBranch//

   float LJet_Data_Eta;
   tree_signal->Branch("LJet_Data_Eta", &LJet_Data_Eta,"LJet_Data_Eta/F");
   
   float LJet_Data_PT;
   tree_signal->Branch("LJet_Data_PT", &LJet_Data_PT ,"LJet_Data_PT/F");

   float LJet_Data_Mass;
   tree_signal->Branch("LJet_Data_Mass", &LJet_Data_PT ,"LJet_Data_Mass/F");

   float LJet_Data_Phi;
   tree_signal->Branch("LJet_Data_Phi", &LJet_Data_PT ,"LJet_Data_Phi/F");

   //JetBranch//

   float Jet_Data_Eta;
   tree_signal->Branch("Jet_Data_Eta", &Jet_Data_Eta,"Jet_Data_Eta/F");
   
   float Jet_Data_PT;
   tree_signal->Branch("Jet_Data_PT", &Jet_Data_PT ,"Jet_Data_PT/F");

   float Jet_Data_Mass;
   tree_signal->Branch("Jet_Data_Mass", &Jet_Data_PT ,"Jet_Data_Mass/F");

   float Jet_Data_Phi;
   tree_signal->Branch("Jet_Data_Phi", &Jet_Data_PT ,"Jet_Data_Phi/F");
   




 TH1D * inv_mass = new TH1D("inv_mass", "inv_mass", 100, 0, 2000);
 TH1D * inv_massJet = new TH1D("inv_massJet", "inv_massJet", 100, 0, 1500);
 ///TH1D * inv_massMuon = new TH1D("inv_massMuon", "inv_massMuon", 100, 0, 2000);
/// TH1D * inv_massElectron = new TH1D("inv_massElectron", "inv_massElectron", 100, 0, 2000);

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<10000;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
 if (jentry % 100 == 0){
   cout << "Processing: " << jentry/100 << " \%"<< endl;
   }

      //ForElectrons//

   ///TLorentzVector vecElectron;
  ///TLorentzVector vec_tmpElectron;
    for (int i = 0; i<2; i++) {
      Electron1_Data_PT = Electron_PT[i];
      Electron1_Data_Eta = Electron_Eta[i];
      tree_signal->Fill();
      ///vec_tmpElectron.SetPtEtaPhiM(Electron1_Data_PT, Electron1_Data_Eta); 
      ///vecElectron += vec_tmpElectron;
   }

      //ForMuons//

  /// TLorentzVector vecMuon;
  /// TLorentzVector vec_tmpMuon;
   for (int m = 0; m<2; m++) {
      Muon1_Data_PT = Muon_PT[m];
      Muon1_Data_Eta = Muon_Eta[m];
      tree_signal->Fill();
      ///vec_tmpMuon.SetPtEtaPhiM(Muon1_Data_PT, Muon1_Data_Eta); 
     /// vecMuon += vec_tmpMuon;
   }
      //ForLJets//

   TLorentzVector vec;
   TLorentzVector vec_tmp;
   for (int l = 0; l<6; l++) {
      LJet_Data_PT = LJet_PT[l];
      LJet_Data_Eta = LJet_Eta[l];
      LJet_Data_Mass = LJet_Mass[l];
      LJet_Data_Phi = LJet_Phi[l];
      tree_signal->Fill();
      vec_tmp.SetPtEtaPhiM(LJet_Data_PT, LJet_Data_Eta, LJet_Data_Mass, LJet_Data_Phi); 
      vec += vec_tmp;
   }
      //ForJets//

   TLorentzVector vecJet;
   TLorentzVector vec_tmpJet;
   for (int j = 0; j<6; j++) {
      Jet_Data_PT = Jet_PT[j];
      Jet_Data_Eta = Jet_Eta[j];
      Jet_Data_Mass = Jet_Mass[j];
      Jet_Data_Phi = Jet_Phi[j];
      tree_signal->Fill();
      vec_tmpJet.SetPtEtaPhiM(Jet_Data_PT, Jet_Data_Eta, Jet_Data_Mass, Jet_Data_Phi); 
      vecJet += vec_tmpJet;
   }

   inv_mass->Fill(vec.M()); 
   inv_massJet->Fill(vecJet.M());
  /// inv_massMuon->Fill(vecMuon.M()); 
  /// inv_massElectron->Fill(vecElectron.M()); 
   
   }
tree_signal->Write();
OutFile->Write();
inv_mass->Draw("hist e1");
inv_massJet->Draw("hist e2");
///inv_massMuon->Draw("hist e3");
///inv_massElectron->Draw("hist e4");
}
