//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jan  6 02:39:46 2016 by ROOT version 5.34/32
// from TTree EDBRCandidates/EDBR Candidates
// found on file: BulkGravWW750.root
//////////////////////////////////////////////////////////

#ifndef EDBR2PKUTree_h
#define EDBR2PKUTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH2.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TLorentzVector.h"
//#include "DataFormats/Math/interface/deltaR.h"

#include <iostream>
#include <fstream>
using namespace std;
// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.
   const Int_t kMaxpassFilter_HBHE = 1;
   const Int_t kMaxpassFilter_HBHEIso = 1;
   const Int_t kMaxpassFilter_GlobalHalo = 1;
   const Int_t kMaxpassFilter_ECALDeadCell = 1;
   const Int_t kMaxpassFilter_GoodVtx = 1;
   const Int_t kMaxpassFilter_EEBadSc = 1;
   const Int_t kMaxpassFilter_badMuon = 1;
   const Int_t kMaxpassFilter_badChargedHadron = 1;

class EDBR2PKUTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types

   Int_t           ls;
   Int_t           run;
   Int_t           nLooseEle;
   Int_t           nLooseMu;
//   Int_t           njets;
   Int_t           nbtag;
   Int_t           num_bJet;
   Int_t           num_bJet_loose;
   Int_t           num_bJet_tight;
//   Float_t         jet2_pt;
//   Float_t         jet2_btag;
//   Float_t         jet3_pt;
//   Float_t         jet3_btag;

   Float_t pfMET;
   Float_t pfMETPhi;
   Float_t l_pt;
   Float_t mtVlepnew;
   Float_t MTVlep;
   Float_t l_eta;
   Float_t l_phi;
   Float_t jet_pt;
   Float_t jet_pt_puppi;
   Float_t jet_eta;
   Float_t jet_phi;
   Float_t jet_mass_pruned;
   Float_t jet_mass_puppi;
   Float_t jet_mass_puppi_un;
   Float_t jet_mass_puppi_corr;
//   Float_t jet_mass_softdrop;
   Float_t jet_tau2tau1;
   Float_t jet_tau2tau1_puppi;
   Float_t W_pt;
   Float_t W_eta;
   Float_t W_phi;
   Float_t m_lvj;
//   Float_t M_ww;
   Float_t fjet2_pt;
   Float_t fjet2_btag;
   Float_t fjet3_pt;
   Float_t fjet3_btag; 
   //JEC
//   Double_t corr_AK8;
   Double_t jetAK8_pt;
   Double_t jetAK8_mass;
   Double_t jetAK8_jec;
//   Double_t jetAK8_e;
//   Double_t corr;
   Double_t METraw_et;
   Double_t METraw_phi;
   Double_t METraw_sumEt;
   Double_t MET_et;
   Double_t MET_phi;
   Double_t MET_sumEt;
   Int_t CategoryID;
   Int_t vTagID;//1: tau21<0.45; 0: tau21>0.45 <0.75; -1: tau21 >0.75
   Double_t isMatch;
   Double_t        weight;
   Double_t        weight_nobtag;
   Double_t        IDweight;
   Double_t        IDweightISO;
   Double_t        IDweighttrk;
   Double_t        ToppTweight;
   Double_t        trigger_eff;
   Double_t        btagweight_center;
   Double_t        btagweight_up;
   Double_t        btagweight_down;

   Long64_t           event;
   Int_t           nVtx;
   Int_t           numCands;
   Double_t        ptVlep;
   Double_t        ptVhad;
   Double_t        yVlep;
   Double_t        yVhad;
   Double_t        yVhadJEC;
   Double_t        phiVlep;
   Double_t        phiVhad;
   Double_t        massVlep;
   Double_t        mtVlep;
   Double_t        massVhad;
//   Double_t        massVhad_gen;
   Double_t        tau1;
   Double_t        tau2;
   Double_t        tau3;
   Double_t        tau21;
//   Double_t        sdrop;
   Int_t           lep;
   Int_t           channel;
   Double_t        candMass;
   Double_t        ptlep1;
   Double_t        ptlep2;
   Double_t        etalep1;
   Double_t        etalep2;
   Double_t        philep1;
   Double_t        philep2;
   Double_t        met;
   Double_t        metPhi;
   Double_t        theWeight;
   Double_t        nump;
   Double_t        numm;
   Double_t        npT;
   Double_t        npIT;
   Int_t           nBX;
   Double_t        triggerWeight;
   Double_t        lumiWeight;
   Double_t        pileupWeight;
   Double_t        delPhilepmet;
   Double_t        deltaRlepjet;
   Double_t        delPhijetmet;
   Double_t        delPhijetlep;
   Int_t           vbftag;
   Bool_t          IDLoose;
   Bool_t          IDTight;
   //Bool_t          isHighPt;
   //Bool_t          isHEEP;
   Double_t        trackIso;
   Double_t        muchaiso;
   Double_t        muneuiso;
   Double_t        muphoiso;
   Double_t        muPU;
   Double_t        muisolation;
   //Double_t        METraw_et;
   //Double_t        METraw_phi;
   //Double_t        METraw_sumEt;
   //Double_t        MET_et;
   //Double_t        MET_phi;
   //Double_t        MET_sumEt;
   //Double_t        jetAK8_pt;
   //Double_t        jetAK8_mass;
   //Double_t        jetAK8_jec;
   Double_t        jetAK8_pt1[3];
   Double_t        jetAK8_eta1[3];
   Double_t        jetAK8_mass1[3];
   Double_t        jetAK8_SF_mass1[3];
   Double_t        jetAK8_SF_mass2[3];
   Double_t        jetAK8_jec1[3];
   Double_t        jetAK8_eta;
   Double_t        jetAK8_phi;
   Double_t        candMassJEC;
   Double_t        ptVlepJEC;
   Double_t        yVlepJEC;
   Double_t        phiVlepJEC;
   Double_t        massVlepJEC;
   Double_t        massVhadJEC;
   Double_t        jetAK8puppi_sdJEC;
   Double_t        jetAK8puppi_sd;
   Double_t        jetAK8puppi_tau21;
   Double_t        jetAK8puppi_ptJEC;
   Double_t        jetAK8puppi_eta;
   Double_t        jetAK8puppi_phi;
   Double_t        jetAK8puppi_sdcorr;
   Double_t        candMasspuppiJEC;


Double_t        jetAK8puppi_sdJEC_2;
   Double_t        jetAK8puppi_sd_2;
   Double_t        jetAK8puppi_tau21_2;
   Double_t        jetAK8puppi_tau42_2;
Double_t        jetAK8puppi_tau42;
   Double_t        jetAK8puppi_ptJEC_2;
   Double_t        jetAK8puppi_eta_2;
   Double_t        jetAK8puppi_phi_2;
   Double_t        jetAK8puppi_sdcorr_2;
Double_t MassVV[3];
Double_t        jet_mass_puppi_2;
Double_t        jet_mass_puppi_un_2;
Double_t        jet_mass_puppi_corr_2;
Double_t        jet_pt_puppi_2;
Double_t        jet_tau2tau1_puppi_2;
Double_t       jet_tau4tau2_puppi;
Double_t        jet_tau4tau2_puppi_2;
Double_t massww[3];


//   Double_t        candMasspuppicorr;
//   Double_t        sdropJEC;
   Double_t        mtVlepJEC;
//   Double_t        delPhilepmetJEC;
//   Double_t        delPhijetmetJEC;
//   Double_t        delPhijetlepJEC;
   Int_t           HLT_Ele1;
   Int_t           HLT_Ele2;
   Int_t           HLT_Ele3;
   Int_t           HLT_Ele4;
   Int_t           HLT_Ele5;
   Int_t           HLT_Ele6;
   Int_t           HLT_Ele7;
   Int_t           HLT_Ele8;
   Int_t           HLT_Mu1;
   Int_t           HLT_Mu2;
   Int_t           HLT_Mu3;
   Int_t           HLT_Mu4;
   Int_t           HLT_Mu5;
   Int_t           HLT_Mu6;
   Int_t           HLT_Mu7;
   Int_t           HLT_Mu8;
   Int_t           HLT_Mu9;
   Int_t           HLT_Mu10;
   Int_t           HLT_Mu11;
   Int_t           HLT_Mu12;
   Bool_t          passFilter_HBHE;
   Bool_t          passFilter_HBHEIso;
   Bool_t          passFilter_GlobalHalo;
   Bool_t          passFilter_ECALDeadCell;
   Bool_t          passFilter_GoodVtx;
   Bool_t          passFilter_EEBadSc;
   Bool_t          passFilter_badMuon;
   Bool_t          passFilter_badChargedHadron;
   Int_t           ak4jet_hf[8];
   Int_t           ak4jet_pf[8];
   Double_t        ak4jet_pt[8];
   Double_t        ak4jet_pt_uncorr[8];
   Double_t        ak4jet_eta[8];
   Double_t        ak4jet_phi[8];
   Double_t        ak4jet_e[8];
   Double_t        ak4jet_dr[8];
   Double_t        ak4jet_csv[8];
   Double_t        ak4jet_icsv[8];
   Double_t        deltaRAK4AK8[8];
   Double_t        deltaRAK4AK8_new[8];
   Double_t        ak4jet_IDLoose[8];
   Double_t        ak4jet_IDTight[8];
   Double_t        gen_gra_m;
   Double_t        gen_gra_pt;
   Double_t        gen_ele_pt;
   Double_t        gen_ele_eta;
   Double_t        gen_ele_phi;
   Double_t        gen_ele_e;
   Double_t        gen_mu_pt;
   Double_t        gen_mu_eta;
   Double_t        gen_mu_phi;
   Double_t        gen_mu_e;
   Double_t        genmatch_ele_pt;
   Double_t        genmatch_ele_eta;
   Double_t        genmatch_ele_phi;
   Double_t        genmatch_ele_e;
   Double_t        genmatch_ele_dr;
   Double_t        gentop_pt;
   Double_t        gentop_eta;
   Double_t        gentop_phi;
   Double_t        gentop_mass;
   Double_t        genantitop_pt;
   Double_t        genantitop_eta;
   Double_t        genantitop_phi;
   Double_t        genantitop_mass;
   Double_t        genmatch_mu_pt;
   Double_t        genmatch_mu_eta;
   Double_t        genmatch_mu_phi;
   Double_t        genmatch_mu_e;
   Double_t        genmatch_mu_dr;
   Double_t        ptGenVlep;
   Double_t        etaGenVlep;
   Double_t        phiGenVlep;
   Double_t        massGenVlep;
   Double_t        ptGenVhad;
   Double_t        etaGenVhad;
   Double_t        phiGenVhad;
   Double_t        massGenVhad;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_ls;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nVtx;   //!
   TBranch        *b_theWeight;   //!
   TBranch        *b_nump;   //!
   TBranch        *b_numm;   //!
   TBranch        *b_npT;   //!
   TBranch        *b_nLooseEle;   //!
   TBranch        *b_nLooseMu;   //!
   TBranch        *b_lep;   //!
   TBranch        *b_ptlep1;   //!
   TBranch        *b_etalep1;   //!
   TBranch        *b_philep1;   //!
   TBranch        *b_trackIso;   //!
   TBranch        *b_muisolation;   //add
   TBranch        *b_muchaiso;   //add
   TBranch        *b_muneuiso;   //add
   TBranch        *b_MET_et;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_ptVlepJEC;   //!
   TBranch        *b_yVlepJEC;   //!
   TBranch        *b_phiVlepJEC;   //!
   TBranch        *b_mtVlepJEC;   //!
   TBranch        *b_massVlepJEC;   //!
   TBranch        *b_jetAK8puppi_sdJEC;   //!
   TBranch        *b_jetAK8puppi_sd;   //!
   TBranch        *b_jetAK8puppi_tau21;   //!
   TBranch        *b_jetAK8puppi_ptJEC;   //!
   TBranch        *b_jetAK8puppi_eta;   //!
   TBranch        *b_jetAK8puppi_phi;   //!
   TBranch        *b_jetAK8puppi_sdcorr;   //!
   TBranch        *b_IDLoose;   //!
   TBranch        *b_delPhilepmet;   //!
   TBranch        *b_deltaRlepjet;   //!
   TBranch        *b_delPhijetmet;   //!
   TBranch        *b_delPhijetlep;   //!
   TBranch        *b_vbftag;   //add
   TBranch        *b_candMasspuppiJEC;   //!
   TBranch        *b_gentop_pt; //add old
   TBranch        *b_gentop_eta; //add old
   TBranch        *b_genantitop_pt; //add old
   TBranch        *b_genantitop_eta; //add old
   TBranch        *b_HLT_Ele1;
   TBranch        *b_HLT_Ele2;
   TBranch        *b_HLT_Ele3;   //!
   TBranch        *b_HLT_Ele4;
   TBranch        *b_HLT_Ele5;
   TBranch        *b_HLT_Ele6;   //!
   TBranch        *b_HLT_Ele7;
   TBranch        *b_HLT_Ele8;
   TBranch        *b_HLT_Mu1;
   TBranch        *b_HLT_Mu2;   //!
   TBranch        *b_HLT_Mu3;
   TBranch        *b_HLT_Mu4;   //!
   TBranch        *b_HLT_Mu5;
   TBranch        *b_HLT_Mu6;   //!
   TBranch        *b_HLT_Mu7;
   TBranch        *b_HLT_Mu8;   //!
   TBranch        *b_HLT_Mu9;
   TBranch        *b_HLT_Mu10;   //!
   TBranch        *b_HLT_Mu11;
   TBranch        *b_HLT_Mu12;   //!
   TBranch        *b_ak4jet_hf;
   TBranch        *b_ak4jet_pf;
   TBranch        *b_ak4jet_pt;   //!
   TBranch        *b_ak4jet_pt_uncorr;   //!
   TBranch        *b_ak4jet_eta;   //!
   TBranch        *b_ak4jet_phi;   //!
   TBranch        *b_ak4jet_e;   //!
   TBranch        *b_ak4jet_dr;   //!
   TBranch        *b_ak4jet_csv;   //!
   TBranch        *b_ak4jet_icsv;   //!
   TBranch        *b_deltaRAK4AK8;   //!
   TBranch        *b_ak4jet_IDLoose;   //!
   TBranch        *b_ak4jet_IDTight;   //!
   TBranch        *b_passFilter_HBHE_;   //!
   TBranch        *b_passFilter_HBHEIso_;   //!
   TBranch        *b_passFilter_GlobalHalo_;   //!
   TBranch        *b_passFilter_ECALDeadCell_;   //!
   TBranch        *b_passFilter_GoodVtx_;   //!
   TBranch        *b_passFilter_EEBadSc_;   //!
   TBranch        *b_passFilter_badMuon_;   //!
   TBranch        *b_passFilter_badChargedHadron_;   //!
   TBranch        *b_muphoiso;  //add
   TBranch        *b_muPU;  //add
   TBranch        *b_IDTight;   //!
   TBranch        *b_vbfeta;   //add
   TBranch        *b_vbfmjj;   //add
   TBranch        *b_nj1;   //add
   TBranch        *b_nj2;   //add
   //TBranch        *b_isHighPt;   //!
   //TBranch        *b_isHEEP;   //!
   TBranch        *b_ptVlep;   //!
   TBranch        *b_yVlep;   //!
   TBranch        *b_phiVlep;   //!
   TBranch        *b_massVlep;   //!
   TBranch        *b_mtVlep;   //! 
   TBranch        *b_ptVhad;   //!
   TBranch        *b_jetAK8_pt;   //!
   TBranch        *b_yVhad;   //!
   TBranch        *b_yVhadJEC;   //!
   TBranch        *b_phiVhad;   //!
   TBranch        *b_massVhad;   //!
   TBranch        *b_massVhadJEC;   //!
   TBranch        *b_tau1;   //!
   TBranch        *b_tau2;   //!
   TBranch        *b_tau3;   //!
   TBranch        *b_tau21;   //!
//   TBranch        *b_sdrop;   //!
//   TBranch        *b_sdropJEC;   //!
   TBranch        *b_candMass;   //!
   TBranch        *b_numCands;   //!
   TBranch        *b_channel;   //!
   TBranch        *b_ptlep2;   //!
   TBranch        *b_etalep2;   //!
   TBranch        *b_philep2;   //!
   TBranch        *b_met;   //!
   TBranch        *b_metPhi;   //!
   TBranch        *b_npIT;   //!
   TBranch        *b_nBX;   //!
   TBranch        *b_triggerWeight;   //!
   TBranch        *b_lumiWeight;   //!
   TBranch        *b_pileupWeight;   //!
   TBranch        *b_METraw_et;   //!
   TBranch        *b_METraw_phi;   //!
   TBranch        *b_METraw_sumEt;   //!
   TBranch        *b_MET_sumEt;   //!
   TBranch        *b_jetAK8_mass;   //!
   TBranch        *b_jetAK8_jec;   //!
   TBranch        *b_jetAK8_pt1;   //!
   TBranch        *b_jetAK8_eta1;   //!
   TBranch        *b_jetAK8_mass1;   //!
   TBranch        *b_jetAK8_SF_mass1;   //!
   TBranch        *b_jetAK8_SF_mass2;   //!
   TBranch        *b_jetAK8_jec1;   //!
   TBranch        *b_jetAK8_eta;   //!
   TBranch        *b_jetAK8_phi;   //!
   TBranch        *b_candMassJEC;   //!
   

TBranch        *b_jetAK8puppi_tau42;   //!
TBranch        *b_jetAK8puppi_sdJEC_2;   //!
   TBranch        *b_jetAK8puppi_sd_2;   //!
   TBranch        *b_jetAK8puppi_tau21_2;   //!
   TBranch        *b_jetAK8puppi_tau42_2;   //!
   TBranch        *b_jetAK8puppi_ptJEC_2;   //!
   TBranch        *b_jetAK8puppi_eta_2;   //!
   TBranch        *b_jetAK8puppi_phi_2;   //!
   TBranch        *b_jetAK8puppi_sdcorr_2;   //!
   TBranch        *b_massww;   //!

TBranch        *b_gen_gra_m;   //!
   TBranch        *b_gen_gra_pt;   //!
   TBranch        *b_gen_ele_pt;   //!
   TBranch        *b_gen_ele_eta;   //!
   TBranch        *b_gen_ele_phi;   //!
   TBranch        *b_gen_ele_e;   //!
   TBranch        *b_gen_mu_pt;   //!
   TBranch        *b_gen_mu_eta;   //!
   TBranch        *b_gen_mu_phi;   //!
   TBranch        *b_gen_mu_e;   //!
   TBranch        *b_genmatch_ele_pt;   //!
   TBranch        *b_genmatch_ele_eta;   //!
   TBranch        *b_genmatch_ele_phi;   //!
   TBranch        *b_genmatch_ele_e;   //!
   TBranch        *b_genmatch_ele_dr;   //!
   TBranch        *b_genmatch_mu_pt;   //!
   TBranch        *b_genmatch_mu_eta;   //!
   TBranch        *b_genmatch_mu_phi;   //!
   TBranch        *b_genmatch_mu_e;   //!
   TBranch        *b_genmatch_mu_dr;   //!
   TBranch        *b_gentop_phi;   //add old
   TBranch        *b_gentop_mass;   //add old
   TBranch        *b_genantitop_phi;   //add old
   TBranch        *b_genantitop_mass;   //add old
   TBranch        *b_ptGenVlep;   //!
   TBranch        *b_etaGenVlep;   //!
   TBranch        *b_phiGenVlep;   //!
   TBranch        *b_massGenVlep;   //!
   TBranch        *b_ptGenVhad;   //!
   TBranch        *b_etaGenVhad;   //!
   TBranch        *b_phiGenVhad;   //!
   TBranch        *b_massGenVhad;   //!
/*
   TBranch        *b_njets;   //!
   TBranch        *b_nbtag;   //!
   TBranch        *b_jet2_pt;   //!
   TBranch        *b_jet2_btag;   //!
   TBranch        *b_jet3_pt;   //!
   TBranch        *b_jet3_btag;   //!
   TBranch        *b_massVhad_gen;   //!
   TBranch        *b_candMasspuppicorr;   //!
   TBranch        *b_delPhilepmetJEC;   //!
   TBranch        *b_delPhijetmetJEC;   //!
   TBranch        *b_delPhijetlepJEC;   //!
*/

   TString m_dataset;
   EDBR2PKUTree(TTree *tree=0, TString dataset="");

   virtual ~EDBR2PKUTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString channelname, Double_t XS, Double_t totaleventnumber, Int_t IsData);// channelname= "mu" or "el"
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     endJob() ;

   private:
   TTree *ExTree;
   TFile *fout; 
   ofstream *file_cutflow;

};

#endif

#ifdef EDBR2PKUTree_cxx
EDBR2PKUTree::EDBR2PKUTree(TTree *tree, TString dataset) : fChain(0) 
{
//// if parameter tree is not specified (or zero), connect the file
//// used to generate this class and read the Tree.
//   if (tree == 0) {
//      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("BulkGravWW750.root");
//      if (!f || !f->IsOpen()) {
//         f = new TFile("BulkGravWW750.root");
//      }
//      TDirectory * dir = (TDirectory*)f->Get("BulkGravWW750.root:/treeDumper");
//      dir->GetObject("EDBRCandidates",tree);
//
//   }
   m_dataset=dataset;
   Init(tree);
}

EDBR2PKUTree::~EDBR2PKUTree()
{
   if (!fChain) return;
   //delete fChain->GetCurrentFile();
}

Int_t EDBR2PKUTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EDBR2PKUTree::LoadTree(Long64_t entry)
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

void EDBR2PKUTree::Init(TTree *tree)
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

   fout = new TFile(m_dataset, "RECREATE");
   ExTree = new TTree("PKUTree","PKUTree");
   file_cutflow =new ofstream(m_dataset+"_eventnum.txt");

   ExTree->Branch("CategoryID", &CategoryID, "CategoryID/I");
   ExTree->Branch("vTagID", &vTagID, "vTagID/I");
   ExTree->Branch("massVhad", &massVhad, "massVhad/D");
   ExTree->Branch("massVhadJEC", &massVhadJEC, "massVhadJEC/D");
   ExTree->Branch("mtVlep", &mtVlep, "mtVlep/D");
   ExTree->Branch("mtVlepJEC", &mtVlepJEC, "mtVlepJEC/D");
//   ExTree->Branch("sdrop", &sdrop, "sdrop/D");
   ExTree->Branch("candMass", &candMass, "candMass/D");
   ExTree->Branch("candMassJEC", &candMassJEC, "candMassJEC/D");
   ExTree->Branch("tau21", &tau21, "tau21/D");
   ExTree->Branch("triggerWeight", &triggerWeight, "triggerWeight/D");
   ExTree->Branch("lumiWeight", &lumiWeight, "lumiWeight/D");
   ExTree->Branch("pileupWeight", &pileupWeight, "pileupWeight/D");


   ExTree->Branch("lep",&lep,"lep/I");
   ExTree->Branch("channel",&channel,"channel/I");
   ExTree->Branch("run",&run,"run/I");
   ExTree->Branch("event",&event,"event/L");
   ExTree->Branch("lumi",&ls,"lumi/I");
   ExTree->Branch("nPV",&nVtx,"nPV/I");
   ExTree->Branch("pfMET",&pfMET,"pfMET/F");
   ExTree->Branch("pfMETPhi",&pfMETPhi,"pfMETPhi/F");
   ExTree->Branch("weight", &weight, "weight/D");
   ExTree->Branch("weight_nobtag", &weight_nobtag, "weight_nobtag/D");
   ExTree->Branch("IDweight", &IDweight, "IDweight/D");
   ExTree->Branch("IDweightISO", &IDweightISO, "IDweightISO/D");
   ExTree->Branch("IDweighttrk", &IDweighttrk, "IDweighttrk/D");
   ExTree->Branch("ToppTweight", &ToppTweight, "ToppTweight/D");
   ExTree->Branch("trigger_eff", &trigger_eff, "trigger_eff/D");
   ExTree->Branch("btagweight_center", &btagweight_center, "btagweight_center/D");
   ExTree->Branch("btagweight_up", &btagweight_up, "btagweight_up/D");
   ExTree->Branch("btagweight_down", &btagweight_down, "btagweight_down/D");
   ExTree->Branch("isMatch", &isMatch, "isMatch/D");
   //ExTree->Branch("isHEEP", &isHEEP, "isHEEP/O");
   //ExTree->Branch("isHighPt", &isHighPt, "isHighPt/O");
   ExTree->Branch("passFilter_HBHE", &passFilter_HBHE, "passFilter_HBHE/O");
   ExTree->Branch("passFilter_GlobalHalo", &passFilter_GlobalHalo, "passFilter_GlobalHalo/O");
   ExTree->Branch("passFilter_HBHEIso", &passFilter_HBHEIso, "passFilter_HBHEIso/O");
   ExTree->Branch("passFilter_ECALDeadCell", &passFilter_ECALDeadCell, "passFilter_ECALDeadCell/O");
   ExTree->Branch("passFilter_GoodVtx", &passFilter_GoodVtx, "passFilter_GoodVtx/O");
   ExTree->Branch("passFilter_EEBadSc", &passFilter_EEBadSc, "passFilter_EEBadSc/O");
   ExTree->Branch("passFilter_badMuon", &passFilter_badMuon, "passFilter_badMuon/O");
   ExTree->Branch("passFilter_badChargedHadron", &passFilter_badChargedHadron, "passFilter_badChargedHadron/O");

   ExTree->Branch("nLooseEle",&nLooseEle,"nLooseEle/I");
   ExTree->Branch("nLooseMu",&nLooseMu,"nLooseMu/I");
   ExTree->Branch("l_pt",&l_pt,"l_pt/F");
   ExTree->Branch("l_eta",&l_eta,"l_eta/F");
   ExTree->Branch("l_phi",&l_phi,"l_phi/F");
   ExTree->Branch("trackIso", &trackIso, "trackIso/D");
   ExTree->Branch("mtVlepnew",&mtVlepnew,"mtVlepnew/F");
   ExTree->Branch("MTVlep",&MTVlep,"MTVlep/F");

   ExTree->Branch("jet_pt",&jet_pt,"jet_pt/F");
   ExTree->Branch("jet_eta",&jet_eta,"jet_eta/F");
   ExTree->Branch("jet_phi",&jet_phi,"jet_phi/F");
   ExTree->Branch("jet_mass_pruned",&jet_mass_pruned,"jet_mass_pruned/F");
   ExTree->Branch("jet_mass_puppi",&jet_mass_puppi,"jet_mass_puppi/F");
   ExTree->Branch("jet_mass_puppi_un",&jet_mass_puppi_un,"jet_mass_puppi_un/F");
   ExTree->Branch("jet_mass_puppi_corr",&jet_mass_puppi_corr,"jet_mass_puppi_corr/F");
   ExTree->Branch("jet_pt_puppi",&jet_pt_puppi,"jet_pt_puppi/F");
   ExTree->Branch("jet_tau2tau1_puppi",&jet_tau2tau1_puppi,"jet_tau2tau1_puppi/F");
//   ExTree->Branch("jet_mass_softdrop",&jet_mass_softdrop,"jet_mass_softdrop/F");
   ExTree->Branch("jet_tau2tau1",&jet_tau2tau1,"jet_tau2tau1/F");
   ExTree->Branch("jetAK8puppi_eta",&jetAK8puppi_eta,"jetAK8puppi_eta/D");
   ExTree->Branch("jetAK8puppi_phi",&jetAK8puppi_phi,"jetAK8puppi_phi/D");
   ExTree->Branch("jetAK8puppi_sdcorr",&jetAK8puppi_sdcorr,"jetAK8puppi_sdcorr/D");
   ExTree->Branch("candMasspuppiJEC",&candMasspuppiJEC,"candMasspuppiJEC/D");
//   ExTree->Branch("candMasspuppicorr",&candMasspuppicorr,"candMasspuppicorr/D");


 ExTree->Branch("jet_mass_puppi_2",&jet_mass_puppi_2,"jet_mass_puppi_2/D");
   ExTree->Branch("jet_mass_puppi_un_2",&jet_mass_puppi_un_2,"jet_mass_puppi_un_2/D");
   ExTree->Branch("jet_mass_puppi_corr_2",&jet_mass_puppi_corr_2,"jet_mass_puppi_corr_2/D");
   ExTree->Branch("jet_pt_puppi_2",&jet_pt_puppi_2,"jet_pt_puppi_2/D");
   ExTree->Branch("jet_tau2tau1_puppi_2",&jet_tau2tau1_puppi_2,"jet_tau2tau1_puppi_2/D");
   ExTree->Branch("jet_tau4tau2_puppi",&jet_tau4tau2_puppi,"jet_tau4tau2_puppi/D");
   ExTree->Branch("jet_tau4tau2_puppi_2",&jet_tau4tau2_puppi_2,"jet_tau4tau2_puppi_2/D");
         ExTree->Branch("jetAK8puppi_eta_2",&jetAK8puppi_eta_2,"jetAK8puppi_eta_2/D");
            ExTree->Branch("jetAK8puppi_phi_2",&jetAK8puppi_phi_2,"jetAK8puppi_phi_2/D");
               ExTree->Branch("jetAK8puppi_sdcorr_2",&jetAK8puppi_sdcorr_2,"jetAK8puppi_sdcorr_2/D");
 ExTree->Branch("MassVV",&MassVV,"MassVV[3]/D");



   ExTree->Branch("W_pt",&W_pt,"W_pt/F");
   ExTree->Branch("W_eta",&W_eta,"W_eta/F");
   ExTree->Branch("W_phi",&W_phi,"W_phi/F");
   ExTree->Branch("m_lvj",&m_lvj,"m_lvj/F");
//   ExTree->Branch("M_ww",&M_ww,"M_ww/F");

//   ExTree->Branch("njets",&njets,"njets/I");
   ExTree->Branch("nbtag",&nbtag,"nbtag/I");
   ExTree->Branch("num_bJet",&num_bJet,"num_bJet/I");
   ExTree->Branch("num_bJet_loose",&num_bJet_loose,"num_bJet_loose/I");
   ExTree->Branch("num_bJet_tight",&num_bJet_tight,"num_bJet_tight/I");
   ExTree->Branch("deltaRAK4AK8_new",deltaRAK4AK8_new,"deltaRAK4AK8_new[8]/D");
//   ExTree->Branch("jet2_pt",&fjet2_pt,"jet2_pt/F");
//   ExTree->Branch("jet2_btag",&fjet2_btag,"jet2_btag/F");
//   ExTree->Branch("jet3_pt",&fjet3_pt,"jet3_pt/F");
//   ExTree->Branch("jet3_btag",&fjet3_btag,"jet3_btag/F");
//JEC

//   ExTree->Branch("corr_AK8",&corr_AK8,"corr_AK8/D");
   ExTree->Branch("jetAK8_pt",&jetAK8_pt,"jetAK8_pt/D");
   ExTree->Branch("jetAK8_mass",&jetAK8_mass,"jetAK8_mass/D");
   ExTree->Branch("jetAK8_jec",&jetAK8_jec,"jetAK8_jec/D");
//   ExTree->Branch("jetAK8_e",&jetAK8_e,"jetAK8_e/D");
//   ExTree->Branch("corr",&corr,"corr/D");
   ExTree->Branch("METraw_et",&METraw_et,"METraw_et/D");
   ExTree->Branch("METraw_phi",&METraw_phi,"METraw_phi/D");
   ExTree->Branch("METraw_sumEt",&METraw_sumEt,"METraw_sumEt/D");
   ExTree->Branch("MET_et",&MET_et,"MET_et/D");
   ExTree->Branch("met",&met,"met/D");
   ExTree->Branch("metPhi",&metPhi,"metPhi/D");
   ExTree->Branch("MET_phi",&MET_phi,"MET_phi/D");
   ExTree->Branch("MET_sumEt",&MET_sumEt,"MET_sumEt/D");

   ExTree->Branch("deltaRlepjet",&deltaRlepjet,"deltaRlepjet/D");
   ExTree->Branch("delPhijetmet",&delPhijetmet,"delPhijetmet/D");
   ExTree->Branch("delPhijetlep",&delPhijetlep,"delPhijetlep/D");
   ExTree->Branch("vbftag",&vbftag,"vbftag/I");
   ExTree->Branch("muisolation",&muisolation,"muisolation/I");


   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("ls", &ls, &b_ls);
   fChain->SetBranchAddress("nLooseEle", &nLooseEle, &b_nLooseEle);
   fChain->SetBranchAddress("nLooseMu", &nLooseMu, &b_nLooseMu);
//   fChain->SetBranchAddress("njets", &njets, &b_njets);
//   fChain->SetBranchAddress("nbtag", &nbtag, &b_nbtag);
//   fChain->SetBranchAddress("jet2_pt", &jet2_pt, &b_jet2_pt);
//   fChain->SetBranchAddress("jet2_btag", &jet2_btag, &b_jet2_btag);
//   fChain->SetBranchAddress("jet3_pt", &jet3_pt, &b_jet3_pt);
//   fChain->SetBranchAddress("jet3_btag", &jet3_btag, &b_jet3_btag);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nVtx", &nVtx, &b_nVtx);
   fChain->SetBranchAddress("numCands", &numCands, &b_numCands);
   fChain->SetBranchAddress("ptVlep", &ptVlep, &b_ptVlep);
   fChain->SetBranchAddress("ptVhad", &ptVhad, &b_ptVhad);
   fChain->SetBranchAddress("yVlep", &yVlep, &b_yVlep);
   fChain->SetBranchAddress("yVhad", &yVhad, &b_yVhad);
   fChain->SetBranchAddress("yVhadJEC", &yVhadJEC, &b_yVhadJEC);
   fChain->SetBranchAddress("phiVlep", &phiVlep, &b_phiVlep);
   fChain->SetBranchAddress("phiVhad", &phiVhad, &b_phiVhad);
   fChain->SetBranchAddress("massVlep", &massVlep, &b_massVlep);
   fChain->SetBranchAddress("mtVlep", &mtVlep, &b_mtVlep);
   fChain->SetBranchAddress("massVhad", &massVhad, &b_massVhad);
//   fChain->SetBranchAddress("massVhad_gen", &massVhad_gen, &b_massVhad_gen);
   fChain->SetBranchAddress("tau1", &tau1, &b_tau1);
   fChain->SetBranchAddress("tau2", &tau2, &b_tau2);
   fChain->SetBranchAddress("tau3", &tau3, &b_tau3);
   fChain->SetBranchAddress("tau21", &tau21, &b_tau21);
//   fChain->SetBranchAddress("sdrop", &sdrop, &b_sdrop);
   fChain->SetBranchAddress("lep", &lep, &b_lep);
   fChain->SetBranchAddress("channel", &channel, &b_channel);
   fChain->SetBranchAddress("candMass", &candMass, &b_candMass);
   fChain->SetBranchAddress("ptlep1", &ptlep1, &b_ptlep1);
   fChain->SetBranchAddress("ptlep2", &ptlep2, &b_ptlep2);
   fChain->SetBranchAddress("etalep1", &etalep1, &b_etalep1);
   fChain->SetBranchAddress("etalep2", &etalep2, &b_etalep2);
   fChain->SetBranchAddress("philep1", &philep1, &b_philep1);
   fChain->SetBranchAddress("philep2", &philep2, &b_philep2);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("metPhi", &metPhi, &b_metPhi);
   fChain->SetBranchAddress("theWeight", &theWeight, &b_theWeight);
   fChain->SetBranchAddress("nump", &nump, &b_nump);
   fChain->SetBranchAddress("numm", &numm, &b_numm);
   fChain->SetBranchAddress("npT", &npT, &b_npT);
   fChain->SetBranchAddress("npIT", &npIT, &b_npIT);
   fChain->SetBranchAddress("nBX", &nBX, &b_nBX);
   fChain->SetBranchAddress("triggerWeight", &triggerWeight, &b_triggerWeight);
   fChain->SetBranchAddress("lumiWeight", &lumiWeight, &b_lumiWeight);
   fChain->SetBranchAddress("pileupWeight", &pileupWeight, &b_pileupWeight);
   fChain->SetBranchAddress("delPhilepmet", &delPhilepmet, &b_delPhilepmet);
   fChain->SetBranchAddress("deltaRlepjet", &deltaRlepjet, &b_deltaRlepjet);
   fChain->SetBranchAddress("delPhijetmet", &delPhijetmet, &b_delPhijetmet);
   fChain->SetBranchAddress("delPhijetlep", &delPhijetlep, &b_delPhijetlep);
   fChain->SetBranchAddress("vbftag", &vbftag, &b_vbftag);
   fChain->SetBranchAddress("IDLoose", &IDLoose, &b_IDLoose);
   fChain->SetBranchAddress("IDTight", &IDTight, &b_IDTight);
   //fChain->SetBranchAddress("isHighPt", &isHighPt, &b_isHighPt);
   //fChain->SetBranchAddress("isHEEP", &isHEEP, &b_isHEEP);
   fChain->SetBranchAddress("trackIso", &trackIso, &b_trackIso);
   fChain->SetBranchAddress("muchaiso", &muchaiso, &b_muchaiso);
   fChain->SetBranchAddress("muneuiso", &muneuiso, &b_muneuiso);
   fChain->SetBranchAddress("muphoiso", &muphoiso, &b_muphoiso);
   fChain->SetBranchAddress("muPU", &muPU, &b_muPU);
   fChain->SetBranchAddress("muisolation", &muisolation, &b_muisolation);
   fChain->SetBranchAddress("METraw_et", &METraw_et, &b_METraw_et);
   fChain->SetBranchAddress("METraw_phi", &METraw_phi, &b_METraw_phi);
   fChain->SetBranchAddress("METraw_sumEt", &METraw_sumEt, &b_METraw_sumEt);
   fChain->SetBranchAddress("MET_et", &MET_et, &b_MET_et);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_sumEt", &MET_sumEt, &b_MET_sumEt);
   fChain->SetBranchAddress("jetAK8_pt", &jetAK8_pt, &b_jetAK8_pt);
   fChain->SetBranchAddress("jetAK8_mass", &jetAK8_mass, &b_jetAK8_mass);
   fChain->SetBranchAddress("jetAK8_jec", &jetAK8_jec, &b_jetAK8_jec);
   fChain->SetBranchAddress("jetAK8_pt1", jetAK8_pt1, &b_jetAK8_pt1);
   fChain->SetBranchAddress("jetAK8_eta1", jetAK8_eta1, &b_jetAK8_eta1);
   fChain->SetBranchAddress("jetAK8_mass1", jetAK8_mass1, &b_jetAK8_mass1);
   fChain->SetBranchAddress("jetAK8_SF_mass1", jetAK8_SF_mass1, &b_jetAK8_SF_mass1);
   fChain->SetBranchAddress("jetAK8_SF_mass2", jetAK8_SF_mass2, &b_jetAK8_SF_mass2);
   fChain->SetBranchAddress("jetAK8_jec1", jetAK8_jec1, &b_jetAK8_jec1);
   fChain->SetBranchAddress("jetAK8_eta", &jetAK8_eta, &b_jetAK8_eta);
   fChain->SetBranchAddress("jetAK8_phi", &jetAK8_phi, &b_jetAK8_phi);
   fChain->SetBranchAddress("candMassJEC", &candMassJEC, &b_candMassJEC);
   fChain->SetBranchAddress("ptVlepJEC", &ptVlepJEC, &b_ptVlepJEC);
   fChain->SetBranchAddress("yVlepJEC", &yVlepJEC, &b_yVlepJEC);
   fChain->SetBranchAddress("phiVlepJEC", &phiVlepJEC, &b_phiVlepJEC);
   fChain->SetBranchAddress("massVlepJEC", &massVlepJEC, &b_massVlepJEC);
   fChain->SetBranchAddress("massVhadJEC", &massVhadJEC, &b_massVhadJEC);
   fChain->SetBranchAddress("jetAK8puppi_sdJEC", &jetAK8puppi_sdJEC, &b_jetAK8puppi_sdJEC);
   fChain->SetBranchAddress("jetAK8puppi_sd", &jetAK8puppi_sd, &b_jetAK8puppi_sd);
   fChain->SetBranchAddress("jetAK8puppi_tau21", &jetAK8puppi_tau21, &b_jetAK8puppi_tau21);
   fChain->SetBranchAddress("jetAK8puppi_ptJEC", &jetAK8puppi_ptJEC, &b_jetAK8puppi_ptJEC);
   fChain->SetBranchAddress("jetAK8puppi_eta", &jetAK8puppi_eta, &b_jetAK8puppi_eta);
   fChain->SetBranchAddress("jetAK8puppi_phi", &jetAK8puppi_phi, &b_jetAK8puppi_phi);
   fChain->SetBranchAddress("jetAK8puppi_sdcorr", &jetAK8puppi_sdcorr, &b_jetAK8puppi_sdcorr);
   fChain->SetBranchAddress("candMasspuppiJEC", &candMasspuppiJEC, &b_candMasspuppiJEC);


fChain->SetBranchAddress("jetAK8puppi_sdJEC_2", &jetAK8puppi_sdJEC_2, &b_jetAK8puppi_sdJEC_2);
   fChain->SetBranchAddress("jetAK8puppi_sd_2", &jetAK8puppi_sd_2, &b_jetAK8puppi_sd_2);
   fChain->SetBranchAddress("jetAK8puppi_tau21_2", &jetAK8puppi_tau21_2, &b_jetAK8puppi_tau21_2);
   fChain->SetBranchAddress("jetAK8puppi_tau42_2", &jetAK8puppi_tau42_2, &b_jetAK8puppi_tau42_2);
fChain->SetBranchAddress("jetAK8puppi_tau42", &jetAK8puppi_tau42, &b_jetAK8puppi_tau42);
   fChain->SetBranchAddress("jetAK8puppi_ptJEC_2", &jetAK8puppi_ptJEC_2, &b_jetAK8puppi_ptJEC_2);
   fChain->SetBranchAddress("jetAK8puppi_eta_2", &jetAK8puppi_eta_2, &b_jetAK8puppi_eta_2);
   fChain->SetBranchAddress("jetAK8puppi_phi_2", &jetAK8puppi_phi_2, &b_jetAK8puppi_phi_2);
   fChain->SetBranchAddress("jetAK8puppi_sdcorr_2", &jetAK8puppi_sdcorr_2, &b_jetAK8puppi_sdcorr_2);
fChain->SetBranchAddress("massww",&massww);


//   fChain->SetBranchAddress("candMasspuppicorr", &candMasspuppicorr, &b_candMasspuppicorr);
//   fChain->SetBranchAddress("sdropJEC", &sdropJEC, &b_sdropJEC);
   fChain->SetBranchAddress("mtVlepJEC", &mtVlepJEC, &b_mtVlepJEC);
//   fChain->SetBranchAddress("delPhilepmetJEC", &delPhilepmetJEC, &b_delPhilepmetJEC);
//   fChain->SetBranchAddress("delPhijetmetJEC", &delPhijetmetJEC, &b_delPhijetmetJEC);
//   fChain->SetBranchAddress("delPhijetlepJEC", &delPhijetlepJEC, &b_delPhijetlepJEC);
   fChain->SetBranchAddress("HLT_Ele1", &HLT_Ele1, &b_HLT_Ele1);
   fChain->SetBranchAddress("HLT_Ele2", &HLT_Ele2, &b_HLT_Ele2);
   fChain->SetBranchAddress("HLT_Ele3", &HLT_Ele3, &b_HLT_Ele3);
   fChain->SetBranchAddress("HLT_Ele4", &HLT_Ele4, &b_HLT_Ele4);
   fChain->SetBranchAddress("HLT_Ele5", &HLT_Ele5, &b_HLT_Ele5);
   fChain->SetBranchAddress("HLT_Ele6", &HLT_Ele6, &b_HLT_Ele6);
   fChain->SetBranchAddress("HLT_Ele7", &HLT_Ele7, &b_HLT_Ele7);
   fChain->SetBranchAddress("HLT_Ele8", &HLT_Ele8, &b_HLT_Ele8);
   fChain->SetBranchAddress("HLT_Mu1", &HLT_Mu1, &b_HLT_Mu1);
   fChain->SetBranchAddress("HLT_Mu2", &HLT_Mu2, &b_HLT_Mu2);
   fChain->SetBranchAddress("HLT_Mu3", &HLT_Mu3, &b_HLT_Mu3);
   fChain->SetBranchAddress("HLT_Mu4", &HLT_Mu4, &b_HLT_Mu4);
   fChain->SetBranchAddress("HLT_Mu5", &HLT_Mu5, &b_HLT_Mu5);
   fChain->SetBranchAddress("HLT_Mu6", &HLT_Mu6, &b_HLT_Mu6);
   fChain->SetBranchAddress("HLT_Mu7", &HLT_Mu7, &b_HLT_Mu7);
   fChain->SetBranchAddress("HLT_Mu8", &HLT_Mu8, &b_HLT_Mu8);
   fChain->SetBranchAddress("HLT_Mu9", &HLT_Mu9, &b_HLT_Mu9);
   fChain->SetBranchAddress("HLT_Mu10", &HLT_Mu10, &b_HLT_Mu10);
   fChain->SetBranchAddress("HLT_Mu11", &HLT_Mu11, &b_HLT_Mu11);
   fChain->SetBranchAddress("HLT_Mu12", &HLT_Mu12, &b_HLT_Mu12);
   fChain->SetBranchAddress("passFilter_HBHE", &passFilter_HBHE, &b_passFilter_HBHE_);
   fChain->SetBranchAddress("passFilter_HBHEIso", &passFilter_HBHEIso, &b_passFilter_HBHEIso_);
   fChain->SetBranchAddress("passFilter_GlobalHalo", &passFilter_GlobalHalo, &b_passFilter_GlobalHalo_);
   fChain->SetBranchAddress("passFilter_ECALDeadCell", &passFilter_ECALDeadCell, &b_passFilter_ECALDeadCell_);
   fChain->SetBranchAddress("passFilter_GoodVtx", &passFilter_GoodVtx, &b_passFilter_GoodVtx_);
   fChain->SetBranchAddress("passFilter_EEBadSc", &passFilter_EEBadSc, &b_passFilter_EEBadSc_);
   fChain->SetBranchAddress("passFilter_badMuon", &passFilter_badMuon, &b_passFilter_badMuon_);
   fChain->SetBranchAddress("passFilter_badChargedHadron", &passFilter_badChargedHadron, &b_passFilter_badChargedHadron_);
   fChain->SetBranchAddress("ak4jet_hf", ak4jet_hf, &b_ak4jet_hf);
   fChain->SetBranchAddress("ak4jet_pf", ak4jet_pf, &b_ak4jet_pf);
   fChain->SetBranchAddress("ak4jet_pt", ak4jet_pt, &b_ak4jet_pt);
   fChain->SetBranchAddress("ak4jet_pt_uncorr", ak4jet_pt_uncorr, &b_ak4jet_pt_uncorr);
   fChain->SetBranchAddress("ak4jet_eta", ak4jet_eta, &b_ak4jet_eta);
   fChain->SetBranchAddress("ak4jet_phi", ak4jet_phi, &b_ak4jet_phi);
   fChain->SetBranchAddress("ak4jet_e", ak4jet_e, &b_ak4jet_e);
   fChain->SetBranchAddress("ak4jet_dr", ak4jet_dr, &b_ak4jet_dr);
   fChain->SetBranchAddress("ak4jet_csv", ak4jet_csv, &b_ak4jet_csv);
   fChain->SetBranchAddress("ak4jet_icsv", ak4jet_icsv, &b_ak4jet_icsv);
   fChain->SetBranchAddress("deltaRAK4AK8", deltaRAK4AK8, &b_deltaRAK4AK8);
   fChain->SetBranchAddress("ak4jet_IDLoose", ak4jet_IDLoose, &b_ak4jet_IDLoose);
   fChain->SetBranchAddress("ak4jet_IDTight", ak4jet_IDTight, &b_ak4jet_IDTight);
   fChain->SetBranchAddress("gen_gra_m", &gen_gra_m, &b_gen_gra_m);
   fChain->SetBranchAddress("gen_gra_pt", &gen_gra_pt, &b_gen_gra_pt);
   fChain->SetBranchAddress("gen_ele_pt", &gen_ele_pt, &b_gen_ele_pt);
   fChain->SetBranchAddress("gen_ele_eta", &gen_ele_eta, &b_gen_ele_eta);
   fChain->SetBranchAddress("gen_ele_phi", &gen_ele_phi, &b_gen_ele_phi);
   fChain->SetBranchAddress("gen_ele_e", &gen_ele_e, &b_gen_ele_e);
   fChain->SetBranchAddress("gen_mu_pt", &gen_mu_pt, &b_gen_mu_pt);
   fChain->SetBranchAddress("gen_mu_eta", &gen_mu_eta, &b_gen_mu_eta);
   fChain->SetBranchAddress("gen_mu_phi", &gen_mu_phi, &b_gen_mu_phi);
   fChain->SetBranchAddress("gen_mu_e", &gen_mu_e, &b_gen_mu_e);
   fChain->SetBranchAddress("genmatch_ele_pt", &genmatch_ele_pt, &b_genmatch_ele_pt);
   fChain->SetBranchAddress("genmatch_ele_eta", &genmatch_ele_eta, &b_genmatch_ele_eta);
   fChain->SetBranchAddress("genmatch_ele_phi", &genmatch_ele_phi, &b_genmatch_ele_phi);
   fChain->SetBranchAddress("genmatch_ele_e", &genmatch_ele_e, &b_genmatch_ele_e);
   fChain->SetBranchAddress("genmatch_ele_dr", &genmatch_ele_dr, &b_genmatch_ele_dr);
   fChain->SetBranchAddress("genmatch_mu_pt", &genmatch_mu_pt, &b_genmatch_mu_pt);
   fChain->SetBranchAddress("genmatch_mu_eta", &genmatch_mu_eta, &b_genmatch_mu_eta);
   fChain->SetBranchAddress("genmatch_mu_phi", &genmatch_mu_phi, &b_genmatch_mu_phi);
   fChain->SetBranchAddress("genmatch_mu_e", &genmatch_mu_e, &b_genmatch_mu_e);
   fChain->SetBranchAddress("genmatch_mu_dr", &genmatch_mu_dr, &b_genmatch_mu_dr);
   fChain->SetBranchAddress("gentop_pt", &gentop_pt, &b_gentop_pt);
   fChain->SetBranchAddress("gentop_eta", &gentop_eta, &b_gentop_eta);
   fChain->SetBranchAddress("gentop_phi", &gentop_phi, &b_gentop_phi);
   fChain->SetBranchAddress("gentop_mass", &gentop_mass, &b_gentop_mass);
   fChain->SetBranchAddress("genantitop_pt", &genantitop_pt, &b_genantitop_pt);
   fChain->SetBranchAddress("genantitop_eta", &genantitop_eta, &b_genantitop_eta);
   fChain->SetBranchAddress("genantitop_phi", &genantitop_phi, &b_genantitop_phi);
   fChain->SetBranchAddress("genantitop_mass", &genantitop_mass, &b_genantitop_mass);
   fChain->SetBranchAddress("ptGenVlep", &ptGenVlep, &b_ptGenVlep);
   fChain->SetBranchAddress("etaGenVlep", &etaGenVlep, &b_etaGenVlep);
   fChain->SetBranchAddress("phiGenVlep", &phiGenVlep, &b_phiGenVlep);
   fChain->SetBranchAddress("massGenVlep", &massGenVlep, &b_massGenVlep);
   fChain->SetBranchAddress("ptGenVhad", &ptGenVhad, &b_ptGenVhad);
   fChain->SetBranchAddress("etaGenVhad", &etaGenVhad, &b_etaGenVhad);
   fChain->SetBranchAddress("phiGenVhad", &phiGenVhad, &b_phiGenVhad);
   fChain->SetBranchAddress("massGenVhad", &massGenVhad, &b_massGenVhad);
   Notify();
}

Bool_t EDBR2PKUTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void EDBR2PKUTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

void EDBR2PKUTree::endJob() {
   fout->cd();
   ExTree->Write();
   fout->Write();
   fout->Close();
}

Int_t EDBR2PKUTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef EDBR2PKUTree_cxx
