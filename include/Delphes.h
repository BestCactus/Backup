//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Nov 11 15:07:31 2021 by ROOT version 6.24/00
// from TTree Delphes/Analysis tree
// found on file: tag_1_delphes_events.root
//////////////////////////////////////////////////////////

#ifndef Delphes_h
#define Delphes_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TLorentzVector.h"
#include "TRefArray.h"
#include "TRef.h"

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

class Delphes {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEvent = 1;
   static constexpr Int_t kMaxWeight = 6;
   static constexpr Int_t kMaxGenLJet = 14;
   static constexpr Int_t kMaxGenJet = 18;
   static constexpr Int_t kMaxGenElectron = 8;
   static constexpr Int_t kMaxGenMuon = 7;
   static constexpr Int_t kMaxGenTop = 31;
   static constexpr Int_t kMaxGenPhoton = 602;
   static constexpr Int_t kMaxGenMissingET = 1;
   static constexpr Int_t kMaxGenZPrime = 16;
   static constexpr Int_t kMaxGenW = 5;
   static constexpr Int_t kMaxGenBhadrons = 16;
   static constexpr Int_t kMaxJet = 15;
   static constexpr Int_t kMaxLJet = 13;
   static constexpr Int_t kMaxJetJES = 14;
   static constexpr Int_t kMaxLJetJES = 7;
   static constexpr Int_t kMaxElectron = 3;
   static constexpr Int_t kMaxPhoton = 3;
   static constexpr Int_t kMaxMuon = 3;
   static constexpr Int_t kMaxMissingET = 1;
   static constexpr Int_t kMaxScalarHT = 1;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[kMaxEvent];   //[Event_]
   UInt_t          Event_fBits[kMaxEvent];   //[Event_]
   Long64_t        Event_Number[kMaxEvent];   //[Event_]
   Float_t         Event_ReadTime[kMaxEvent];   //[Event_]
   Float_t         Event_ProcTime[kMaxEvent];   //[Event_]
   Int_t           Event_ProcessID[kMaxEvent];   //[Event_]
   Int_t           Event_MPI[kMaxEvent];   //[Event_]
   Float_t         Event_Weight[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSection[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSectionError[kMaxEvent];   //[Event_]
   Float_t         Event_Scale[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQED[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQCD[kMaxEvent];   //[Event_]
   Int_t           Event_ID1[kMaxEvent];   //[Event_]
   Int_t           Event_ID2[kMaxEvent];   //[Event_]
   Float_t         Event_X1[kMaxEvent];   //[Event_]
   Float_t         Event_X2[kMaxEvent];   //[Event_]
   Float_t         Event_ScalePDF[kMaxEvent];   //[Event_]
   Float_t         Event_PDF1[kMaxEvent];   //[Event_]
   Float_t         Event_PDF2[kMaxEvent];   //[Event_]
   Int_t           Event_size;
   Int_t           Weight_;
   UInt_t          Weight_fUniqueID[kMaxWeight];   //[Weight_]
   UInt_t          Weight_fBits[kMaxWeight];   //[Weight_]
   Float_t         Weight_Weight[kMaxWeight];   //[Weight_]
   Int_t           Weight_size;
   Int_t           GenLJet_;
   UInt_t          GenLJet_fUniqueID[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_fBits[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_PT[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Eta[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Phi[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_T[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Mass[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_DeltaEta[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_DeltaPhi[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_Flavor[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_FlavorAlgo[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_FlavorPhys[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_BTag[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_BTagAlgo[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_BTagPhys[kMaxGenLJet];   //[GenLJet_]
   UInt_t          GenLJet_TauTag[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_TauWeight[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_Charge[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_EhadOverEem[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NCharged[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NNeutrals[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_Beta[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_BetaStar[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_MeanSqDeltaR[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_PTD[kMaxGenLJet];   //[GenLJet_]
   Float_t         GenLJet_FracPt[kMaxGenLJet][5];   //[GenLJet_]
   Float_t         GenLJet_Tau[kMaxGenLJet][5];   //[GenLJet_]
   TLorentzVector  GenLJet_SoftDroppedJet[kMaxGenLJet];
   TLorentzVector  GenLJet_SoftDroppedSubJet1[kMaxGenLJet];
   TLorentzVector  GenLJet_SoftDroppedSubJet2[kMaxGenLJet];
   TLorentzVector  GenLJet_TrimmedP4[5][kMaxGenLJet];
   TLorentzVector  GenLJet_PrunedP4[5][kMaxGenLJet];
   TLorentzVector  GenLJet_SoftDroppedP4[5][kMaxGenLJet];
   Int_t           GenLJet_NSubJetsTrimmed[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NSubJetsPruned[kMaxGenLJet];   //[GenLJet_]
   Int_t           GenLJet_NSubJetsSoftDropped[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge23[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge34[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge45[kMaxGenLJet];   //[GenLJet_]
   Double_t        GenLJet_ExclYmerge56[kMaxGenLJet];   //[GenLJet_]
   TRefArray       GenLJet_Constituents[kMaxGenLJet];
   TRefArray       GenLJet_Particles[kMaxGenLJet];
   TLorentzVector  GenLJet_Area[kMaxGenLJet];
   Int_t           GenLJet_size;
   Int_t           GenJet_;
   UInt_t          GenJet_fUniqueID[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_fBits[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PT[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Eta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Phi[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_T[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Mass[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaEta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaPhi[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_Flavor[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTag[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_TauTag[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_TauWeight[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_Charge[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_EhadOverEem[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NCharged[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NNeutrals[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Beta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_BetaStar[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_MeanSqDeltaR[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PTD[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_FracPt[kMaxGenJet][5];   //[GenJet_]
   Float_t         GenJet_Tau[kMaxGenJet][5];   //[GenJet_]
   TLorentzVector  GenJet_SoftDroppedJet[kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedSubJet1[kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedSubJet2[kMaxGenJet];
   TLorentzVector  GenJet_TrimmedP4[5][kMaxGenJet];
   TLorentzVector  GenJet_PrunedP4[5][kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedP4[5][kMaxGenJet];
   Int_t           GenJet_NSubJetsTrimmed[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsPruned[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsSoftDropped[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge23[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge34[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge45[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge56[kMaxGenJet];   //[GenJet_]
   TRefArray       GenJet_Constituents[kMaxGenJet];
   TRefArray       GenJet_Particles[kMaxGenJet];
   TLorentzVector  GenJet_Area[kMaxGenJet];
   Int_t           GenJet_size;
   Int_t           GenElectron_;
   UInt_t          GenElectron_fUniqueID[kMaxGenElectron];   //[GenElectron_]
   UInt_t          GenElectron_fBits[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_PT[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_Eta[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_Phi[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_T[kMaxGenElectron];   //[GenElectron_]
   Int_t           GenElectron_Charge[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_EhadOverEem[kMaxGenElectron];   //[GenElectron_]
   TRef            GenElectron_Particle[kMaxGenElectron];
   Float_t         GenElectron_IsolationVar[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_IsolationVarRhoCorr[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPtCharged[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPtNeutral[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPtChargedPU[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_SumPt[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_D0[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_DZ[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_ErrorD0[kMaxGenElectron];   //[GenElectron_]
   Float_t         GenElectron_ErrorDZ[kMaxGenElectron];   //[GenElectron_]
   Int_t           GenElectron_size;
   Int_t           GenMuon_;
   UInt_t          GenMuon_fUniqueID[kMaxGenMuon];   //[GenMuon_]
   UInt_t          GenMuon_fBits[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_PT[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_Eta[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_Phi[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_T[kMaxGenMuon];   //[GenMuon_]
   Int_t           GenMuon_Charge[kMaxGenMuon];   //[GenMuon_]
   TRef            GenMuon_Particle[kMaxGenMuon];
   Float_t         GenMuon_IsolationVar[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_IsolationVarRhoCorr[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPtCharged[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPtNeutral[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPtChargedPU[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_SumPt[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_D0[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_DZ[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_ErrorD0[kMaxGenMuon];   //[GenMuon_]
   Float_t         GenMuon_ErrorDZ[kMaxGenMuon];   //[GenMuon_]
   Int_t           GenMuon_size;
   Int_t           GenTop_;
   UInt_t          GenTop_fUniqueID[kMaxGenTop];   //[GenTop_]
   UInt_t          GenTop_fBits[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_PID[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_Status[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_IsPU[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_M1[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_M2[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_D1[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_D2[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_Charge[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Mass[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_E[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Px[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Py[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Pz[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_P[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_PT[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Eta[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Phi[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Rapidity[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_CtgTheta[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_D0[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_DZ[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_T[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_X[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Y[kMaxGenTop];   //[GenTop_]
   Float_t         GenTop_Z[kMaxGenTop];   //[GenTop_]
   Int_t           GenTop_size;
   Int_t           GenPhoton_;
   UInt_t          GenPhoton_fUniqueID[kMaxGenPhoton];   //[GenPhoton_]
   UInt_t          GenPhoton_fBits[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_PT[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_Eta[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_Phi[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_E[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_T[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_EhadOverEem[kMaxGenPhoton];   //[GenPhoton_]
   TRefArray       GenPhoton_Particles[kMaxGenPhoton];
   Float_t         GenPhoton_IsolationVar[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_IsolationVarRhoCorr[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPtCharged[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPtNeutral[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPtChargedPU[kMaxGenPhoton];   //[GenPhoton_]
   Float_t         GenPhoton_SumPt[kMaxGenPhoton];   //[GenPhoton_]
   Int_t           GenPhoton_Status[kMaxGenPhoton];   //[GenPhoton_]
   Int_t           GenPhoton_size;
   Int_t           GenMissingET_;
   UInt_t          GenMissingET_fUniqueID[kMaxGenMissingET];   //[GenMissingET_]
   UInt_t          GenMissingET_fBits[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_MET[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Eta[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Phi[kMaxGenMissingET];   //[GenMissingET_]
   Int_t           GenMissingET_size;
   Int_t           GenZPrime_;
   UInt_t          GenZPrime_fUniqueID[kMaxGenZPrime];   //[GenZPrime_]
   UInt_t          GenZPrime_fBits[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_PID[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_Status[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_IsPU[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_M1[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_M2[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_D1[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_D2[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_Charge[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Mass[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_E[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Px[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Py[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Pz[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_P[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_PT[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Eta[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Phi[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Rapidity[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_CtgTheta[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_D0[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_DZ[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_T[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_X[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Y[kMaxGenZPrime];   //[GenZPrime_]
   Float_t         GenZPrime_Z[kMaxGenZPrime];   //[GenZPrime_]
   Int_t           GenZPrime_size;
   Int_t           GenW_;
   UInt_t          GenW_fUniqueID[kMaxGenW];   //[GenW_]
   UInt_t          GenW_fBits[kMaxGenW];   //[GenW_]
   Int_t           GenW_PID[kMaxGenW];   //[GenW_]
   Int_t           GenW_Status[kMaxGenW];   //[GenW_]
   Int_t           GenW_IsPU[kMaxGenW];   //[GenW_]
   Int_t           GenW_M1[kMaxGenW];   //[GenW_]
   Int_t           GenW_M2[kMaxGenW];   //[GenW_]
   Int_t           GenW_D1[kMaxGenW];   //[GenW_]
   Int_t           GenW_D2[kMaxGenW];   //[GenW_]
   Int_t           GenW_Charge[kMaxGenW];   //[GenW_]
   Float_t         GenW_Mass[kMaxGenW];   //[GenW_]
   Float_t         GenW_E[kMaxGenW];   //[GenW_]
   Float_t         GenW_Px[kMaxGenW];   //[GenW_]
   Float_t         GenW_Py[kMaxGenW];   //[GenW_]
   Float_t         GenW_Pz[kMaxGenW];   //[GenW_]
   Float_t         GenW_P[kMaxGenW];   //[GenW_]
   Float_t         GenW_PT[kMaxGenW];   //[GenW_]
   Float_t         GenW_Eta[kMaxGenW];   //[GenW_]
   Float_t         GenW_Phi[kMaxGenW];   //[GenW_]
   Float_t         GenW_Rapidity[kMaxGenW];   //[GenW_]
   Float_t         GenW_CtgTheta[kMaxGenW];   //[GenW_]
   Float_t         GenW_D0[kMaxGenW];   //[GenW_]
   Float_t         GenW_DZ[kMaxGenW];   //[GenW_]
   Float_t         GenW_T[kMaxGenW];   //[GenW_]
   Float_t         GenW_X[kMaxGenW];   //[GenW_]
   Float_t         GenW_Y[kMaxGenW];   //[GenW_]
   Float_t         GenW_Z[kMaxGenW];   //[GenW_]
   Int_t           GenW_size;
   Int_t           GenBhadrons_;
   UInt_t          GenBhadrons_fUniqueID[kMaxGenBhadrons];   //[GenBhadrons_]
   UInt_t          GenBhadrons_fBits[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_PID[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_Status[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_IsPU[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_M1[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_M2[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_D1[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_D2[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_Charge[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Mass[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_E[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Px[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Py[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Pz[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_P[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_PT[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Eta[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Phi[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Rapidity[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_CtgTheta[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_D0[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_DZ[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_T[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_X[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Y[kMaxGenBhadrons];   //[GenBhadrons_]
   Float_t         GenBhadrons_Z[kMaxGenBhadrons];   //[GenBhadrons_]
   Int_t           GenBhadrons_size;
   Int_t           Jet_;
   UInt_t          Jet_fUniqueID[kMaxJet];   //[Jet_]
   UInt_t          Jet_fBits[kMaxJet];   //[Jet_]
   Float_t         Jet_PT[kMaxJet];   //[Jet_]
   Float_t         Jet_Eta[kMaxJet];   //[Jet_]
   Float_t         Jet_Phi[kMaxJet];   //[Jet_]
   Float_t         Jet_T[kMaxJet];   //[Jet_]
   Float_t         Jet_Mass[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaEta[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaPhi[kMaxJet];   //[Jet_]
   UInt_t          Jet_Flavor[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTag[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_TauTag[kMaxJet];   //[Jet_]
   Float_t         Jet_TauWeight[kMaxJet];   //[Jet_]
   Int_t           Jet_Charge[kMaxJet];   //[Jet_]
   Float_t         Jet_EhadOverEem[kMaxJet];   //[Jet_]
   Int_t           Jet_NCharged[kMaxJet];   //[Jet_]
   Int_t           Jet_NNeutrals[kMaxJet];   //[Jet_]
   Float_t         Jet_Beta[kMaxJet];   //[Jet_]
   Float_t         Jet_BetaStar[kMaxJet];   //[Jet_]
   Float_t         Jet_MeanSqDeltaR[kMaxJet];   //[Jet_]
   Float_t         Jet_PTD[kMaxJet];   //[Jet_]
   Float_t         Jet_FracPt[kMaxJet][5];   //[Jet_]
   Float_t         Jet_Tau[kMaxJet][5];   //[Jet_]
   TLorentzVector  Jet_SoftDroppedJet[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet1[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet2[kMaxJet];
   TLorentzVector  Jet_TrimmedP4[5][kMaxJet];
   TLorentzVector  Jet_PrunedP4[5][kMaxJet];
   TLorentzVector  Jet_SoftDroppedP4[5][kMaxJet];
   Int_t           Jet_NSubJetsTrimmed[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsPruned[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsSoftDropped[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge23[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge34[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge45[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge56[kMaxJet];   //[Jet_]
   TRefArray       Jet_Constituents[kMaxJet];
   TRefArray       Jet_Particles[kMaxJet];
   TLorentzVector  Jet_Area[kMaxJet];
   Int_t           Jet_size;
   Int_t           LJet_;
   UInt_t          LJet_fUniqueID[kMaxLJet];   //[LJet_]
   UInt_t          LJet_fBits[kMaxLJet];   //[LJet_]
   Float_t         LJet_PT[kMaxLJet];   //[LJet_]
   Float_t         LJet_Eta[kMaxLJet];   //[LJet_]
   Float_t         LJet_Phi[kMaxLJet];   //[LJet_]
   Float_t         LJet_T[kMaxLJet];   //[LJet_]
   Float_t         LJet_Mass[kMaxLJet];   //[LJet_]
   Float_t         LJet_DeltaEta[kMaxLJet];   //[LJet_]
   Float_t         LJet_DeltaPhi[kMaxLJet];   //[LJet_]
   UInt_t          LJet_Flavor[kMaxLJet];   //[LJet_]
   UInt_t          LJet_FlavorAlgo[kMaxLJet];   //[LJet_]
   UInt_t          LJet_FlavorPhys[kMaxLJet];   //[LJet_]
   UInt_t          LJet_BTag[kMaxLJet];   //[LJet_]
   UInt_t          LJet_BTagAlgo[kMaxLJet];   //[LJet_]
   UInt_t          LJet_BTagPhys[kMaxLJet];   //[LJet_]
   UInt_t          LJet_TauTag[kMaxLJet];   //[LJet_]
   Float_t         LJet_TauWeight[kMaxLJet];   //[LJet_]
   Int_t           LJet_Charge[kMaxLJet];   //[LJet_]
   Float_t         LJet_EhadOverEem[kMaxLJet];   //[LJet_]
   Int_t           LJet_NCharged[kMaxLJet];   //[LJet_]
   Int_t           LJet_NNeutrals[kMaxLJet];   //[LJet_]
   Float_t         LJet_Beta[kMaxLJet];   //[LJet_]
   Float_t         LJet_BetaStar[kMaxLJet];   //[LJet_]
   Float_t         LJet_MeanSqDeltaR[kMaxLJet];   //[LJet_]
   Float_t         LJet_PTD[kMaxLJet];   //[LJet_]
   Float_t         LJet_FracPt[kMaxLJet][5];   //[LJet_]
   Float_t         LJet_Tau[kMaxLJet][5];   //[LJet_]
   TLorentzVector  LJet_SoftDroppedJet[kMaxLJet];
   TLorentzVector  LJet_SoftDroppedSubJet1[kMaxLJet];
   TLorentzVector  LJet_SoftDroppedSubJet2[kMaxLJet];
   TLorentzVector  LJet_TrimmedP4[5][kMaxLJet];
   TLorentzVector  LJet_PrunedP4[5][kMaxLJet];
   TLorentzVector  LJet_SoftDroppedP4[5][kMaxLJet];
   Int_t           LJet_NSubJetsTrimmed[kMaxLJet];   //[LJet_]
   Int_t           LJet_NSubJetsPruned[kMaxLJet];   //[LJet_]
   Int_t           LJet_NSubJetsSoftDropped[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge23[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge34[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge45[kMaxLJet];   //[LJet_]
   Double_t        LJet_ExclYmerge56[kMaxLJet];   //[LJet_]
   TRefArray       LJet_Constituents[kMaxLJet];
   TRefArray       LJet_Particles[kMaxLJet];
   TLorentzVector  LJet_Area[kMaxLJet];
   Int_t           LJet_size;
   Int_t           JetJES_;
   UInt_t          JetJES_fUniqueID[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_fBits[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_PT[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Eta[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Phi[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_T[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Mass[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_DeltaEta[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_DeltaPhi[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_Flavor[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_FlavorAlgo[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_FlavorPhys[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_BTag[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_BTagAlgo[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_BTagPhys[kMaxJetJES];   //[JetJES_]
   UInt_t          JetJES_TauTag[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_TauWeight[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_Charge[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_EhadOverEem[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NCharged[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NNeutrals[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_Beta[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_BetaStar[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_MeanSqDeltaR[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_PTD[kMaxJetJES];   //[JetJES_]
   Float_t         JetJES_FracPt[kMaxJetJES][5];   //[JetJES_]
   Float_t         JetJES_Tau[kMaxJetJES][5];   //[JetJES_]
   TLorentzVector  JetJES_SoftDroppedJet[kMaxJetJES];
   TLorentzVector  JetJES_SoftDroppedSubJet1[kMaxJetJES];
   TLorentzVector  JetJES_SoftDroppedSubJet2[kMaxJetJES];
   TLorentzVector  JetJES_TrimmedP4[5][kMaxJetJES];
   TLorentzVector  JetJES_PrunedP4[5][kMaxJetJES];
   TLorentzVector  JetJES_SoftDroppedP4[5][kMaxJetJES];
   Int_t           JetJES_NSubJetsTrimmed[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NSubJetsPruned[kMaxJetJES];   //[JetJES_]
   Int_t           JetJES_NSubJetsSoftDropped[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge23[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge34[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge45[kMaxJetJES];   //[JetJES_]
   Double_t        JetJES_ExclYmerge56[kMaxJetJES];   //[JetJES_]
   TRefArray       JetJES_Constituents[kMaxJetJES];
   TRefArray       JetJES_Particles[kMaxJetJES];
   TLorentzVector  JetJES_Area[kMaxJetJES];
   Int_t           JetJES_size;
   Int_t           LJetJES_;
   UInt_t          LJetJES_fUniqueID[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_fBits[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_PT[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Eta[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Phi[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_T[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Mass[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_DeltaEta[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_DeltaPhi[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_Flavor[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_FlavorAlgo[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_FlavorPhys[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_BTag[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_BTagAlgo[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_BTagPhys[kMaxLJetJES];   //[LJetJES_]
   UInt_t          LJetJES_TauTag[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_TauWeight[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_Charge[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_EhadOverEem[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NCharged[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NNeutrals[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_Beta[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_BetaStar[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_MeanSqDeltaR[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_PTD[kMaxLJetJES];   //[LJetJES_]
   Float_t         LJetJES_FracPt[kMaxLJetJES][5];   //[LJetJES_]
   Float_t         LJetJES_Tau[kMaxLJetJES][5];   //[LJetJES_]
   TLorentzVector  LJetJES_SoftDroppedJet[kMaxLJetJES];
   TLorentzVector  LJetJES_SoftDroppedSubJet1[kMaxLJetJES];
   TLorentzVector  LJetJES_SoftDroppedSubJet2[kMaxLJetJES];
   TLorentzVector  LJetJES_TrimmedP4[5][kMaxLJetJES];
   TLorentzVector  LJetJES_PrunedP4[5][kMaxLJetJES];
   TLorentzVector  LJetJES_SoftDroppedP4[5][kMaxLJetJES];
   Int_t           LJetJES_NSubJetsTrimmed[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NSubJetsPruned[kMaxLJetJES];   //[LJetJES_]
   Int_t           LJetJES_NSubJetsSoftDropped[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge23[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge34[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge45[kMaxLJetJES];   //[LJetJES_]
   Double_t        LJetJES_ExclYmerge56[kMaxLJetJES];   //[LJetJES_]
   TRefArray       LJetJES_Constituents[kMaxLJetJES];
   TRefArray       LJetJES_Particles[kMaxLJetJES];
   TLorentzVector  LJetJES_Area[kMaxLJetJES];
   Int_t           LJetJES_size;
   Int_t           Electron_;
   UInt_t          Electron_fUniqueID[kMaxElectron];   //[Electron_]
   UInt_t          Electron_fBits[kMaxElectron];   //[Electron_]
   Float_t         Electron_PT[kMaxElectron];   //[Electron_]
   Float_t         Electron_Eta[kMaxElectron];   //[Electron_]
   Float_t         Electron_Phi[kMaxElectron];   //[Electron_]
   Float_t         Electron_T[kMaxElectron];   //[Electron_]
   Int_t           Electron_Charge[kMaxElectron];   //[Electron_]
   Float_t         Electron_EhadOverEem[kMaxElectron];   //[Electron_]
   TRef            Electron_Particle[kMaxElectron];
   Float_t         Electron_IsolationVar[kMaxElectron];   //[Electron_]
   Float_t         Electron_IsolationVarRhoCorr[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtCharged[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtNeutral[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtChargedPU[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPt[kMaxElectron];   //[Electron_]
   Float_t         Electron_D0[kMaxElectron];   //[Electron_]
   Float_t         Electron_DZ[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorD0[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorDZ[kMaxElectron];   //[Electron_]
   Int_t           Electron_size;
   Int_t           Photon_;
   UInt_t          Photon_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_fBits[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PT[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_E[kMaxPhoton];   //[Photon_]
   Float_t         Photon_T[kMaxPhoton];   //[Photon_]
   Float_t         Photon_EhadOverEem[kMaxPhoton];   //[Photon_]
   TRefArray       Photon_Particles[kMaxPhoton];
   Float_t         Photon_IsolationVar[kMaxPhoton];   //[Photon_]
   Float_t         Photon_IsolationVarRhoCorr[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtCharged[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtNeutral[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtChargedPU[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPt[kMaxPhoton];   //[Photon_]
   Int_t           Photon_Status[kMaxPhoton];   //[Photon_]
   Int_t           Photon_size;
   Int_t           Muon_;
   UInt_t          Muon_fUniqueID[kMaxMuon];   //[Muon_]
   UInt_t          Muon_fBits[kMaxMuon];   //[Muon_]
   Float_t         Muon_PT[kMaxMuon];   //[Muon_]
   Float_t         Muon_Eta[kMaxMuon];   //[Muon_]
   Float_t         Muon_Phi[kMaxMuon];   //[Muon_]
   Float_t         Muon_T[kMaxMuon];   //[Muon_]
   Int_t           Muon_Charge[kMaxMuon];   //[Muon_]
   TRef            Muon_Particle[kMaxMuon];
   Float_t         Muon_IsolationVar[kMaxMuon];   //[Muon_]
   Float_t         Muon_IsolationVarRhoCorr[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtCharged[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtNeutral[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtChargedPU[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPt[kMaxMuon];   //[Muon_]
   Float_t         Muon_D0[kMaxMuon];   //[Muon_]
   Float_t         Muon_DZ[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorD0[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorDZ[kMaxMuon];   //[Muon_]
   Int_t           Muon_size;
   Int_t           MissingET_;
   UInt_t          MissingET_fUniqueID[kMaxMissingET];   //[MissingET_]
   UInt_t          MissingET_fBits[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_MET[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Eta[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Phi[kMaxMissingET];   //[MissingET_]
   Int_t           MissingET_size;
   Int_t           ScalarHT_;
   UInt_t          ScalarHT_fUniqueID[kMaxScalarHT];   //[ScalarHT_]
   UInt_t          ScalarHT_fBits[kMaxScalarHT];   //[ScalarHT_]
   Float_t         ScalarHT_HT[kMaxScalarHT];   //[ScalarHT_]
   Int_t           ScalarHT_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_ReadTime;   //!
   TBranch        *b_Event_ProcTime;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_MPI;   //!
   TBranch        *b_Event_Weight;   //!
   TBranch        *b_Event_CrossSection;   //!
   TBranch        *b_Event_CrossSectionError;   //!
   TBranch        *b_Event_Scale;   //!
   TBranch        *b_Event_AlphaQED;   //!
   TBranch        *b_Event_AlphaQCD;   //!
   TBranch        *b_Event_ID1;   //!
   TBranch        *b_Event_ID2;   //!
   TBranch        *b_Event_X1;   //!
   TBranch        *b_Event_X2;   //!
   TBranch        *b_Event_ScalePDF;   //!
   TBranch        *b_Event_PDF1;   //!
   TBranch        *b_Event_PDF2;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_Weight_;   //!
   TBranch        *b_Weight_fUniqueID;   //!
   TBranch        *b_Weight_fBits;   //!
   TBranch        *b_Weight_Weight;   //!
   TBranch        *b_Weight_size;   //!
   TBranch        *b_GenLJet_;   //!
   TBranch        *b_GenLJet_fUniqueID;   //!
   TBranch        *b_GenLJet_fBits;   //!
   TBranch        *b_GenLJet_PT;   //!
   TBranch        *b_GenLJet_Eta;   //!
   TBranch        *b_GenLJet_Phi;   //!
   TBranch        *b_GenLJet_T;   //!
   TBranch        *b_GenLJet_Mass;   //!
   TBranch        *b_GenLJet_DeltaEta;   //!
   TBranch        *b_GenLJet_DeltaPhi;   //!
   TBranch        *b_GenLJet_Flavor;   //!
   TBranch        *b_GenLJet_FlavorAlgo;   //!
   TBranch        *b_GenLJet_FlavorPhys;   //!
   TBranch        *b_GenLJet_BTag;   //!
   TBranch        *b_GenLJet_BTagAlgo;   //!
   TBranch        *b_GenLJet_BTagPhys;   //!
   TBranch        *b_GenLJet_TauTag;   //!
   TBranch        *b_GenLJet_TauWeight;   //!
   TBranch        *b_GenLJet_Charge;   //!
   TBranch        *b_GenLJet_EhadOverEem;   //!
   TBranch        *b_GenLJet_NCharged;   //!
   TBranch        *b_GenLJet_NNeutrals;   //!
   TBranch        *b_GenLJet_Beta;   //!
   TBranch        *b_GenLJet_BetaStar;   //!
   TBranch        *b_GenLJet_MeanSqDeltaR;   //!
   TBranch        *b_GenLJet_PTD;   //!
   TBranch        *b_GenLJet_FracPt;   //!
   TBranch        *b_GenLJet_Tau;   //!
   TBranch        *b_GenLJet_SoftDroppedJet;   //!
   TBranch        *b_GenLJet_SoftDroppedSubJet1;   //!
   TBranch        *b_GenLJet_SoftDroppedSubJet2;   //!
   TBranch        *b_GenLJet_TrimmedP4;   //!
   TBranch        *b_GenLJet_PrunedP4;   //!
   TBranch        *b_GenLJet_SoftDroppedP4;   //!
   TBranch        *b_GenLJet_NSubJetsTrimmed;   //!
   TBranch        *b_GenLJet_NSubJetsPruned;   //!
   TBranch        *b_GenLJet_NSubJetsSoftDropped;   //!
   TBranch        *b_GenLJet_ExclYmerge23;   //!
   TBranch        *b_GenLJet_ExclYmerge34;   //!
   TBranch        *b_GenLJet_ExclYmerge45;   //!
   TBranch        *b_GenLJet_ExclYmerge56;   //!
   TBranch        *b_GenLJet_Constituents;   //!
   TBranch        *b_GenLJet_Particles;   //!
   TBranch        *b_GenLJet_Area;   //!
   TBranch        *b_GenLJet_size;   //!
   TBranch        *b_GenJet_;   //!
   TBranch        *b_GenJet_fUniqueID;   //!
   TBranch        *b_GenJet_fBits;   //!
   TBranch        *b_GenJet_PT;   //!
   TBranch        *b_GenJet_Eta;   //!
   TBranch        *b_GenJet_Phi;   //!
   TBranch        *b_GenJet_T;   //!
   TBranch        *b_GenJet_Mass;   //!
   TBranch        *b_GenJet_DeltaEta;   //!
   TBranch        *b_GenJet_DeltaPhi;   //!
   TBranch        *b_GenJet_Flavor;   //!
   TBranch        *b_GenJet_FlavorAlgo;   //!
   TBranch        *b_GenJet_FlavorPhys;   //!
   TBranch        *b_GenJet_BTag;   //!
   TBranch        *b_GenJet_BTagAlgo;   //!
   TBranch        *b_GenJet_BTagPhys;   //!
   TBranch        *b_GenJet_TauTag;   //!
   TBranch        *b_GenJet_TauWeight;   //!
   TBranch        *b_GenJet_Charge;   //!
   TBranch        *b_GenJet_EhadOverEem;   //!
   TBranch        *b_GenJet_NCharged;   //!
   TBranch        *b_GenJet_NNeutrals;   //!
   TBranch        *b_GenJet_Beta;   //!
   TBranch        *b_GenJet_BetaStar;   //!
   TBranch        *b_GenJet_MeanSqDeltaR;   //!
   TBranch        *b_GenJet_PTD;   //!
   TBranch        *b_GenJet_FracPt;   //!
   TBranch        *b_GenJet_Tau;   //!
   TBranch        *b_GenJet_SoftDroppedJet;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet1;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet2;   //!
   TBranch        *b_GenJet_TrimmedP4;   //!
   TBranch        *b_GenJet_PrunedP4;   //!
   TBranch        *b_GenJet_SoftDroppedP4;   //!
   TBranch        *b_GenJet_NSubJetsTrimmed;   //!
   TBranch        *b_GenJet_NSubJetsPruned;   //!
   TBranch        *b_GenJet_NSubJetsSoftDropped;   //!
   TBranch        *b_GenJet_ExclYmerge23;   //!
   TBranch        *b_GenJet_ExclYmerge34;   //!
   TBranch        *b_GenJet_ExclYmerge45;   //!
   TBranch        *b_GenJet_ExclYmerge56;   //!
   TBranch        *b_GenJet_Constituents;   //!
   TBranch        *b_GenJet_Particles;   //!
   TBranch        *b_GenJet_Area;   //!
   TBranch        *b_GenJet_size;   //!
   TBranch        *b_GenElectron_;   //!
   TBranch        *b_GenElectron_fUniqueID;   //!
   TBranch        *b_GenElectron_fBits;   //!
   TBranch        *b_GenElectron_PT;   //!
   TBranch        *b_GenElectron_Eta;   //!
   TBranch        *b_GenElectron_Phi;   //!
   TBranch        *b_GenElectron_T;   //!
   TBranch        *b_GenElectron_Charge;   //!
   TBranch        *b_GenElectron_EhadOverEem;   //!
   TBranch        *b_GenElectron_Particle;   //!
   TBranch        *b_GenElectron_IsolationVar;   //!
   TBranch        *b_GenElectron_IsolationVarRhoCorr;   //!
   TBranch        *b_GenElectron_SumPtCharged;   //!
   TBranch        *b_GenElectron_SumPtNeutral;   //!
   TBranch        *b_GenElectron_SumPtChargedPU;   //!
   TBranch        *b_GenElectron_SumPt;   //!
   TBranch        *b_GenElectron_D0;   //!
   TBranch        *b_GenElectron_DZ;   //!
   TBranch        *b_GenElectron_ErrorD0;   //!
   TBranch        *b_GenElectron_ErrorDZ;   //!
   TBranch        *b_GenElectron_size;   //!
   TBranch        *b_GenMuon_;   //!
   TBranch        *b_GenMuon_fUniqueID;   //!
   TBranch        *b_GenMuon_fBits;   //!
   TBranch        *b_GenMuon_PT;   //!
   TBranch        *b_GenMuon_Eta;   //!
   TBranch        *b_GenMuon_Phi;   //!
   TBranch        *b_GenMuon_T;   //!
   TBranch        *b_GenMuon_Charge;   //!
   TBranch        *b_GenMuon_Particle;   //!
   TBranch        *b_GenMuon_IsolationVar;   //!
   TBranch        *b_GenMuon_IsolationVarRhoCorr;   //!
   TBranch        *b_GenMuon_SumPtCharged;   //!
   TBranch        *b_GenMuon_SumPtNeutral;   //!
   TBranch        *b_GenMuon_SumPtChargedPU;   //!
   TBranch        *b_GenMuon_SumPt;   //!
   TBranch        *b_GenMuon_D0;   //!
   TBranch        *b_GenMuon_DZ;   //!
   TBranch        *b_GenMuon_ErrorD0;   //!
   TBranch        *b_GenMuon_ErrorDZ;   //!
   TBranch        *b_GenMuon_size;   //!
   TBranch        *b_GenTop_;   //!
   TBranch        *b_GenTop_fUniqueID;   //!
   TBranch        *b_GenTop_fBits;   //!
   TBranch        *b_GenTop_PID;   //!
   TBranch        *b_GenTop_Status;   //!
   TBranch        *b_GenTop_IsPU;   //!
   TBranch        *b_GenTop_M1;   //!
   TBranch        *b_GenTop_M2;   //!
   TBranch        *b_GenTop_D1;   //!
   TBranch        *b_GenTop_D2;   //!
   TBranch        *b_GenTop_Charge;   //!
   TBranch        *b_GenTop_Mass;   //!
   TBranch        *b_GenTop_E;   //!
   TBranch        *b_GenTop_Px;   //!
   TBranch        *b_GenTop_Py;   //!
   TBranch        *b_GenTop_Pz;   //!
   TBranch        *b_GenTop_P;   //!
   TBranch        *b_GenTop_PT;   //!
   TBranch        *b_GenTop_Eta;   //!
   TBranch        *b_GenTop_Phi;   //!
   TBranch        *b_GenTop_Rapidity;   //!
   TBranch        *b_GenTop_CtgTheta;   //!
   TBranch        *b_GenTop_D0;   //!
   TBranch        *b_GenTop_DZ;   //!
   TBranch        *b_GenTop_T;   //!
   TBranch        *b_GenTop_X;   //!
   TBranch        *b_GenTop_Y;   //!
   TBranch        *b_GenTop_Z;   //!
   TBranch        *b_GenTop_size;   //!
   TBranch        *b_GenPhoton_;   //!
   TBranch        *b_GenPhoton_fUniqueID;   //!
   TBranch        *b_GenPhoton_fBits;   //!
   TBranch        *b_GenPhoton_PT;   //!
   TBranch        *b_GenPhoton_Eta;   //!
   TBranch        *b_GenPhoton_Phi;   //!
   TBranch        *b_GenPhoton_E;   //!
   TBranch        *b_GenPhoton_T;   //!
   TBranch        *b_GenPhoton_EhadOverEem;   //!
   TBranch        *b_GenPhoton_Particles;   //!
   TBranch        *b_GenPhoton_IsolationVar;   //!
   TBranch        *b_GenPhoton_IsolationVarRhoCorr;   //!
   TBranch        *b_GenPhoton_SumPtCharged;   //!
   TBranch        *b_GenPhoton_SumPtNeutral;   //!
   TBranch        *b_GenPhoton_SumPtChargedPU;   //!
   TBranch        *b_GenPhoton_SumPt;   //!
   TBranch        *b_GenPhoton_Status;   //!
   TBranch        *b_GenPhoton_size;   //!
   TBranch        *b_GenMissingET_;   //!
   TBranch        *b_GenMissingET_fUniqueID;   //!
   TBranch        *b_GenMissingET_fBits;   //!
   TBranch        *b_GenMissingET_MET;   //!
   TBranch        *b_GenMissingET_Eta;   //!
   TBranch        *b_GenMissingET_Phi;   //!
   TBranch        *b_GenMissingET_size;   //!
   TBranch        *b_GenZPrime_;   //!
   TBranch        *b_GenZPrime_fUniqueID;   //!
   TBranch        *b_GenZPrime_fBits;   //!
   TBranch        *b_GenZPrime_PID;   //!
   TBranch        *b_GenZPrime_Status;   //!
   TBranch        *b_GenZPrime_IsPU;   //!
   TBranch        *b_GenZPrime_M1;   //!
   TBranch        *b_GenZPrime_M2;   //!
   TBranch        *b_GenZPrime_D1;   //!
   TBranch        *b_GenZPrime_D2;   //!
   TBranch        *b_GenZPrime_Charge;   //!
   TBranch        *b_GenZPrime_Mass;   //!
   TBranch        *b_GenZPrime_E;   //!
   TBranch        *b_GenZPrime_Px;   //!
   TBranch        *b_GenZPrime_Py;   //!
   TBranch        *b_GenZPrime_Pz;   //!
   TBranch        *b_GenZPrime_P;   //!
   TBranch        *b_GenZPrime_PT;   //!
   TBranch        *b_GenZPrime_Eta;   //!
   TBranch        *b_GenZPrime_Phi;   //!
   TBranch        *b_GenZPrime_Rapidity;   //!
   TBranch        *b_GenZPrime_CtgTheta;   //!
   TBranch        *b_GenZPrime_D0;   //!
   TBranch        *b_GenZPrime_DZ;   //!
   TBranch        *b_GenZPrime_T;   //!
   TBranch        *b_GenZPrime_X;   //!
   TBranch        *b_GenZPrime_Y;   //!
   TBranch        *b_GenZPrime_Z;   //!
   TBranch        *b_GenZPrime_size;   //!
   TBranch        *b_GenW_;   //!
   TBranch        *b_GenW_fUniqueID;   //!
   TBranch        *b_GenW_fBits;   //!
   TBranch        *b_GenW_PID;   //!
   TBranch        *b_GenW_Status;   //!
   TBranch        *b_GenW_IsPU;   //!
   TBranch        *b_GenW_M1;   //!
   TBranch        *b_GenW_M2;   //!
   TBranch        *b_GenW_D1;   //!
   TBranch        *b_GenW_D2;   //!
   TBranch        *b_GenW_Charge;   //!
   TBranch        *b_GenW_Mass;   //!
   TBranch        *b_GenW_E;   //!
   TBranch        *b_GenW_Px;   //!
   TBranch        *b_GenW_Py;   //!
   TBranch        *b_GenW_Pz;   //!
   TBranch        *b_GenW_P;   //!
   TBranch        *b_GenW_PT;   //!
   TBranch        *b_GenW_Eta;   //!
   TBranch        *b_GenW_Phi;   //!
   TBranch        *b_GenW_Rapidity;   //!
   TBranch        *b_GenW_CtgTheta;   //!
   TBranch        *b_GenW_D0;   //!
   TBranch        *b_GenW_DZ;   //!
   TBranch        *b_GenW_T;   //!
   TBranch        *b_GenW_X;   //!
   TBranch        *b_GenW_Y;   //!
   TBranch        *b_GenW_Z;   //!
   TBranch        *b_GenW_size;   //!
   TBranch        *b_GenBhadrons_;   //!
   TBranch        *b_GenBhadrons_fUniqueID;   //!
   TBranch        *b_GenBhadrons_fBits;   //!
   TBranch        *b_GenBhadrons_PID;   //!
   TBranch        *b_GenBhadrons_Status;   //!
   TBranch        *b_GenBhadrons_IsPU;   //!
   TBranch        *b_GenBhadrons_M1;   //!
   TBranch        *b_GenBhadrons_M2;   //!
   TBranch        *b_GenBhadrons_D1;   //!
   TBranch        *b_GenBhadrons_D2;   //!
   TBranch        *b_GenBhadrons_Charge;   //!
   TBranch        *b_GenBhadrons_Mass;   //!
   TBranch        *b_GenBhadrons_E;   //!
   TBranch        *b_GenBhadrons_Px;   //!
   TBranch        *b_GenBhadrons_Py;   //!
   TBranch        *b_GenBhadrons_Pz;   //!
   TBranch        *b_GenBhadrons_P;   //!
   TBranch        *b_GenBhadrons_PT;   //!
   TBranch        *b_GenBhadrons_Eta;   //!
   TBranch        *b_GenBhadrons_Phi;   //!
   TBranch        *b_GenBhadrons_Rapidity;   //!
   TBranch        *b_GenBhadrons_CtgTheta;   //!
   TBranch        *b_GenBhadrons_D0;   //!
   TBranch        *b_GenBhadrons_DZ;   //!
   TBranch        *b_GenBhadrons_T;   //!
   TBranch        *b_GenBhadrons_X;   //!
   TBranch        *b_GenBhadrons_Y;   //!
   TBranch        *b_GenBhadrons_Z;   //!
   TBranch        *b_GenBhadrons_size;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_fUniqueID;   //!
   TBranch        *b_Jet_fBits;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_T;   //!
   TBranch        *b_Jet_Mass;   //!
   TBranch        *b_Jet_DeltaEta;   //!
   TBranch        *b_Jet_DeltaPhi;   //!
   TBranch        *b_Jet_Flavor;   //!
   TBranch        *b_Jet_FlavorAlgo;   //!
   TBranch        *b_Jet_FlavorPhys;   //!
   TBranch        *b_Jet_BTag;   //!
   TBranch        *b_Jet_BTagAlgo;   //!
   TBranch        *b_Jet_BTagPhys;   //!
   TBranch        *b_Jet_TauTag;   //!
   TBranch        *b_Jet_TauWeight;   //!
   TBranch        *b_Jet_Charge;   //!
   TBranch        *b_Jet_EhadOverEem;   //!
   TBranch        *b_Jet_NCharged;   //!
   TBranch        *b_Jet_NNeutrals;   //!
   TBranch        *b_Jet_Beta;   //!
   TBranch        *b_Jet_BetaStar;   //!
   TBranch        *b_Jet_MeanSqDeltaR;   //!
   TBranch        *b_Jet_PTD;   //!
   TBranch        *b_Jet_FracPt;   //!
   TBranch        *b_Jet_Tau;   //!
   TBranch        *b_Jet_SoftDroppedJet;   //!
   TBranch        *b_Jet_SoftDroppedSubJet1;   //!
   TBranch        *b_Jet_SoftDroppedSubJet2;   //!
   TBranch        *b_Jet_TrimmedP4;   //!
   TBranch        *b_Jet_PrunedP4;   //!
   TBranch        *b_Jet_SoftDroppedP4;   //!
   TBranch        *b_Jet_NSubJetsTrimmed;   //!
   TBranch        *b_Jet_NSubJetsPruned;   //!
   TBranch        *b_Jet_NSubJetsSoftDropped;   //!
   TBranch        *b_Jet_ExclYmerge23;   //!
   TBranch        *b_Jet_ExclYmerge34;   //!
   TBranch        *b_Jet_ExclYmerge45;   //!
   TBranch        *b_Jet_ExclYmerge56;   //!
   TBranch        *b_Jet_Constituents;   //!
   TBranch        *b_Jet_Particles;   //!
   TBranch        *b_Jet_Area;   //!
   TBranch        *b_Jet_size;   //!
   TBranch        *b_LJet_;   //!
   TBranch        *b_LJet_fUniqueID;   //!
   TBranch        *b_LJet_fBits;   //!
   TBranch        *b_LJet_PT;   //!
   TBranch        *b_LJet_Eta;   //!
   TBranch        *b_LJet_Phi;   //!
   TBranch        *b_LJet_T;   //!
   TBranch        *b_LJet_Mass;   //!
   TBranch        *b_LJet_DeltaEta;   //!
   TBranch        *b_LJet_DeltaPhi;   //!
   TBranch        *b_LJet_Flavor;   //!
   TBranch        *b_LJet_FlavorAlgo;   //!
   TBranch        *b_LJet_FlavorPhys;   //!
   TBranch        *b_LJet_BTag;   //!
   TBranch        *b_LJet_BTagAlgo;   //!
   TBranch        *b_LJet_BTagPhys;   //!
   TBranch        *b_LJet_TauTag;   //!
   TBranch        *b_LJet_TauWeight;   //!
   TBranch        *b_LJet_Charge;   //!
   TBranch        *b_LJet_EhadOverEem;   //!
   TBranch        *b_LJet_NCharged;   //!
   TBranch        *b_LJet_NNeutrals;   //!
   TBranch        *b_LJet_Beta;   //!
   TBranch        *b_LJet_BetaStar;   //!
   TBranch        *b_LJet_MeanSqDeltaR;   //!
   TBranch        *b_LJet_PTD;   //!
   TBranch        *b_LJet_FracPt;   //!
   TBranch        *b_LJet_Tau;   //!
   TBranch        *b_LJet_SoftDroppedJet;   //!
   TBranch        *b_LJet_SoftDroppedSubJet1;   //!
   TBranch        *b_LJet_SoftDroppedSubJet2;   //!
   TBranch        *b_LJet_TrimmedP4;   //!
   TBranch        *b_LJet_PrunedP4;   //!
   TBranch        *b_LJet_SoftDroppedP4;   //!
   TBranch        *b_LJet_NSubJetsTrimmed;   //!
   TBranch        *b_LJet_NSubJetsPruned;   //!
   TBranch        *b_LJet_NSubJetsSoftDropped;   //!
   TBranch        *b_LJet_ExclYmerge23;   //!
   TBranch        *b_LJet_ExclYmerge34;   //!
   TBranch        *b_LJet_ExclYmerge45;   //!
   TBranch        *b_LJet_ExclYmerge56;   //!
   TBranch        *b_LJet_Constituents;   //!
   TBranch        *b_LJet_Particles;   //!
   TBranch        *b_LJet_Area;   //!
   TBranch        *b_LJet_size;   //!
   TBranch        *b_JetJES_;   //!
   TBranch        *b_JetJES_fUniqueID;   //!
   TBranch        *b_JetJES_fBits;   //!
   TBranch        *b_JetJES_PT;   //!
   TBranch        *b_JetJES_Eta;   //!
   TBranch        *b_JetJES_Phi;   //!
   TBranch        *b_JetJES_T;   //!
   TBranch        *b_JetJES_Mass;   //!
   TBranch        *b_JetJES_DeltaEta;   //!
   TBranch        *b_JetJES_DeltaPhi;   //!
   TBranch        *b_JetJES_Flavor;   //!
   TBranch        *b_JetJES_FlavorAlgo;   //!
   TBranch        *b_JetJES_FlavorPhys;   //!
   TBranch        *b_JetJES_BTag;   //!
   TBranch        *b_JetJES_BTagAlgo;   //!
   TBranch        *b_JetJES_BTagPhys;   //!
   TBranch        *b_JetJES_TauTag;   //!
   TBranch        *b_JetJES_TauWeight;   //!
   TBranch        *b_JetJES_Charge;   //!
   TBranch        *b_JetJES_EhadOverEem;   //!
   TBranch        *b_JetJES_NCharged;   //!
   TBranch        *b_JetJES_NNeutrals;   //!
   TBranch        *b_JetJES_Beta;   //!
   TBranch        *b_JetJES_BetaStar;   //!
   TBranch        *b_JetJES_MeanSqDeltaR;   //!
   TBranch        *b_JetJES_PTD;   //!
   TBranch        *b_JetJES_FracPt;   //!
   TBranch        *b_JetJES_Tau;   //!
   TBranch        *b_JetJES_SoftDroppedJet;   //!
   TBranch        *b_JetJES_SoftDroppedSubJet1;   //!
   TBranch        *b_JetJES_SoftDroppedSubJet2;   //!
   TBranch        *b_JetJES_TrimmedP4;   //!
   TBranch        *b_JetJES_PrunedP4;   //!
   TBranch        *b_JetJES_SoftDroppedP4;   //!
   TBranch        *b_JetJES_NSubJetsTrimmed;   //!
   TBranch        *b_JetJES_NSubJetsPruned;   //!
   TBranch        *b_JetJES_NSubJetsSoftDropped;   //!
   TBranch        *b_JetJES_ExclYmerge23;   //!
   TBranch        *b_JetJES_ExclYmerge34;   //!
   TBranch        *b_JetJES_ExclYmerge45;   //!
   TBranch        *b_JetJES_ExclYmerge56;   //!
   TBranch        *b_JetJES_Constituents;   //!
   TBranch        *b_JetJES_Particles;   //!
   TBranch        *b_JetJES_Area;   //!
   TBranch        *b_JetJES_size;   //!
   TBranch        *b_LJetJES_;   //!
   TBranch        *b_LJetJES_fUniqueID;   //!
   TBranch        *b_LJetJES_fBits;   //!
   TBranch        *b_LJetJES_PT;   //!
   TBranch        *b_LJetJES_Eta;   //!
   TBranch        *b_LJetJES_Phi;   //!
   TBranch        *b_LJetJES_T;   //!
   TBranch        *b_LJetJES_Mass;   //!
   TBranch        *b_LJetJES_DeltaEta;   //!
   TBranch        *b_LJetJES_DeltaPhi;   //!
   TBranch        *b_LJetJES_Flavor;   //!
   TBranch        *b_LJetJES_FlavorAlgo;   //!
   TBranch        *b_LJetJES_FlavorPhys;   //!
   TBranch        *b_LJetJES_BTag;   //!
   TBranch        *b_LJetJES_BTagAlgo;   //!
   TBranch        *b_LJetJES_BTagPhys;   //!
   TBranch        *b_LJetJES_TauTag;   //!
   TBranch        *b_LJetJES_TauWeight;   //!
   TBranch        *b_LJetJES_Charge;   //!
   TBranch        *b_LJetJES_EhadOverEem;   //!
   TBranch        *b_LJetJES_NCharged;   //!
   TBranch        *b_LJetJES_NNeutrals;   //!
   TBranch        *b_LJetJES_Beta;   //!
   TBranch        *b_LJetJES_BetaStar;   //!
   TBranch        *b_LJetJES_MeanSqDeltaR;   //!
   TBranch        *b_LJetJES_PTD;   //!
   TBranch        *b_LJetJES_FracPt;   //!
   TBranch        *b_LJetJES_Tau;   //!
   TBranch        *b_LJetJES_SoftDroppedJet;   //!
   TBranch        *b_LJetJES_SoftDroppedSubJet1;   //!
   TBranch        *b_LJetJES_SoftDroppedSubJet2;   //!
   TBranch        *b_LJetJES_TrimmedP4;   //!
   TBranch        *b_LJetJES_PrunedP4;   //!
   TBranch        *b_LJetJES_SoftDroppedP4;   //!
   TBranch        *b_LJetJES_NSubJetsTrimmed;   //!
   TBranch        *b_LJetJES_NSubJetsPruned;   //!
   TBranch        *b_LJetJES_NSubJetsSoftDropped;   //!
   TBranch        *b_LJetJES_ExclYmerge23;   //!
   TBranch        *b_LJetJES_ExclYmerge34;   //!
   TBranch        *b_LJetJES_ExclYmerge45;   //!
   TBranch        *b_LJetJES_ExclYmerge56;   //!
   TBranch        *b_LJetJES_Constituents;   //!
   TBranch        *b_LJetJES_Particles;   //!
   TBranch        *b_LJetJES_Area;   //!
   TBranch        *b_LJetJES_size;   //!
   TBranch        *b_Electron_;   //!
   TBranch        *b_Electron_fUniqueID;   //!
   TBranch        *b_Electron_fBits;   //!
   TBranch        *b_Electron_PT;   //!
   TBranch        *b_Electron_Eta;   //!
   TBranch        *b_Electron_Phi;   //!
   TBranch        *b_Electron_T;   //!
   TBranch        *b_Electron_Charge;   //!
   TBranch        *b_Electron_EhadOverEem;   //!
   TBranch        *b_Electron_Particle;   //!
   TBranch        *b_Electron_IsolationVar;   //!
   TBranch        *b_Electron_IsolationVarRhoCorr;   //!
   TBranch        *b_Electron_SumPtCharged;   //!
   TBranch        *b_Electron_SumPtNeutral;   //!
   TBranch        *b_Electron_SumPtChargedPU;   //!
   TBranch        *b_Electron_SumPt;   //!
   TBranch        *b_Electron_D0;   //!
   TBranch        *b_Electron_DZ;   //!
   TBranch        *b_Electron_ErrorD0;   //!
   TBranch        *b_Electron_ErrorDZ;   //!
   TBranch        *b_Electron_size;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_fUniqueID;   //!
   TBranch        *b_Photon_fBits;   //!
   TBranch        *b_Photon_PT;   //!
   TBranch        *b_Photon_Eta;   //!
   TBranch        *b_Photon_Phi;   //!
   TBranch        *b_Photon_E;   //!
   TBranch        *b_Photon_T;   //!
   TBranch        *b_Photon_EhadOverEem;   //!
   TBranch        *b_Photon_Particles;   //!
   TBranch        *b_Photon_IsolationVar;   //!
   TBranch        *b_Photon_IsolationVarRhoCorr;   //!
   TBranch        *b_Photon_SumPtCharged;   //!
   TBranch        *b_Photon_SumPtNeutral;   //!
   TBranch        *b_Photon_SumPtChargedPU;   //!
   TBranch        *b_Photon_SumPt;   //!
   TBranch        *b_Photon_Status;   //!
   TBranch        *b_Photon_size;   //!
   TBranch        *b_Muon_;   //!
   TBranch        *b_Muon_fUniqueID;   //!
   TBranch        *b_Muon_fBits;   //!
   TBranch        *b_Muon_PT;   //!
   TBranch        *b_Muon_Eta;   //!
   TBranch        *b_Muon_Phi;   //!
   TBranch        *b_Muon_T;   //!
   TBranch        *b_Muon_Charge;   //!
   TBranch        *b_Muon_Particle;   //!
   TBranch        *b_Muon_IsolationVar;   //!
   TBranch        *b_Muon_IsolationVarRhoCorr;   //!
   TBranch        *b_Muon_SumPtCharged;   //!
   TBranch        *b_Muon_SumPtNeutral;   //!
   TBranch        *b_Muon_SumPtChargedPU;   //!
   TBranch        *b_Muon_SumPt;   //!
   TBranch        *b_Muon_D0;   //!
   TBranch        *b_Muon_DZ;   //!
   TBranch        *b_Muon_ErrorD0;   //!
   TBranch        *b_Muon_ErrorDZ;   //!
   TBranch        *b_Muon_size;   //!
   TBranch        *b_MissingET_;   //!
   TBranch        *b_MissingET_fUniqueID;   //!
   TBranch        *b_MissingET_fBits;   //!
   TBranch        *b_MissingET_MET;   //!
   TBranch        *b_MissingET_Eta;   //!
   TBranch        *b_MissingET_Phi;   //!
   TBranch        *b_MissingET_size;   //!
   TBranch        *b_ScalarHT_;   //!
   TBranch        *b_ScalarHT_fUniqueID;   //!
   TBranch        *b_ScalarHT_fBits;   //!
   TBranch        *b_ScalarHT_HT;   //!
   TBranch        *b_ScalarHT_size;   //!

   Delphes(TTree *tree, TString Input, TString NameOfTree, TString PathToTree);
   virtual ~Delphes();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString Output, TString Tag, int NEvents);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Delphes_cxx
Delphes::Delphes(TTree *tree, TString Input, TString NameOfTree, TString PathToTree): fChain(0)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(Input);
      if (!f || !f->IsOpen()) {
         f = new TFile(Input);
      }
      f->GetObject(NameOfTree,tree);

   }
   Init(tree);
}
Delphes::~Delphes()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Delphes::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Delphes::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Delphes::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.ReadTime", Event_ReadTime, &b_Event_ReadTime);
   fChain->SetBranchAddress("Event.ProcTime", Event_ProcTime, &b_Event_ProcTime);
   fChain->SetBranchAddress("Event.ProcessID", Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.MPI", Event_MPI, &b_Event_MPI);
   fChain->SetBranchAddress("Event.Weight", Event_Weight, &b_Event_Weight);
   fChain->SetBranchAddress("Event.CrossSection", Event_CrossSection, &b_Event_CrossSection);
   fChain->SetBranchAddress("Event.CrossSectionError", Event_CrossSectionError, &b_Event_CrossSectionError);
   fChain->SetBranchAddress("Event.Scale", Event_Scale, &b_Event_Scale);
   fChain->SetBranchAddress("Event.AlphaQED", Event_AlphaQED, &b_Event_AlphaQED);
   fChain->SetBranchAddress("Event.AlphaQCD", Event_AlphaQCD, &b_Event_AlphaQCD);
   fChain->SetBranchAddress("Event.ID1", Event_ID1, &b_Event_ID1);
   fChain->SetBranchAddress("Event.ID2", Event_ID2, &b_Event_ID2);
   fChain->SetBranchAddress("Event.X1", Event_X1, &b_Event_X1);
   fChain->SetBranchAddress("Event.X2", Event_X2, &b_Event_X2);
   fChain->SetBranchAddress("Event.ScalePDF", Event_ScalePDF, &b_Event_ScalePDF);
   fChain->SetBranchAddress("Event.PDF1", Event_PDF1, &b_Event_PDF1);
   fChain->SetBranchAddress("Event.PDF2", Event_PDF2, &b_Event_PDF2);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("Weight", &Weight_, &b_Weight_);
   fChain->SetBranchAddress("Weight.fUniqueID", Weight_fUniqueID, &b_Weight_fUniqueID);
   fChain->SetBranchAddress("Weight.fBits", Weight_fBits, &b_Weight_fBits);
   fChain->SetBranchAddress("Weight.Weight", Weight_Weight, &b_Weight_Weight);
   fChain->SetBranchAddress("Weight_size", &Weight_size, &b_Weight_size);
   fChain->SetBranchAddress("GenLJet", &GenLJet_, &b_GenLJet_);
   fChain->SetBranchAddress("GenLJet.fUniqueID", GenLJet_fUniqueID, &b_GenLJet_fUniqueID);
   fChain->SetBranchAddress("GenLJet.fBits", GenLJet_fBits, &b_GenLJet_fBits);
   fChain->SetBranchAddress("GenLJet.PT", GenLJet_PT, &b_GenLJet_PT);
   fChain->SetBranchAddress("GenLJet.Eta", GenLJet_Eta, &b_GenLJet_Eta);
   fChain->SetBranchAddress("GenLJet.Phi", GenLJet_Phi, &b_GenLJet_Phi);
   fChain->SetBranchAddress("GenLJet.T", GenLJet_T, &b_GenLJet_T);
   fChain->SetBranchAddress("GenLJet.Mass", GenLJet_Mass, &b_GenLJet_Mass);
   fChain->SetBranchAddress("GenLJet.DeltaEta", GenLJet_DeltaEta, &b_GenLJet_DeltaEta);
   fChain->SetBranchAddress("GenLJet.DeltaPhi", GenLJet_DeltaPhi, &b_GenLJet_DeltaPhi);
   fChain->SetBranchAddress("GenLJet.Flavor", GenLJet_Flavor, &b_GenLJet_Flavor);
   fChain->SetBranchAddress("GenLJet.FlavorAlgo", GenLJet_FlavorAlgo, &b_GenLJet_FlavorAlgo);
   fChain->SetBranchAddress("GenLJet.FlavorPhys", GenLJet_FlavorPhys, &b_GenLJet_FlavorPhys);
   fChain->SetBranchAddress("GenLJet.BTag", GenLJet_BTag, &b_GenLJet_BTag);
   fChain->SetBranchAddress("GenLJet.BTagAlgo", GenLJet_BTagAlgo, &b_GenLJet_BTagAlgo);
   fChain->SetBranchAddress("GenLJet.BTagPhys", GenLJet_BTagPhys, &b_GenLJet_BTagPhys);
   fChain->SetBranchAddress("GenLJet.TauTag", GenLJet_TauTag, &b_GenLJet_TauTag);
   fChain->SetBranchAddress("GenLJet.TauWeight", GenLJet_TauWeight, &b_GenLJet_TauWeight);
   fChain->SetBranchAddress("GenLJet.Charge", GenLJet_Charge, &b_GenLJet_Charge);
   fChain->SetBranchAddress("GenLJet.EhadOverEem", GenLJet_EhadOverEem, &b_GenLJet_EhadOverEem);
   fChain->SetBranchAddress("GenLJet.NCharged", GenLJet_NCharged, &b_GenLJet_NCharged);
   fChain->SetBranchAddress("GenLJet.NNeutrals", GenLJet_NNeutrals, &b_GenLJet_NNeutrals);
   fChain->SetBranchAddress("GenLJet.Beta", GenLJet_Beta, &b_GenLJet_Beta);
   fChain->SetBranchAddress("GenLJet.BetaStar", GenLJet_BetaStar, &b_GenLJet_BetaStar);
   fChain->SetBranchAddress("GenLJet.MeanSqDeltaR", GenLJet_MeanSqDeltaR, &b_GenLJet_MeanSqDeltaR);
   fChain->SetBranchAddress("GenLJet.PTD", GenLJet_PTD, &b_GenLJet_PTD);
   fChain->SetBranchAddress("GenLJet.FracPt[5]", GenLJet_FracPt, &b_GenLJet_FracPt);
   fChain->SetBranchAddress("GenLJet.Tau[5]", GenLJet_Tau, &b_GenLJet_Tau);
   fChain->SetBranchAddress("GenLJet.SoftDroppedJet", GenLJet_SoftDroppedJet, &b_GenLJet_SoftDroppedJet);
   fChain->SetBranchAddress("GenLJet.SoftDroppedSubJet1", GenLJet_SoftDroppedSubJet1, &b_GenLJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("GenLJet.SoftDroppedSubJet2", GenLJet_SoftDroppedSubJet2, &b_GenLJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("GenLJet.TrimmedP4[5]", GenLJet_TrimmedP4, &b_GenLJet_TrimmedP4);
   fChain->SetBranchAddress("GenLJet.PrunedP4[5]", GenLJet_PrunedP4, &b_GenLJet_PrunedP4);
   fChain->SetBranchAddress("GenLJet.SoftDroppedP4[5]", GenLJet_SoftDroppedP4, &b_GenLJet_SoftDroppedP4);
   fChain->SetBranchAddress("GenLJet.NSubJetsTrimmed", GenLJet_NSubJetsTrimmed, &b_GenLJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenLJet.NSubJetsPruned", GenLJet_NSubJetsPruned, &b_GenLJet_NSubJetsPruned);
   fChain->SetBranchAddress("GenLJet.NSubJetsSoftDropped", GenLJet_NSubJetsSoftDropped, &b_GenLJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenLJet.ExclYmerge23", GenLJet_ExclYmerge23, &b_GenLJet_ExclYmerge23);
   fChain->SetBranchAddress("GenLJet.ExclYmerge34", GenLJet_ExclYmerge34, &b_GenLJet_ExclYmerge34);
   fChain->SetBranchAddress("GenLJet.ExclYmerge45", GenLJet_ExclYmerge45, &b_GenLJet_ExclYmerge45);
   fChain->SetBranchAddress("GenLJet.ExclYmerge56", GenLJet_ExclYmerge56, &b_GenLJet_ExclYmerge56);
   fChain->SetBranchAddress("GenLJet.Constituents", GenLJet_Constituents, &b_GenLJet_Constituents);
   fChain->SetBranchAddress("GenLJet.Particles", GenLJet_Particles, &b_GenLJet_Particles);
   fChain->SetBranchAddress("GenLJet.Area", GenLJet_Area, &b_GenLJet_Area);
   fChain->SetBranchAddress("GenLJet_size", &GenLJet_size, &b_GenLJet_size);
   fChain->SetBranchAddress("GenJet", &GenJet_, &b_GenJet_);
   fChain->SetBranchAddress("GenJet.fUniqueID", GenJet_fUniqueID, &b_GenJet_fUniqueID);
   fChain->SetBranchAddress("GenJet.fBits", GenJet_fBits, &b_GenJet_fBits);
   fChain->SetBranchAddress("GenJet.PT", GenJet_PT, &b_GenJet_PT);
   fChain->SetBranchAddress("GenJet.Eta", GenJet_Eta, &b_GenJet_Eta);
   fChain->SetBranchAddress("GenJet.Phi", GenJet_Phi, &b_GenJet_Phi);
   fChain->SetBranchAddress("GenJet.T", GenJet_T, &b_GenJet_T);
   fChain->SetBranchAddress("GenJet.Mass", GenJet_Mass, &b_GenJet_Mass);
   fChain->SetBranchAddress("GenJet.DeltaEta", GenJet_DeltaEta, &b_GenJet_DeltaEta);
   fChain->SetBranchAddress("GenJet.DeltaPhi", GenJet_DeltaPhi, &b_GenJet_DeltaPhi);
   fChain->SetBranchAddress("GenJet.Flavor", GenJet_Flavor, &b_GenJet_Flavor);
   fChain->SetBranchAddress("GenJet.FlavorAlgo", GenJet_FlavorAlgo, &b_GenJet_FlavorAlgo);
   fChain->SetBranchAddress("GenJet.FlavorPhys", GenJet_FlavorPhys, &b_GenJet_FlavorPhys);
   fChain->SetBranchAddress("GenJet.BTag", GenJet_BTag, &b_GenJet_BTag);
   fChain->SetBranchAddress("GenJet.BTagAlgo", GenJet_BTagAlgo, &b_GenJet_BTagAlgo);
   fChain->SetBranchAddress("GenJet.BTagPhys", GenJet_BTagPhys, &b_GenJet_BTagPhys);
   fChain->SetBranchAddress("GenJet.TauTag", GenJet_TauTag, &b_GenJet_TauTag);
   fChain->SetBranchAddress("GenJet.TauWeight", GenJet_TauWeight, &b_GenJet_TauWeight);
   fChain->SetBranchAddress("GenJet.Charge", GenJet_Charge, &b_GenJet_Charge);
   fChain->SetBranchAddress("GenJet.EhadOverEem", GenJet_EhadOverEem, &b_GenJet_EhadOverEem);
   fChain->SetBranchAddress("GenJet.NCharged", GenJet_NCharged, &b_GenJet_NCharged);
   fChain->SetBranchAddress("GenJet.NNeutrals", GenJet_NNeutrals, &b_GenJet_NNeutrals);
   fChain->SetBranchAddress("GenJet.Beta", GenJet_Beta, &b_GenJet_Beta);
   fChain->SetBranchAddress("GenJet.BetaStar", GenJet_BetaStar, &b_GenJet_BetaStar);
   fChain->SetBranchAddress("GenJet.MeanSqDeltaR", GenJet_MeanSqDeltaR, &b_GenJet_MeanSqDeltaR);
   fChain->SetBranchAddress("GenJet.PTD", GenJet_PTD, &b_GenJet_PTD);
   fChain->SetBranchAddress("GenJet.FracPt[5]", GenJet_FracPt, &b_GenJet_FracPt);
   fChain->SetBranchAddress("GenJet.Tau[5]", GenJet_Tau, &b_GenJet_Tau);
   fChain->SetBranchAddress("GenJet.SoftDroppedJet", GenJet_SoftDroppedJet, &b_GenJet_SoftDroppedJet);
   fChain->SetBranchAddress("GenJet.SoftDroppedSubJet1", GenJet_SoftDroppedSubJet1, &b_GenJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("GenJet.SoftDroppedSubJet2", GenJet_SoftDroppedSubJet2, &b_GenJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("GenJet.TrimmedP4[5]", GenJet_TrimmedP4, &b_GenJet_TrimmedP4);
   fChain->SetBranchAddress("GenJet.PrunedP4[5]", GenJet_PrunedP4, &b_GenJet_PrunedP4);
   fChain->SetBranchAddress("GenJet.SoftDroppedP4[5]", GenJet_SoftDroppedP4, &b_GenJet_SoftDroppedP4);
   fChain->SetBranchAddress("GenJet.NSubJetsTrimmed", GenJet_NSubJetsTrimmed, &b_GenJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenJet.NSubJetsPruned", GenJet_NSubJetsPruned, &b_GenJet_NSubJetsPruned);
   fChain->SetBranchAddress("GenJet.NSubJetsSoftDropped", GenJet_NSubJetsSoftDropped, &b_GenJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenJet.ExclYmerge23", GenJet_ExclYmerge23, &b_GenJet_ExclYmerge23);
   fChain->SetBranchAddress("GenJet.ExclYmerge34", GenJet_ExclYmerge34, &b_GenJet_ExclYmerge34);
   fChain->SetBranchAddress("GenJet.ExclYmerge45", GenJet_ExclYmerge45, &b_GenJet_ExclYmerge45);
   fChain->SetBranchAddress("GenJet.ExclYmerge56", GenJet_ExclYmerge56, &b_GenJet_ExclYmerge56);
   fChain->SetBranchAddress("GenJet.Constituents", GenJet_Constituents, &b_GenJet_Constituents);
   fChain->SetBranchAddress("GenJet.Particles", GenJet_Particles, &b_GenJet_Particles);
   fChain->SetBranchAddress("GenJet.Area", GenJet_Area, &b_GenJet_Area);
   fChain->SetBranchAddress("GenJet_size", &GenJet_size, &b_GenJet_size);
   fChain->SetBranchAddress("GenElectron", &GenElectron_, &b_GenElectron_);
   fChain->SetBranchAddress("GenElectron.fUniqueID", GenElectron_fUniqueID, &b_GenElectron_fUniqueID);
   fChain->SetBranchAddress("GenElectron.fBits", GenElectron_fBits, &b_GenElectron_fBits);
   fChain->SetBranchAddress("GenElectron.PT", GenElectron_PT, &b_GenElectron_PT);
   fChain->SetBranchAddress("GenElectron.Eta", GenElectron_Eta, &b_GenElectron_Eta);
   fChain->SetBranchAddress("GenElectron.Phi", GenElectron_Phi, &b_GenElectron_Phi);
   fChain->SetBranchAddress("GenElectron.T", GenElectron_T, &b_GenElectron_T);
   fChain->SetBranchAddress("GenElectron.Charge", GenElectron_Charge, &b_GenElectron_Charge);
   fChain->SetBranchAddress("GenElectron.EhadOverEem", GenElectron_EhadOverEem, &b_GenElectron_EhadOverEem);
   fChain->SetBranchAddress("GenElectron.Particle", GenElectron_Particle, &b_GenElectron_Particle);
   fChain->SetBranchAddress("GenElectron.IsolationVar", GenElectron_IsolationVar, &b_GenElectron_IsolationVar);
   fChain->SetBranchAddress("GenElectron.IsolationVarRhoCorr", GenElectron_IsolationVarRhoCorr, &b_GenElectron_IsolationVarRhoCorr);
   fChain->SetBranchAddress("GenElectron.SumPtCharged", GenElectron_SumPtCharged, &b_GenElectron_SumPtCharged);
   fChain->SetBranchAddress("GenElectron.SumPtNeutral", GenElectron_SumPtNeutral, &b_GenElectron_SumPtNeutral);
   fChain->SetBranchAddress("GenElectron.SumPtChargedPU", GenElectron_SumPtChargedPU, &b_GenElectron_SumPtChargedPU);
   fChain->SetBranchAddress("GenElectron.SumPt", GenElectron_SumPt, &b_GenElectron_SumPt);
   fChain->SetBranchAddress("GenElectron.D0", GenElectron_D0, &b_GenElectron_D0);
   fChain->SetBranchAddress("GenElectron.DZ", GenElectron_DZ, &b_GenElectron_DZ);
   fChain->SetBranchAddress("GenElectron.ErrorD0", GenElectron_ErrorD0, &b_GenElectron_ErrorD0);
   fChain->SetBranchAddress("GenElectron.ErrorDZ", GenElectron_ErrorDZ, &b_GenElectron_ErrorDZ);
   fChain->SetBranchAddress("GenElectron_size", &GenElectron_size, &b_GenElectron_size);
   fChain->SetBranchAddress("GenMuon", &GenMuon_, &b_GenMuon_);
   fChain->SetBranchAddress("GenMuon.fUniqueID", GenMuon_fUniqueID, &b_GenMuon_fUniqueID);
   fChain->SetBranchAddress("GenMuon.fBits", GenMuon_fBits, &b_GenMuon_fBits);
   fChain->SetBranchAddress("GenMuon.PT", GenMuon_PT, &b_GenMuon_PT);
   fChain->SetBranchAddress("GenMuon.Eta", GenMuon_Eta, &b_GenMuon_Eta);
   fChain->SetBranchAddress("GenMuon.Phi", GenMuon_Phi, &b_GenMuon_Phi);
   fChain->SetBranchAddress("GenMuon.T", GenMuon_T, &b_GenMuon_T);
   fChain->SetBranchAddress("GenMuon.Charge", GenMuon_Charge, &b_GenMuon_Charge);
   fChain->SetBranchAddress("GenMuon.Particle", GenMuon_Particle, &b_GenMuon_Particle);
   fChain->SetBranchAddress("GenMuon.IsolationVar", GenMuon_IsolationVar, &b_GenMuon_IsolationVar);
   fChain->SetBranchAddress("GenMuon.IsolationVarRhoCorr", GenMuon_IsolationVarRhoCorr, &b_GenMuon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("GenMuon.SumPtCharged", GenMuon_SumPtCharged, &b_GenMuon_SumPtCharged);
   fChain->SetBranchAddress("GenMuon.SumPtNeutral", GenMuon_SumPtNeutral, &b_GenMuon_SumPtNeutral);
   fChain->SetBranchAddress("GenMuon.SumPtChargedPU", GenMuon_SumPtChargedPU, &b_GenMuon_SumPtChargedPU);
   fChain->SetBranchAddress("GenMuon.SumPt", GenMuon_SumPt, &b_GenMuon_SumPt);
   fChain->SetBranchAddress("GenMuon.D0", GenMuon_D0, &b_GenMuon_D0);
   fChain->SetBranchAddress("GenMuon.DZ", GenMuon_DZ, &b_GenMuon_DZ);
   fChain->SetBranchAddress("GenMuon.ErrorD0", GenMuon_ErrorD0, &b_GenMuon_ErrorD0);
   fChain->SetBranchAddress("GenMuon.ErrorDZ", GenMuon_ErrorDZ, &b_GenMuon_ErrorDZ);
   fChain->SetBranchAddress("GenMuon_size", &GenMuon_size, &b_GenMuon_size);
   fChain->SetBranchAddress("GenTop", &GenTop_, &b_GenTop_);
   fChain->SetBranchAddress("GenTop.fUniqueID", GenTop_fUniqueID, &b_GenTop_fUniqueID);
   fChain->SetBranchAddress("GenTop.fBits", GenTop_fBits, &b_GenTop_fBits);
   fChain->SetBranchAddress("GenTop.PID", GenTop_PID, &b_GenTop_PID);
   fChain->SetBranchAddress("GenTop.Status", GenTop_Status, &b_GenTop_Status);
   fChain->SetBranchAddress("GenTop.IsPU", GenTop_IsPU, &b_GenTop_IsPU);
   fChain->SetBranchAddress("GenTop.M1", GenTop_M1, &b_GenTop_M1);
   fChain->SetBranchAddress("GenTop.M2", GenTop_M2, &b_GenTop_M2);
   fChain->SetBranchAddress("GenTop.D1", GenTop_D1, &b_GenTop_D1);
   fChain->SetBranchAddress("GenTop.D2", GenTop_D2, &b_GenTop_D2);
   fChain->SetBranchAddress("GenTop.Charge", GenTop_Charge, &b_GenTop_Charge);
   fChain->SetBranchAddress("GenTop.Mass", GenTop_Mass, &b_GenTop_Mass);
   fChain->SetBranchAddress("GenTop.E", GenTop_E, &b_GenTop_E);
   fChain->SetBranchAddress("GenTop.Px", GenTop_Px, &b_GenTop_Px);
   fChain->SetBranchAddress("GenTop.Py", GenTop_Py, &b_GenTop_Py);
   fChain->SetBranchAddress("GenTop.Pz", GenTop_Pz, &b_GenTop_Pz);
   fChain->SetBranchAddress("GenTop.P", GenTop_P, &b_GenTop_P);
   fChain->SetBranchAddress("GenTop.PT", GenTop_PT, &b_GenTop_PT);
   fChain->SetBranchAddress("GenTop.Eta", GenTop_Eta, &b_GenTop_Eta);
   fChain->SetBranchAddress("GenTop.Phi", GenTop_Phi, &b_GenTop_Phi);
   fChain->SetBranchAddress("GenTop.Rapidity", GenTop_Rapidity, &b_GenTop_Rapidity);
   fChain->SetBranchAddress("GenTop.CtgTheta", GenTop_CtgTheta, &b_GenTop_CtgTheta);
   fChain->SetBranchAddress("GenTop.D0", GenTop_D0, &b_GenTop_D0);
   fChain->SetBranchAddress("GenTop.DZ", GenTop_DZ, &b_GenTop_DZ);
   fChain->SetBranchAddress("GenTop.T", GenTop_T, &b_GenTop_T);
   fChain->SetBranchAddress("GenTop.X", GenTop_X, &b_GenTop_X);
   fChain->SetBranchAddress("GenTop.Y", GenTop_Y, &b_GenTop_Y);
   fChain->SetBranchAddress("GenTop.Z", GenTop_Z, &b_GenTop_Z);
   fChain->SetBranchAddress("GenTop_size", &GenTop_size, &b_GenTop_size);
   fChain->SetBranchAddress("GenPhoton", &GenPhoton_, &b_GenPhoton_);
   fChain->SetBranchAddress("GenPhoton.fUniqueID", GenPhoton_fUniqueID, &b_GenPhoton_fUniqueID);
   fChain->SetBranchAddress("GenPhoton.fBits", GenPhoton_fBits, &b_GenPhoton_fBits);
   fChain->SetBranchAddress("GenPhoton.PT", GenPhoton_PT, &b_GenPhoton_PT);
   fChain->SetBranchAddress("GenPhoton.Eta", GenPhoton_Eta, &b_GenPhoton_Eta);
   fChain->SetBranchAddress("GenPhoton.Phi", GenPhoton_Phi, &b_GenPhoton_Phi);
   fChain->SetBranchAddress("GenPhoton.E", GenPhoton_E, &b_GenPhoton_E);
   fChain->SetBranchAddress("GenPhoton.T", GenPhoton_T, &b_GenPhoton_T);
   fChain->SetBranchAddress("GenPhoton.EhadOverEem", GenPhoton_EhadOverEem, &b_GenPhoton_EhadOverEem);
   fChain->SetBranchAddress("GenPhoton.Particles", GenPhoton_Particles, &b_GenPhoton_Particles);
   fChain->SetBranchAddress("GenPhoton.IsolationVar", GenPhoton_IsolationVar, &b_GenPhoton_IsolationVar);
   fChain->SetBranchAddress("GenPhoton.IsolationVarRhoCorr", GenPhoton_IsolationVarRhoCorr, &b_GenPhoton_IsolationVarRhoCorr);
   fChain->SetBranchAddress("GenPhoton.SumPtCharged", GenPhoton_SumPtCharged, &b_GenPhoton_SumPtCharged);
   fChain->SetBranchAddress("GenPhoton.SumPtNeutral", GenPhoton_SumPtNeutral, &b_GenPhoton_SumPtNeutral);
   fChain->SetBranchAddress("GenPhoton.SumPtChargedPU", GenPhoton_SumPtChargedPU, &b_GenPhoton_SumPtChargedPU);
   fChain->SetBranchAddress("GenPhoton.SumPt", GenPhoton_SumPt, &b_GenPhoton_SumPt);
   fChain->SetBranchAddress("GenPhoton.Status", GenPhoton_Status, &b_GenPhoton_Status);
   fChain->SetBranchAddress("GenPhoton_size", &GenPhoton_size, &b_GenPhoton_size);
   fChain->SetBranchAddress("GenMissingET", &GenMissingET_, &b_GenMissingET_);
   fChain->SetBranchAddress("GenMissingET.fUniqueID", GenMissingET_fUniqueID, &b_GenMissingET_fUniqueID);
   fChain->SetBranchAddress("GenMissingET.fBits", GenMissingET_fBits, &b_GenMissingET_fBits);
   fChain->SetBranchAddress("GenMissingET.MET", GenMissingET_MET, &b_GenMissingET_MET);
   fChain->SetBranchAddress("GenMissingET.Eta", GenMissingET_Eta, &b_GenMissingET_Eta);
   fChain->SetBranchAddress("GenMissingET.Phi", GenMissingET_Phi, &b_GenMissingET_Phi);
   fChain->SetBranchAddress("GenMissingET_size", &GenMissingET_size, &b_GenMissingET_size);
   fChain->SetBranchAddress("GenZPrime", &GenZPrime_, &b_GenZPrime_);
   fChain->SetBranchAddress("GenZPrime.fUniqueID", GenZPrime_fUniqueID, &b_GenZPrime_fUniqueID);
   fChain->SetBranchAddress("GenZPrime.fBits", GenZPrime_fBits, &b_GenZPrime_fBits);
   fChain->SetBranchAddress("GenZPrime.PID", GenZPrime_PID, &b_GenZPrime_PID);
   fChain->SetBranchAddress("GenZPrime.Status", GenZPrime_Status, &b_GenZPrime_Status);
   fChain->SetBranchAddress("GenZPrime.IsPU", GenZPrime_IsPU, &b_GenZPrime_IsPU);
   fChain->SetBranchAddress("GenZPrime.M1", GenZPrime_M1, &b_GenZPrime_M1);
   fChain->SetBranchAddress("GenZPrime.M2", GenZPrime_M2, &b_GenZPrime_M2);
   fChain->SetBranchAddress("GenZPrime.D1", GenZPrime_D1, &b_GenZPrime_D1);
   fChain->SetBranchAddress("GenZPrime.D2", GenZPrime_D2, &b_GenZPrime_D2);
   fChain->SetBranchAddress("GenZPrime.Charge", GenZPrime_Charge, &b_GenZPrime_Charge);
   fChain->SetBranchAddress("GenZPrime.Mass", GenZPrime_Mass, &b_GenZPrime_Mass);
   fChain->SetBranchAddress("GenZPrime.E", GenZPrime_E, &b_GenZPrime_E);
   fChain->SetBranchAddress("GenZPrime.Px", GenZPrime_Px, &b_GenZPrime_Px);
   fChain->SetBranchAddress("GenZPrime.Py", GenZPrime_Py, &b_GenZPrime_Py);
   fChain->SetBranchAddress("GenZPrime.Pz", GenZPrime_Pz, &b_GenZPrime_Pz);
   fChain->SetBranchAddress("GenZPrime.P", GenZPrime_P, &b_GenZPrime_P);
   fChain->SetBranchAddress("GenZPrime.PT", GenZPrime_PT, &b_GenZPrime_PT);
   fChain->SetBranchAddress("GenZPrime.Eta", GenZPrime_Eta, &b_GenZPrime_Eta);
   fChain->SetBranchAddress("GenZPrime.Phi", GenZPrime_Phi, &b_GenZPrime_Phi);
   fChain->SetBranchAddress("GenZPrime.Rapidity", GenZPrime_Rapidity, &b_GenZPrime_Rapidity);
   fChain->SetBranchAddress("GenZPrime.CtgTheta", GenZPrime_CtgTheta, &b_GenZPrime_CtgTheta);
   fChain->SetBranchAddress("GenZPrime.D0", GenZPrime_D0, &b_GenZPrime_D0);
   fChain->SetBranchAddress("GenZPrime.DZ", GenZPrime_DZ, &b_GenZPrime_DZ);
   fChain->SetBranchAddress("GenZPrime.T", GenZPrime_T, &b_GenZPrime_T);
   fChain->SetBranchAddress("GenZPrime.X", GenZPrime_X, &b_GenZPrime_X);
   fChain->SetBranchAddress("GenZPrime.Y", GenZPrime_Y, &b_GenZPrime_Y);
   fChain->SetBranchAddress("GenZPrime.Z", GenZPrime_Z, &b_GenZPrime_Z);
   fChain->SetBranchAddress("GenZPrime_size", &GenZPrime_size, &b_GenZPrime_size);
   fChain->SetBranchAddress("GenW", &GenW_, &b_GenW_);
   fChain->SetBranchAddress("GenW.fUniqueID", GenW_fUniqueID, &b_GenW_fUniqueID);
   fChain->SetBranchAddress("GenW.fBits", GenW_fBits, &b_GenW_fBits);
   fChain->SetBranchAddress("GenW.PID", GenW_PID, &b_GenW_PID);
   fChain->SetBranchAddress("GenW.Status", GenW_Status, &b_GenW_Status);
   fChain->SetBranchAddress("GenW.IsPU", GenW_IsPU, &b_GenW_IsPU);
   fChain->SetBranchAddress("GenW.M1", GenW_M1, &b_GenW_M1);
   fChain->SetBranchAddress("GenW.M2", GenW_M2, &b_GenW_M2);
   fChain->SetBranchAddress("GenW.D1", GenW_D1, &b_GenW_D1);
   fChain->SetBranchAddress("GenW.D2", GenW_D2, &b_GenW_D2);
   fChain->SetBranchAddress("GenW.Charge", GenW_Charge, &b_GenW_Charge);
   fChain->SetBranchAddress("GenW.Mass", GenW_Mass, &b_GenW_Mass);
   fChain->SetBranchAddress("GenW.E", GenW_E, &b_GenW_E);
   fChain->SetBranchAddress("GenW.Px", GenW_Px, &b_GenW_Px);
   fChain->SetBranchAddress("GenW.Py", GenW_Py, &b_GenW_Py);
   fChain->SetBranchAddress("GenW.Pz", GenW_Pz, &b_GenW_Pz);
   fChain->SetBranchAddress("GenW.P", GenW_P, &b_GenW_P);
   fChain->SetBranchAddress("GenW.PT", GenW_PT, &b_GenW_PT);
   fChain->SetBranchAddress("GenW.Eta", GenW_Eta, &b_GenW_Eta);
   fChain->SetBranchAddress("GenW.Phi", GenW_Phi, &b_GenW_Phi);
   fChain->SetBranchAddress("GenW.Rapidity", GenW_Rapidity, &b_GenW_Rapidity);
   fChain->SetBranchAddress("GenW.CtgTheta", GenW_CtgTheta, &b_GenW_CtgTheta);
   fChain->SetBranchAddress("GenW.D0", GenW_D0, &b_GenW_D0);
   fChain->SetBranchAddress("GenW.DZ", GenW_DZ, &b_GenW_DZ);
   fChain->SetBranchAddress("GenW.T", GenW_T, &b_GenW_T);
   fChain->SetBranchAddress("GenW.X", GenW_X, &b_GenW_X);
   fChain->SetBranchAddress("GenW.Y", GenW_Y, &b_GenW_Y);
   fChain->SetBranchAddress("GenW.Z", GenW_Z, &b_GenW_Z);
   fChain->SetBranchAddress("GenW_size", &GenW_size, &b_GenW_size);
   fChain->SetBranchAddress("GenBhadrons", &GenBhadrons_, &b_GenBhadrons_);
   fChain->SetBranchAddress("GenBhadrons.fUniqueID", GenBhadrons_fUniqueID, &b_GenBhadrons_fUniqueID);
   fChain->SetBranchAddress("GenBhadrons.fBits", GenBhadrons_fBits, &b_GenBhadrons_fBits);
   fChain->SetBranchAddress("GenBhadrons.PID", GenBhadrons_PID, &b_GenBhadrons_PID);
   fChain->SetBranchAddress("GenBhadrons.Status", GenBhadrons_Status, &b_GenBhadrons_Status);
   fChain->SetBranchAddress("GenBhadrons.IsPU", GenBhadrons_IsPU, &b_GenBhadrons_IsPU);
   fChain->SetBranchAddress("GenBhadrons.M1", GenBhadrons_M1, &b_GenBhadrons_M1);
   fChain->SetBranchAddress("GenBhadrons.M2", GenBhadrons_M2, &b_GenBhadrons_M2);
   fChain->SetBranchAddress("GenBhadrons.D1", GenBhadrons_D1, &b_GenBhadrons_D1);
   fChain->SetBranchAddress("GenBhadrons.D2", GenBhadrons_D2, &b_GenBhadrons_D2);
   fChain->SetBranchAddress("GenBhadrons.Charge", GenBhadrons_Charge, &b_GenBhadrons_Charge);
   fChain->SetBranchAddress("GenBhadrons.Mass", GenBhadrons_Mass, &b_GenBhadrons_Mass);
   fChain->SetBranchAddress("GenBhadrons.E", GenBhadrons_E, &b_GenBhadrons_E);
   fChain->SetBranchAddress("GenBhadrons.Px", GenBhadrons_Px, &b_GenBhadrons_Px);
   fChain->SetBranchAddress("GenBhadrons.Py", GenBhadrons_Py, &b_GenBhadrons_Py);
   fChain->SetBranchAddress("GenBhadrons.Pz", GenBhadrons_Pz, &b_GenBhadrons_Pz);
   fChain->SetBranchAddress("GenBhadrons.P", GenBhadrons_P, &b_GenBhadrons_P);
   fChain->SetBranchAddress("GenBhadrons.PT", GenBhadrons_PT, &b_GenBhadrons_PT);
   fChain->SetBranchAddress("GenBhadrons.Eta", GenBhadrons_Eta, &b_GenBhadrons_Eta);
   fChain->SetBranchAddress("GenBhadrons.Phi", GenBhadrons_Phi, &b_GenBhadrons_Phi);
   fChain->SetBranchAddress("GenBhadrons.Rapidity", GenBhadrons_Rapidity, &b_GenBhadrons_Rapidity);
   fChain->SetBranchAddress("GenBhadrons.CtgTheta", GenBhadrons_CtgTheta, &b_GenBhadrons_CtgTheta);
   fChain->SetBranchAddress("GenBhadrons.D0", GenBhadrons_D0, &b_GenBhadrons_D0);
   fChain->SetBranchAddress("GenBhadrons.DZ", GenBhadrons_DZ, &b_GenBhadrons_DZ);
   fChain->SetBranchAddress("GenBhadrons.T", GenBhadrons_T, &b_GenBhadrons_T);
   fChain->SetBranchAddress("GenBhadrons.X", GenBhadrons_X, &b_GenBhadrons_X);
   fChain->SetBranchAddress("GenBhadrons.Y", GenBhadrons_Y, &b_GenBhadrons_Y);
   fChain->SetBranchAddress("GenBhadrons.Z", GenBhadrons_Z, &b_GenBhadrons_Z);
   fChain->SetBranchAddress("GenBhadrons_size", &GenBhadrons_size, &b_GenBhadrons_size);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.fUniqueID", Jet_fUniqueID, &b_Jet_fUniqueID);
   fChain->SetBranchAddress("Jet.fBits", Jet_fBits, &b_Jet_fBits);
   fChain->SetBranchAddress("Jet.PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet.Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet.Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet.T", Jet_T, &b_Jet_T);
   fChain->SetBranchAddress("Jet.Mass", Jet_Mass, &b_Jet_Mass);
   fChain->SetBranchAddress("Jet.DeltaEta", Jet_DeltaEta, &b_Jet_DeltaEta);
   fChain->SetBranchAddress("Jet.DeltaPhi", Jet_DeltaPhi, &b_Jet_DeltaPhi);
   fChain->SetBranchAddress("Jet.Flavor", Jet_Flavor, &b_Jet_Flavor);
   fChain->SetBranchAddress("Jet.FlavorAlgo", Jet_FlavorAlgo, &b_Jet_FlavorAlgo);
   fChain->SetBranchAddress("Jet.FlavorPhys", Jet_FlavorPhys, &b_Jet_FlavorPhys);
   fChain->SetBranchAddress("Jet.BTag", Jet_BTag, &b_Jet_BTag);
   fChain->SetBranchAddress("Jet.BTagAlgo", Jet_BTagAlgo, &b_Jet_BTagAlgo);
   fChain->SetBranchAddress("Jet.BTagPhys", Jet_BTagPhys, &b_Jet_BTagPhys);
   fChain->SetBranchAddress("Jet.TauTag", Jet_TauTag, &b_Jet_TauTag);
   fChain->SetBranchAddress("Jet.TauWeight", Jet_TauWeight, &b_Jet_TauWeight);
   fChain->SetBranchAddress("Jet.Charge", Jet_Charge, &b_Jet_Charge);
   fChain->SetBranchAddress("Jet.EhadOverEem", Jet_EhadOverEem, &b_Jet_EhadOverEem);
   fChain->SetBranchAddress("Jet.NCharged", Jet_NCharged, &b_Jet_NCharged);
   fChain->SetBranchAddress("Jet.NNeutrals", Jet_NNeutrals, &b_Jet_NNeutrals);
   fChain->SetBranchAddress("Jet.Beta", Jet_Beta, &b_Jet_Beta);
   fChain->SetBranchAddress("Jet.BetaStar", Jet_BetaStar, &b_Jet_BetaStar);
   fChain->SetBranchAddress("Jet.MeanSqDeltaR", Jet_MeanSqDeltaR, &b_Jet_MeanSqDeltaR);
   fChain->SetBranchAddress("Jet.PTD", Jet_PTD, &b_Jet_PTD);
   fChain->SetBranchAddress("Jet.FracPt[5]", Jet_FracPt, &b_Jet_FracPt);
   fChain->SetBranchAddress("Jet.Tau[5]", Jet_Tau, &b_Jet_Tau);
   fChain->SetBranchAddress("Jet.SoftDroppedJet", Jet_SoftDroppedJet, &b_Jet_SoftDroppedJet);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet1", Jet_SoftDroppedSubJet1, &b_Jet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet2", Jet_SoftDroppedSubJet2, &b_Jet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("Jet.TrimmedP4[5]", Jet_TrimmedP4, &b_Jet_TrimmedP4);
   fChain->SetBranchAddress("Jet.PrunedP4[5]", Jet_PrunedP4, &b_Jet_PrunedP4);
   fChain->SetBranchAddress("Jet.SoftDroppedP4[5]", Jet_SoftDroppedP4, &b_Jet_SoftDroppedP4);
   fChain->SetBranchAddress("Jet.NSubJetsTrimmed", Jet_NSubJetsTrimmed, &b_Jet_NSubJetsTrimmed);
   fChain->SetBranchAddress("Jet.NSubJetsPruned", Jet_NSubJetsPruned, &b_Jet_NSubJetsPruned);
   fChain->SetBranchAddress("Jet.NSubJetsSoftDropped", Jet_NSubJetsSoftDropped, &b_Jet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("Jet.ExclYmerge23", Jet_ExclYmerge23, &b_Jet_ExclYmerge23);
   fChain->SetBranchAddress("Jet.ExclYmerge34", Jet_ExclYmerge34, &b_Jet_ExclYmerge34);
   fChain->SetBranchAddress("Jet.ExclYmerge45", Jet_ExclYmerge45, &b_Jet_ExclYmerge45);
   fChain->SetBranchAddress("Jet.ExclYmerge56", Jet_ExclYmerge56, &b_Jet_ExclYmerge56);
   fChain->SetBranchAddress("Jet.Constituents", Jet_Constituents, &b_Jet_Constituents);
   fChain->SetBranchAddress("Jet.Particles", Jet_Particles, &b_Jet_Particles);
   fChain->SetBranchAddress("Jet.Area", Jet_Area, &b_Jet_Area);
   fChain->SetBranchAddress("Jet_size", &Jet_size, &b_Jet_size);
   fChain->SetBranchAddress("LJet", &LJet_, &b_LJet_);
   fChain->SetBranchAddress("LJet.fUniqueID", LJet_fUniqueID, &b_LJet_fUniqueID);
   fChain->SetBranchAddress("LJet.fBits", LJet_fBits, &b_LJet_fBits);
   fChain->SetBranchAddress("LJet.PT", LJet_PT, &b_LJet_PT);
   fChain->SetBranchAddress("LJet.Eta", LJet_Eta, &b_LJet_Eta);
   fChain->SetBranchAddress("LJet.Phi", LJet_Phi, &b_LJet_Phi);
   fChain->SetBranchAddress("LJet.T", LJet_T, &b_LJet_T);
   fChain->SetBranchAddress("LJet.Mass", LJet_Mass, &b_LJet_Mass);
   fChain->SetBranchAddress("LJet.DeltaEta", LJet_DeltaEta, &b_LJet_DeltaEta);
   fChain->SetBranchAddress("LJet.DeltaPhi", LJet_DeltaPhi, &b_LJet_DeltaPhi);
   fChain->SetBranchAddress("LJet.Flavor", LJet_Flavor, &b_LJet_Flavor);
   fChain->SetBranchAddress("LJet.FlavorAlgo", LJet_FlavorAlgo, &b_LJet_FlavorAlgo);
   fChain->SetBranchAddress("LJet.FlavorPhys", LJet_FlavorPhys, &b_LJet_FlavorPhys);
   fChain->SetBranchAddress("LJet.BTag", LJet_BTag, &b_LJet_BTag);
   fChain->SetBranchAddress("LJet.BTagAlgo", LJet_BTagAlgo, &b_LJet_BTagAlgo);
   fChain->SetBranchAddress("LJet.BTagPhys", LJet_BTagPhys, &b_LJet_BTagPhys);
   fChain->SetBranchAddress("LJet.TauTag", LJet_TauTag, &b_LJet_TauTag);
   fChain->SetBranchAddress("LJet.TauWeight", LJet_TauWeight, &b_LJet_TauWeight);
   fChain->SetBranchAddress("LJet.Charge", LJet_Charge, &b_LJet_Charge);
   fChain->SetBranchAddress("LJet.EhadOverEem", LJet_EhadOverEem, &b_LJet_EhadOverEem);
   fChain->SetBranchAddress("LJet.NCharged", LJet_NCharged, &b_LJet_NCharged);
   fChain->SetBranchAddress("LJet.NNeutrals", LJet_NNeutrals, &b_LJet_NNeutrals);
   fChain->SetBranchAddress("LJet.Beta", LJet_Beta, &b_LJet_Beta);
   fChain->SetBranchAddress("LJet.BetaStar", LJet_BetaStar, &b_LJet_BetaStar);
   fChain->SetBranchAddress("LJet.MeanSqDeltaR", LJet_MeanSqDeltaR, &b_LJet_MeanSqDeltaR);
   fChain->SetBranchAddress("LJet.PTD", LJet_PTD, &b_LJet_PTD);
   fChain->SetBranchAddress("LJet.FracPt[5]", LJet_FracPt, &b_LJet_FracPt);
   fChain->SetBranchAddress("LJet.Tau[5]", LJet_Tau, &b_LJet_Tau);
   fChain->SetBranchAddress("LJet.SoftDroppedJet", LJet_SoftDroppedJet, &b_LJet_SoftDroppedJet);
   fChain->SetBranchAddress("LJet.SoftDroppedSubJet1", LJet_SoftDroppedSubJet1, &b_LJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("LJet.SoftDroppedSubJet2", LJet_SoftDroppedSubJet2, &b_LJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("LJet.TrimmedP4[5]", LJet_TrimmedP4, &b_LJet_TrimmedP4);
   fChain->SetBranchAddress("LJet.PrunedP4[5]", LJet_PrunedP4, &b_LJet_PrunedP4);
   fChain->SetBranchAddress("LJet.SoftDroppedP4[5]", LJet_SoftDroppedP4, &b_LJet_SoftDroppedP4);
   fChain->SetBranchAddress("LJet.NSubJetsTrimmed", LJet_NSubJetsTrimmed, &b_LJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("LJet.NSubJetsPruned", LJet_NSubJetsPruned, &b_LJet_NSubJetsPruned);
   fChain->SetBranchAddress("LJet.NSubJetsSoftDropped", LJet_NSubJetsSoftDropped, &b_LJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("LJet.ExclYmerge23", LJet_ExclYmerge23, &b_LJet_ExclYmerge23);
   fChain->SetBranchAddress("LJet.ExclYmerge34", LJet_ExclYmerge34, &b_LJet_ExclYmerge34);
   fChain->SetBranchAddress("LJet.ExclYmerge45", LJet_ExclYmerge45, &b_LJet_ExclYmerge45);
   fChain->SetBranchAddress("LJet.ExclYmerge56", LJet_ExclYmerge56, &b_LJet_ExclYmerge56);
   fChain->SetBranchAddress("LJet.Constituents", LJet_Constituents, &b_LJet_Constituents);
   fChain->SetBranchAddress("LJet.Particles", LJet_Particles, &b_LJet_Particles);
   fChain->SetBranchAddress("LJet.Area", LJet_Area, &b_LJet_Area);
   fChain->SetBranchAddress("LJet_size", &LJet_size, &b_LJet_size);
   fChain->SetBranchAddress("JetJES", &JetJES_, &b_JetJES_);
   fChain->SetBranchAddress("JetJES.fUniqueID", JetJES_fUniqueID, &b_JetJES_fUniqueID);
   fChain->SetBranchAddress("JetJES.fBits", JetJES_fBits, &b_JetJES_fBits);
   fChain->SetBranchAddress("JetJES.PT", JetJES_PT, &b_JetJES_PT);
   fChain->SetBranchAddress("JetJES.Eta", JetJES_Eta, &b_JetJES_Eta);
   fChain->SetBranchAddress("JetJES.Phi", JetJES_Phi, &b_JetJES_Phi);
   fChain->SetBranchAddress("JetJES.T", JetJES_T, &b_JetJES_T);
   fChain->SetBranchAddress("JetJES.Mass", JetJES_Mass, &b_JetJES_Mass);
   fChain->SetBranchAddress("JetJES.DeltaEta", JetJES_DeltaEta, &b_JetJES_DeltaEta);
   fChain->SetBranchAddress("JetJES.DeltaPhi", JetJES_DeltaPhi, &b_JetJES_DeltaPhi);
   fChain->SetBranchAddress("JetJES.Flavor", JetJES_Flavor, &b_JetJES_Flavor);
   fChain->SetBranchAddress("JetJES.FlavorAlgo", JetJES_FlavorAlgo, &b_JetJES_FlavorAlgo);
   fChain->SetBranchAddress("JetJES.FlavorPhys", JetJES_FlavorPhys, &b_JetJES_FlavorPhys);
   fChain->SetBranchAddress("JetJES.BTag", JetJES_BTag, &b_JetJES_BTag);
   fChain->SetBranchAddress("JetJES.BTagAlgo", JetJES_BTagAlgo, &b_JetJES_BTagAlgo);
   fChain->SetBranchAddress("JetJES.BTagPhys", JetJES_BTagPhys, &b_JetJES_BTagPhys);
   fChain->SetBranchAddress("JetJES.TauTag", JetJES_TauTag, &b_JetJES_TauTag);
   fChain->SetBranchAddress("JetJES.TauWeight", JetJES_TauWeight, &b_JetJES_TauWeight);
   fChain->SetBranchAddress("JetJES.Charge", JetJES_Charge, &b_JetJES_Charge);
   fChain->SetBranchAddress("JetJES.EhadOverEem", JetJES_EhadOverEem, &b_JetJES_EhadOverEem);
   fChain->SetBranchAddress("JetJES.NCharged", JetJES_NCharged, &b_JetJES_NCharged);
   fChain->SetBranchAddress("JetJES.NNeutrals", JetJES_NNeutrals, &b_JetJES_NNeutrals);
   fChain->SetBranchAddress("JetJES.Beta", JetJES_Beta, &b_JetJES_Beta);
   fChain->SetBranchAddress("JetJES.BetaStar", JetJES_BetaStar, &b_JetJES_BetaStar);
   fChain->SetBranchAddress("JetJES.MeanSqDeltaR", JetJES_MeanSqDeltaR, &b_JetJES_MeanSqDeltaR);
   fChain->SetBranchAddress("JetJES.PTD", JetJES_PTD, &b_JetJES_PTD);
   fChain->SetBranchAddress("JetJES.FracPt[5]", JetJES_FracPt, &b_JetJES_FracPt);
   fChain->SetBranchAddress("JetJES.Tau[5]", JetJES_Tau, &b_JetJES_Tau);
   fChain->SetBranchAddress("JetJES.SoftDroppedJet", JetJES_SoftDroppedJet, &b_JetJES_SoftDroppedJet);
   fChain->SetBranchAddress("JetJES.SoftDroppedSubJet1", JetJES_SoftDroppedSubJet1, &b_JetJES_SoftDroppedSubJet1);
   fChain->SetBranchAddress("JetJES.SoftDroppedSubJet2", JetJES_SoftDroppedSubJet2, &b_JetJES_SoftDroppedSubJet2);
   fChain->SetBranchAddress("JetJES.TrimmedP4[5]", JetJES_TrimmedP4, &b_JetJES_TrimmedP4);
   fChain->SetBranchAddress("JetJES.PrunedP4[5]", JetJES_PrunedP4, &b_JetJES_PrunedP4);
   fChain->SetBranchAddress("JetJES.SoftDroppedP4[5]", JetJES_SoftDroppedP4, &b_JetJES_SoftDroppedP4);
   fChain->SetBranchAddress("JetJES.NSubJetsTrimmed", JetJES_NSubJetsTrimmed, &b_JetJES_NSubJetsTrimmed);
   fChain->SetBranchAddress("JetJES.NSubJetsPruned", JetJES_NSubJetsPruned, &b_JetJES_NSubJetsPruned);
   fChain->SetBranchAddress("JetJES.NSubJetsSoftDropped", JetJES_NSubJetsSoftDropped, &b_JetJES_NSubJetsSoftDropped);
   fChain->SetBranchAddress("JetJES.ExclYmerge23", JetJES_ExclYmerge23, &b_JetJES_ExclYmerge23);
   fChain->SetBranchAddress("JetJES.ExclYmerge34", JetJES_ExclYmerge34, &b_JetJES_ExclYmerge34);
   fChain->SetBranchAddress("JetJES.ExclYmerge45", JetJES_ExclYmerge45, &b_JetJES_ExclYmerge45);
   fChain->SetBranchAddress("JetJES.ExclYmerge56", JetJES_ExclYmerge56, &b_JetJES_ExclYmerge56);
   fChain->SetBranchAddress("JetJES.Constituents", JetJES_Constituents, &b_JetJES_Constituents);
   fChain->SetBranchAddress("JetJES.Particles", JetJES_Particles, &b_JetJES_Particles);
   fChain->SetBranchAddress("JetJES.Area", JetJES_Area, &b_JetJES_Area);
   fChain->SetBranchAddress("JetJES_size", &JetJES_size, &b_JetJES_size);
   fChain->SetBranchAddress("LJetJES", &LJetJES_, &b_LJetJES_);
   fChain->SetBranchAddress("LJetJES.fUniqueID", LJetJES_fUniqueID, &b_LJetJES_fUniqueID);
   fChain->SetBranchAddress("LJetJES.fBits", LJetJES_fBits, &b_LJetJES_fBits);
   fChain->SetBranchAddress("LJetJES.PT", LJetJES_PT, &b_LJetJES_PT);
   fChain->SetBranchAddress("LJetJES.Eta", LJetJES_Eta, &b_LJetJES_Eta);
   fChain->SetBranchAddress("LJetJES.Phi", LJetJES_Phi, &b_LJetJES_Phi);
   fChain->SetBranchAddress("LJetJES.T", LJetJES_T, &b_LJetJES_T);
   fChain->SetBranchAddress("LJetJES.Mass", LJetJES_Mass, &b_LJetJES_Mass);
   fChain->SetBranchAddress("LJetJES.DeltaEta", LJetJES_DeltaEta, &b_LJetJES_DeltaEta);
   fChain->SetBranchAddress("LJetJES.DeltaPhi", LJetJES_DeltaPhi, &b_LJetJES_DeltaPhi);
   fChain->SetBranchAddress("LJetJES.Flavor", LJetJES_Flavor, &b_LJetJES_Flavor);
   fChain->SetBranchAddress("LJetJES.FlavorAlgo", LJetJES_FlavorAlgo, &b_LJetJES_FlavorAlgo);
   fChain->SetBranchAddress("LJetJES.FlavorPhys", LJetJES_FlavorPhys, &b_LJetJES_FlavorPhys);
   fChain->SetBranchAddress("LJetJES.BTag", LJetJES_BTag, &b_LJetJES_BTag);
   fChain->SetBranchAddress("LJetJES.BTagAlgo", LJetJES_BTagAlgo, &b_LJetJES_BTagAlgo);
   fChain->SetBranchAddress("LJetJES.BTagPhys", LJetJES_BTagPhys, &b_LJetJES_BTagPhys);
   fChain->SetBranchAddress("LJetJES.TauTag", LJetJES_TauTag, &b_LJetJES_TauTag);
   fChain->SetBranchAddress("LJetJES.TauWeight", LJetJES_TauWeight, &b_LJetJES_TauWeight);
   fChain->SetBranchAddress("LJetJES.Charge", LJetJES_Charge, &b_LJetJES_Charge);
   fChain->SetBranchAddress("LJetJES.EhadOverEem", LJetJES_EhadOverEem, &b_LJetJES_EhadOverEem);
   fChain->SetBranchAddress("LJetJES.NCharged", LJetJES_NCharged, &b_LJetJES_NCharged);
   fChain->SetBranchAddress("LJetJES.NNeutrals", LJetJES_NNeutrals, &b_LJetJES_NNeutrals);
   fChain->SetBranchAddress("LJetJES.Beta", LJetJES_Beta, &b_LJetJES_Beta);
   fChain->SetBranchAddress("LJetJES.BetaStar", LJetJES_BetaStar, &b_LJetJES_BetaStar);
   fChain->SetBranchAddress("LJetJES.MeanSqDeltaR", LJetJES_MeanSqDeltaR, &b_LJetJES_MeanSqDeltaR);
   fChain->SetBranchAddress("LJetJES.PTD", LJetJES_PTD, &b_LJetJES_PTD);
   fChain->SetBranchAddress("LJetJES.FracPt[5]", LJetJES_FracPt, &b_LJetJES_FracPt);
   fChain->SetBranchAddress("LJetJES.Tau[5]", LJetJES_Tau, &b_LJetJES_Tau);
   fChain->SetBranchAddress("LJetJES.SoftDroppedJet", LJetJES_SoftDroppedJet, &b_LJetJES_SoftDroppedJet);
   fChain->SetBranchAddress("LJetJES.SoftDroppedSubJet1", LJetJES_SoftDroppedSubJet1, &b_LJetJES_SoftDroppedSubJet1);
   fChain->SetBranchAddress("LJetJES.SoftDroppedSubJet2", LJetJES_SoftDroppedSubJet2, &b_LJetJES_SoftDroppedSubJet2);
   fChain->SetBranchAddress("LJetJES.TrimmedP4[5]", LJetJES_TrimmedP4, &b_LJetJES_TrimmedP4);
   fChain->SetBranchAddress("LJetJES.PrunedP4[5]", LJetJES_PrunedP4, &b_LJetJES_PrunedP4);
   fChain->SetBranchAddress("LJetJES.SoftDroppedP4[5]", LJetJES_SoftDroppedP4, &b_LJetJES_SoftDroppedP4);
   fChain->SetBranchAddress("LJetJES.NSubJetsTrimmed", LJetJES_NSubJetsTrimmed, &b_LJetJES_NSubJetsTrimmed);
   fChain->SetBranchAddress("LJetJES.NSubJetsPruned", LJetJES_NSubJetsPruned, &b_LJetJES_NSubJetsPruned);
   fChain->SetBranchAddress("LJetJES.NSubJetsSoftDropped", LJetJES_NSubJetsSoftDropped, &b_LJetJES_NSubJetsSoftDropped);
   fChain->SetBranchAddress("LJetJES.ExclYmerge23", LJetJES_ExclYmerge23, &b_LJetJES_ExclYmerge23);
   fChain->SetBranchAddress("LJetJES.ExclYmerge34", LJetJES_ExclYmerge34, &b_LJetJES_ExclYmerge34);
   fChain->SetBranchAddress("LJetJES.ExclYmerge45", LJetJES_ExclYmerge45, &b_LJetJES_ExclYmerge45);
   fChain->SetBranchAddress("LJetJES.ExclYmerge56", LJetJES_ExclYmerge56, &b_LJetJES_ExclYmerge56);
   fChain->SetBranchAddress("LJetJES.Constituents", LJetJES_Constituents, &b_LJetJES_Constituents);
   fChain->SetBranchAddress("LJetJES.Particles", LJetJES_Particles, &b_LJetJES_Particles);
   fChain->SetBranchAddress("LJetJES.Area", LJetJES_Area, &b_LJetJES_Area);
   fChain->SetBranchAddress("LJetJES_size", &LJetJES_size, &b_LJetJES_size);
   fChain->SetBranchAddress("Electron", &Electron_, &b_Electron_);
   fChain->SetBranchAddress("Electron.fUniqueID", Electron_fUniqueID, &b_Electron_fUniqueID);
   fChain->SetBranchAddress("Electron.fBits", Electron_fBits, &b_Electron_fBits);
   fChain->SetBranchAddress("Electron.PT", Electron_PT, &b_Electron_PT);
   fChain->SetBranchAddress("Electron.Eta", Electron_Eta, &b_Electron_Eta);
   fChain->SetBranchAddress("Electron.Phi", Electron_Phi, &b_Electron_Phi);
   fChain->SetBranchAddress("Electron.T", Electron_T, &b_Electron_T);
   fChain->SetBranchAddress("Electron.Charge", Electron_Charge, &b_Electron_Charge);
   fChain->SetBranchAddress("Electron.EhadOverEem", Electron_EhadOverEem, &b_Electron_EhadOverEem);
   fChain->SetBranchAddress("Electron.Particle", Electron_Particle, &b_Electron_Particle);
   fChain->SetBranchAddress("Electron.IsolationVar", Electron_IsolationVar, &b_Electron_IsolationVar);
   fChain->SetBranchAddress("Electron.IsolationVarRhoCorr", Electron_IsolationVarRhoCorr, &b_Electron_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Electron.SumPtCharged", Electron_SumPtCharged, &b_Electron_SumPtCharged);
   fChain->SetBranchAddress("Electron.SumPtNeutral", Electron_SumPtNeutral, &b_Electron_SumPtNeutral);
   fChain->SetBranchAddress("Electron.SumPtChargedPU", Electron_SumPtChargedPU, &b_Electron_SumPtChargedPU);
   fChain->SetBranchAddress("Electron.SumPt", Electron_SumPt, &b_Electron_SumPt);
   fChain->SetBranchAddress("Electron.D0", Electron_D0, &b_Electron_D0);
   fChain->SetBranchAddress("Electron.DZ", Electron_DZ, &b_Electron_DZ);
   fChain->SetBranchAddress("Electron.ErrorD0", Electron_ErrorD0, &b_Electron_ErrorD0);
   fChain->SetBranchAddress("Electron.ErrorDZ", Electron_ErrorDZ, &b_Electron_ErrorDZ);
   fChain->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.fUniqueID", Photon_fUniqueID, &b_Photon_fUniqueID);
   fChain->SetBranchAddress("Photon.fBits", Photon_fBits, &b_Photon_fBits);
   fChain->SetBranchAddress("Photon.PT", Photon_PT, &b_Photon_PT);
   fChain->SetBranchAddress("Photon.Eta", Photon_Eta, &b_Photon_Eta);
   fChain->SetBranchAddress("Photon.Phi", Photon_Phi, &b_Photon_Phi);
   fChain->SetBranchAddress("Photon.E", Photon_E, &b_Photon_E);
   fChain->SetBranchAddress("Photon.T", Photon_T, &b_Photon_T);
   fChain->SetBranchAddress("Photon.EhadOverEem", Photon_EhadOverEem, &b_Photon_EhadOverEem);
   fChain->SetBranchAddress("Photon.Particles", Photon_Particles, &b_Photon_Particles);
   fChain->SetBranchAddress("Photon.IsolationVar", Photon_IsolationVar, &b_Photon_IsolationVar);
   fChain->SetBranchAddress("Photon.IsolationVarRhoCorr", Photon_IsolationVarRhoCorr, &b_Photon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Photon.SumPtCharged", Photon_SumPtCharged, &b_Photon_SumPtCharged);
   fChain->SetBranchAddress("Photon.SumPtNeutral", Photon_SumPtNeutral, &b_Photon_SumPtNeutral);
   fChain->SetBranchAddress("Photon.SumPtChargedPU", Photon_SumPtChargedPU, &b_Photon_SumPtChargedPU);
   fChain->SetBranchAddress("Photon.SumPt", Photon_SumPt, &b_Photon_SumPt);
   fChain->SetBranchAddress("Photon.Status", Photon_Status, &b_Photon_Status);
   fChain->SetBranchAddress("Photon_size", &Photon_size, &b_Photon_size);
   fChain->SetBranchAddress("Muon", &Muon_, &b_Muon_);
   fChain->SetBranchAddress("Muon.fUniqueID", Muon_fUniqueID, &b_Muon_fUniqueID);
   fChain->SetBranchAddress("Muon.fBits", Muon_fBits, &b_Muon_fBits);
   fChain->SetBranchAddress("Muon.PT", Muon_PT, &b_Muon_PT);
   fChain->SetBranchAddress("Muon.Eta", Muon_Eta, &b_Muon_Eta);
   fChain->SetBranchAddress("Muon.Phi", Muon_Phi, &b_Muon_Phi);
   fChain->SetBranchAddress("Muon.T", Muon_T, &b_Muon_T);
   fChain->SetBranchAddress("Muon.Charge", Muon_Charge, &b_Muon_Charge);
   fChain->SetBranchAddress("Muon.Particle", Muon_Particle, &b_Muon_Particle);
   fChain->SetBranchAddress("Muon.IsolationVar", Muon_IsolationVar, &b_Muon_IsolationVar);
   fChain->SetBranchAddress("Muon.IsolationVarRhoCorr", Muon_IsolationVarRhoCorr, &b_Muon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Muon.SumPtCharged", Muon_SumPtCharged, &b_Muon_SumPtCharged);
   fChain->SetBranchAddress("Muon.SumPtNeutral", Muon_SumPtNeutral, &b_Muon_SumPtNeutral);
   fChain->SetBranchAddress("Muon.SumPtChargedPU", Muon_SumPtChargedPU, &b_Muon_SumPtChargedPU);
   fChain->SetBranchAddress("Muon.SumPt", Muon_SumPt, &b_Muon_SumPt);
   fChain->SetBranchAddress("Muon.D0", Muon_D0, &b_Muon_D0);
   fChain->SetBranchAddress("Muon.DZ", Muon_DZ, &b_Muon_DZ);
   fChain->SetBranchAddress("Muon.ErrorD0", Muon_ErrorD0, &b_Muon_ErrorD0);
   fChain->SetBranchAddress("Muon.ErrorDZ", Muon_ErrorDZ, &b_Muon_ErrorDZ);
   fChain->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
   fChain->SetBranchAddress("MissingET", &MissingET_, &b_MissingET_);
   fChain->SetBranchAddress("MissingET.fUniqueID", MissingET_fUniqueID, &b_MissingET_fUniqueID);
   fChain->SetBranchAddress("MissingET.fBits", MissingET_fBits, &b_MissingET_fBits);
   fChain->SetBranchAddress("MissingET.MET", MissingET_MET, &b_MissingET_MET);
   fChain->SetBranchAddress("MissingET.Eta", MissingET_Eta, &b_MissingET_Eta);
   fChain->SetBranchAddress("MissingET.Phi", MissingET_Phi, &b_MissingET_Phi);
   fChain->SetBranchAddress("MissingET_size", &MissingET_size, &b_MissingET_size);
   fChain->SetBranchAddress("ScalarHT", &ScalarHT_, &b_ScalarHT_);
   fChain->SetBranchAddress("ScalarHT.fUniqueID", ScalarHT_fUniqueID, &b_ScalarHT_fUniqueID);
   fChain->SetBranchAddress("ScalarHT.fBits", ScalarHT_fBits, &b_ScalarHT_fBits);
   fChain->SetBranchAddress("ScalarHT.HT", ScalarHT_HT, &b_ScalarHT_HT);
   fChain->SetBranchAddress("ScalarHT_size", &ScalarHT_size, &b_ScalarHT_size);
   Notify();
}

Bool_t Delphes::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Delphes::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Delphes::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Delphes_cxx
