//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jul 20 22:32:58 2015 by ROOT version 5.34/18
// from TTree AC1B/AC1B
// found on file: /nfs/dust/cms/user/rasp/ntuples/PHYS14/VBF_HToTauTau_M-125_13TeV-powheg-pythia6/VBF_HToTauTau_M-125_13TeV-powheg-pythia6_0.root
//////////////////////////////////////////////////////////

#ifndef AC1B_h
#define AC1B_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <utility>

// Fixed size dimensions of array or collections stored in the TTree if any.
const Int_t kMaxhltriggerresults = 11;
const Int_t kMaxhltriggerprescales = 11;

using namespace std;

class AC1B {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          errors;
   UInt_t          event_nr;
   UInt_t          event_run;
   UInt_t          event_timeunix;
   UInt_t          event_timemicrosec;
   UInt_t          event_luminosityblock;
   UChar_t         trigger_level1bits[8];
   UChar_t         trigger_level1[128];
   UChar_t         trigger_HLT[128];
   Float_t         rho;
   UInt_t          primvertex_count;
   Float_t         primvertex_x;
   Float_t         primvertex_y;
   Float_t         primvertex_z;
   Float_t         primvertex_chi2;
   Float_t         primvertex_ndof;
   Float_t         primvertex_ptq;
   Int_t           primvertex_ntracks;
   Float_t         primvertex_cov[6];
   UInt_t          muon_count;
   Float_t         muon_px[100];   //[muon_count]
   Float_t         muon_py[100];   //[muon_count]
   Float_t         muon_pz[100];   //[muon_count]
   Float_t         muon_pt[100];   //[muon_count]
   Float_t         muon_eta[100];   //[muon_count]
   Float_t         muon_phi[100];   //[muon_count]
   Float_t         muon_pterror[100];   //[muon_count]
   Float_t         muon_chi2[100];   //[muon_count]
   Float_t         muon_normChi2[100];   //[muon_count]
   Float_t         muon_ndof[100];   //[muon_count]
   Float_t         muon_charge[100];   //[muon_count]
   Float_t         muon_miniISO[100];   //[muon_count]
   Float_t         muon_combQ_chi2LocalPosition[100];   //[muon_count]
   Float_t         muon_combQ_trkKink[100];   //[muon_count]
   Float_t         muon_validFraction[100];   //[muon_count]
   Float_t         muon_segmentComp[100];   //[muon_count]
   UInt_t          muon_nMuonStations[100];   //[muon_count]
   UInt_t          muon_nMuonHits[100];   //[muon_count]
   UInt_t          muon_nPixelHits[100];   //[muon_count]
   UInt_t          muon_nTrackerHits[100];   //[muon_count]
   Float_t         muon_dxy[100];   //[muon_count]
   Float_t         muon_dxyerr[100];   //[muon_count]
   Float_t         muon_dz[100];   //[muon_count]
   Float_t         muon_dzerr[100];   //[muon_count]
   Float_t         muon_chargedHadIso[100];   //[muon_count]
   Float_t         muon_neutralHadIso[100];   //[muon_count]
   Float_t         muon_photonIso[100];   //[muon_count]
   Float_t         muon_puIso[100];   //[muon_count]
   Float_t         muon_r03_sumChargedHadronPt[100];   //[muon_count]
   Float_t         muon_r03_sumChargedParticlePt[100];   //[muon_count]
   Float_t         muon_r03_sumNeutralHadronEt[100];   //[muon_count]
   Float_t         muon_r03_sumPhotonEt[100];   //[muon_count]
   Float_t         muon_r03_sumNeutralHadronEtHighThreshold[100];   //[muon_count]
   Float_t         muon_r03_sumPhotonEtHighThreshold[100];   //[muon_count]
   Float_t         muon_r03_sumPUPt[100];   //[muon_count]
   Float_t         muon_r04_sumChargedHadronPt[100];   //[muon_count]
   Float_t         muon_r04_sumChargedParticlePt[100];   //[muon_count]
   Float_t         muon_r04_sumNeutralHadronEt[100];   //[muon_count]
   Float_t         muon_r04_sumPhotonEt[100];   //[muon_count]
   Float_t         muon_r04_sumNeutralHadronEtHighThreshold[100];   //[muon_count]
   Float_t         muon_r04_sumPhotonEtHighThreshold[100];   //[muon_count]
   Float_t         muon_r04_sumPUPt[100];   //[muon_count]
   Bool_t          muon_isPF[100];   //[muon_count]
   Bool_t          muon_isGlobal[100];   //[muon_count]
   Bool_t          muon_isTracker[100];   //[muon_count]
   Bool_t          muon_isTight[100];   //[muon_count]
   Bool_t          muon_isLoose[100];   //[muon_count]
   Bool_t          muon_isMedium[100];   //[muon_count]
   UInt_t          pfjet_count;
   Float_t         pfjet_e[1000];   //[pfjet_count]
   Float_t         pfjet_px[1000];   //[pfjet_count]
   Float_t         pfjet_py[1000];   //[pfjet_count]
   Float_t         pfjet_pz[1000];   //[pfjet_count]
   Float_t         pfjet_pt[1000];   //[pfjet_count]
   Float_t         pfjet_eta[1000];   //[pfjet_count]
   Float_t         pfjet_phi[1000];   //[pfjet_count]
   Float_t         pfjet_neutralhadronicenergy[1000];   //[pfjet_count]
   Float_t         pfjet_chargedhadronicenergy[1000];   //[pfjet_count]
   Float_t         pfjet_neutralemenergy[1000];   //[pfjet_count]
   Float_t         pfjet_chargedemenergy[1000];   //[pfjet_count]
   UInt_t          pfjet_chargedmulti[1000];   //[pfjet_count]
   UInt_t          pfjet_neutralmulti[1000];   //[pfjet_count]
   UInt_t          pfjet_chargedhadronmulti[1000];   //[pfjet_count]
   Float_t         pfjet_energycorr[1000];   //[pfjet_count]
   Float_t         pfjet_energycorr_l1fastjet[1000];   //[pfjet_count]
   Float_t         pfjet_energycorr_l2relative[1000];   //[pfjet_count]
   Float_t         pfjet_energycorr_l3absolute[1000];   //[pfjet_count]
   Float_t         pfjet_pu_jet_full_mva[1000];   //[pfjet_count]
   Int_t           pfjet_flavour[1000];   //[pfjet_count]
   Float_t         pfjet_btag[1000][10];   //[pfjet_count]
   UInt_t          electron_count;
   Float_t         electron_px[100];   //[electron_count]
   Float_t         electron_py[100];   //[electron_count]
   Float_t         electron_pz[100];   //[electron_count]
   Float_t         electron_pt[100];   //[electron_count]
   Float_t         electron_eta[100];   //[electron_count]
   Float_t         electron_phi[100];   //[electron_count]
   Float_t         electron_trackchi2[100];   //[electron_count]
   Float_t         electron_trackndof[100];   //[electron_count]
   Float_t         electron_outerx[100];   //[electron_count]
   Float_t         electron_outery[100];   //[electron_count]
   Float_t         electron_outerz[100];   //[electron_count]
   Float_t         electron_closestpointx[100];   //[electron_count]
   Float_t         electron_closestpointy[100];   //[electron_count]
   Float_t         electron_closestpointz[100];   //[electron_count]
   Float_t         electron_esuperclusterovertrack[100];   //[electron_count]
   Float_t         electron_eseedclusterovertrack[100];   //[electron_count]
   Float_t         electron_deltaetasuperclustertrack[100];   //[electron_count]
   Float_t         electron_deltaphisuperclustertrack[100];   //[electron_count]
   Float_t         electron_e1x5[100];   //[electron_count]
   Float_t         electron_e2x5[100];   //[electron_count]
   Float_t         electron_e5x5[100];   //[electron_count]
   Float_t         electron_sigmaetaeta[100];   //[electron_count]
   Float_t         electron_sigmaietaieta[100];   //[electron_count]
   Float_t         electron_ehcaloverecal[100];   //[electron_count]
   Float_t         electron_ehcaloverecaldepth1[100];   //[electron_count]
   Float_t         electron_ehcaloverecaldepth2[100];   //[electron_count]
   Float_t         electron_full5x5_sigmaietaieta[100];   //[electron_count]
   Float_t         electron_ooemoop[100];   //[electron_count]
   Float_t         electron_miniISO[100];   //[electron_count]
   Float_t         electron_superclusterEta[100];   //[electron_count]
   Float_t         electron_superclusterPhi[100];   //[electron_count]
   Float_t         electron_superclusterX[100];   //[electron_count]
   Float_t         electron_superclusterY[100];   //[electron_count]
   Float_t         electron_superclusterZ[100];   //[electron_count]
   Float_t         electron_chargedHadIso[100];   //[electron_count]
   Float_t         electron_neutralHadIso[100];   //[electron_count]
   Float_t         electron_photonIso[100];   //[electron_count]
   Float_t         electron_puIso[100];   //[electron_count]
   Float_t         electron_r03_sumChargedHadronPt[100];   //[electron_count]
   Float_t         electron_r03_sumChargedParticlePt[100];   //[electron_count]
   Float_t         electron_r03_sumNeutralHadronEt[100];   //[electron_count]
   Float_t         electron_r03_sumPhotonEt[100];   //[electron_count]
   Float_t         electron_r03_sumNeutralHadronEtHighThreshold[100];   //[electron_count]
   Float_t         electron_r03_sumPhotonEtHighThreshold[100];   //[electron_count]
   Float_t         electron_r03_sumPUPt[100];   //[electron_count]
   UChar_t         electron_nhits[100];   //[electron_count]
   UChar_t         electron_npixelhits[100];   //[electron_count]
   UChar_t         electron_nmissinghits[100];   //[electron_count]
   UChar_t         electron_nmissinginnerhits[100];   //[electron_count]
   UChar_t         electron_npixellayers[100];   //[electron_count]
   UChar_t         electron_nstriplayers[100];   //[electron_count]
   Float_t         electron_dxy[100];   //[electron_count]
   Float_t         electron_dxyerr[100];   //[electron_count]
   Float_t         electron_dz[100];   //[electron_count]
   Float_t         electron_dzerr[100];   //[electron_count]
   Float_t         electron_convdist[100];   //[electron_count]
   UInt_t          electron_gapinfo[100];   //[electron_count]
   UInt_t          electron_chargeinfo[100];   //[electron_count]
   Float_t         electron_fbrems[100];   //[electron_count]
   Int_t           electron_numbrems[100];   //[electron_count]
   Float_t         electron_charge[100];   //[electron_count]
   Int_t           electron_superclusterindex[100];   //[electron_count]
   UChar_t         electron_info[100];   //[electron_count]
   Float_t         electron_mva_id_nontrigPhys14[100];   //[electron_count]
   Bool_t          electron_pass_conversion[100];   //[electron_count]
   UInt_t          tau_count;
   Float_t         tau_e[6];   //[tau_count]
   Float_t         tau_px[6];   //[tau_count]
   Float_t         tau_py[6];   //[tau_count]
   Float_t         tau_pz[6];   //[tau_count]
   Float_t         tau_mass[6];   //[tau_count]
   Float_t         tau_eta[6];   //[tau_count]
   Float_t         tau_phi[6];   //[tau_count]
   Float_t         tau_pt[6];   //[tau_count]
   Float_t         tau_vertexx[6];   //[tau_count]
   Float_t         tau_vertexy[6];   //[tau_count]
   Float_t         tau_vertexz[6];   //[tau_count]
   Float_t         tau_dxy[6];   //[tau_count]
   Float_t         tau_dz[6];   //[tau_count]
   Float_t         tau_ip3d[6];   //[tau_count]
   Float_t         tau_ip3dSig[6];   //[tau_count]
   Float_t         tau_charge[6];   //[tau_count]
   Float_t         tau_genjet_px[6];   //[tau_count]
   Float_t         tau_genjet_py[6];   //[tau_count]
   Float_t         tau_genjet_pz[6];   //[tau_count]
   Float_t         tau_genjet_e[6];   //[tau_count]
   Float_t         tau_decayModeFinding[6];   //[tau_count]
   Float_t         tau_decayModeFindingNewDMs[6];   //[tau_count]
   Float_t         tau_byCombinedIsolationDeltaBetaCorrRaw3Hits[6];   //[tau_count]
   Float_t         tau_byLooseCombinedIsolationDeltaBetaCorr3Hits[6];   //[tau_count]
   Float_t         tau_byMediumCombinedIsolationDeltaBetaCorr3Hits[6];   //[tau_count]
   Float_t         tau_byTightCombinedIsolationDeltaBetaCorr3Hits[6];   //[tau_count]
   Float_t         tau_chargedIsoPtSum[6];   //[tau_count]
   Float_t         tau_neutralIsoPtSum[6];   //[tau_count]
   Float_t         tau_puCorrPtSum[6];   //[tau_count]
   Float_t         tau_againstMuonLoose3[6];   //[tau_count]
   Float_t         tau_againstMuonTight3[6];   //[tau_count]
   Float_t         tau_againstElectronVLooseMVA5[6];   //[tau_count]
   Float_t         tau_againstElectronVTightMVA5[6];   //[tau_count]
   Float_t         tau_againstElectronLooseMVA5[6];   //[tau_count]
   Float_t         tau_againstElectronMediumMVA5[6];   //[tau_count]
   Float_t         tau_againstElectronTightMVA5[6];   //[tau_count]
   UInt_t          tau_ntracks_pt05[6];   //[tau_count]
   UInt_t          tau_ntracks_pt08[6];   //[tau_count]
   UInt_t          tau_ntracks_pt1[6];   //[tau_count]
   Bool_t          tau_L1trigger_match[6];   //[tau_count]
   UInt_t          tau_signalChargedHadrCands_size[6];   //[tau_count]
   UInt_t          tau_signalNeutralHadrCands_size[6];   //[tau_count]
   UInt_t          tau_signalGammaCands_size[6];   //[tau_count]
   UInt_t          tau_isolationChargedHadrCands_size[6];   //[tau_count]
   UInt_t          tau_isolationNeutralHadrCands_size[6];   //[tau_count]
   UInt_t          tau_isolationGammaCands_size[6];   //[tau_count]
   Char_t          tau_genDecayMode_name[6];   //[tau_count]
   Int_t           tau_genDecayMode[6];   //[tau_count]
   Char_t          tau_decayMode_name[6];   //[tau_count]
   Int_t           tau_decayMode[6];   //[tau_count]
   Float_t         pfmet_ex;
   Float_t         pfmet_ey;
   Float_t         pfmet_ez;
   Float_t         pfmet_pt;
   Float_t         pfmet_phi;
   Float_t         pfmet_sigxx;
   Float_t         pfmet_sigxy;
   Float_t         pfmet_sigyx;
   Float_t         pfmet_sigyy;
   Float_t         genmet_ex;
   Float_t         genmet_ey;
   UInt_t          mvamet_count;
   Float_t         mvamet_ex[4];   //[mvamet_count]
   Float_t         mvamet_ey[4];   //[mvamet_count]
   Float_t         mvamet_sigxx[4];   //[mvamet_count]
   Float_t         mvamet_sigxy[4];   //[mvamet_count]
   Float_t         mvamet_sigyx[4];   //[mvamet_count]
   Float_t         mvamet_sigyy[4];   //[mvamet_count]
   UChar_t         mvamet_channel[4];   //[mvamet_count]
   Float_t         genweight;
   Float_t         genid1;
   Float_t         genx1;
   Float_t         genid2;
   Float_t         genx2;
   Float_t         genScale;
   Int_t           numpileupinteractionsminus;
   Int_t           numpileupinteractions;
   Int_t           numpileupinteractionsplus;
   Float_t         numtruepileupinteractions;
   UInt_t          gentau_count;
   Float_t         gentau_e[14];   //[gentau_count]
   Float_t         gentau_px[14];   //[gentau_count]
   Float_t         gentau_py[14];   //[gentau_count]
   Float_t         gentau_pz[14];   //[gentau_count]
   Float_t         gentau_visible_e[14];   //[gentau_count]
   Float_t         gentau_visible_px[14];   //[gentau_count]
   Float_t         gentau_visible_py[14];   //[gentau_count]
   Float_t         gentau_visible_pz[14];   //[gentau_count]
   Float_t         gentau_visible_pt[14];   //[gentau_count]
   Float_t         gentau_visible_eta[14];   //[gentau_count]
   Float_t         gentau_visible_phi[14];   //[gentau_count]
   Float_t         gentau_visible_mass[14];   //[gentau_count]
   Int_t           gentau_decayMode[14];   //[gentau_count]
   Char_t          gentau_decayMode_name[14];   //[gentau_count]
   UChar_t         gentau_mother[14];   //[gentau_count]
   UInt_t          genparticles_count;
   Float_t         genparticles_e[15];   //[genparticles_count]
   Float_t         genparticles_px[15];   //[genparticles_count]
   Float_t         genparticles_py[15];   //[genparticles_count]
   Float_t         genparticles_pz[15];   //[genparticles_count]
   Float_t         genparticles_vx[15];   //[genparticles_count]
   Float_t         genparticles_vy[15];   //[genparticles_count]
   Float_t         genparticles_vz[15];   //[genparticles_count]
   Int_t           genparticles_pdgid[15];   //[genparticles_count]
   Int_t           genparticles_status[15];   //[genparticles_count]
   UInt_t          genparticles_info[15];   //[genparticles_count]
   UChar_t         genparticles_mother[15];   //[genparticles_count]
   UInt_t          trigobject_count;
   Float_t         trigobject_px[19];   //[trigobject_count]
   Float_t         trigobject_py[19];   //[trigobject_count]
   Float_t         trigobject_pz[19];   //[trigobject_count]
   Float_t         trigobject_pt[19];   //[trigobject_count]
   Float_t         trigobject_eta[19];   //[trigobject_count]
   Float_t         trigobject_phi[19];   //[trigobject_count]
   Bool_t          trigobject_filters[19][50];   //[trigobject_count]
   Bool_t          trigobject_isMuon[19];   //[trigobject_count]
   Bool_t          trigobject_isElectron[19];   //[trigobject_count]
   Bool_t          trigobject_isTau[19];   //[trigobject_count]
   Bool_t          trigobject_isJet[19];   //[trigobject_count]
   Bool_t          trigobject_isMET[19];   //[trigobject_count]
   vector<string>  *run_hltnames;
   vector<string>  *run_hltfilters;
   vector<string>  *run_hltmufilters;
   vector<string>  *run_hltelectronfilters;
   vector<string>  *run_hlttaufilters;
   vector<string>  *run_hltphotonfilters;
   vector<string>  *run_hltjetfilters;
   vector<string>  *run_floattaudiscriminators;
   vector<string>  *run_binarytaudiscriminators;
   vector<string>  *run_btagdiscriminators;
   Int_t           hltriggerresults_;
   string          hltriggerresults_first[kMaxhltriggerresults];
   Int_t           hltriggerresults_second[kMaxhltriggerresults];   //[hltriggerresults_]
   Int_t           hltriggerprescales_;
   string          hltriggerprescales_first[kMaxhltriggerprescales];
   Int_t           hltriggerprescales_second[kMaxhltriggerprescales];   //[hltriggerprescales_]
   vector<string>  *hltriggerresultsV;

   // List of branches
   TBranch        *b_errors;   //!
   TBranch        *b_event_nr;   //!
   TBranch        *b_event_run;   //!
   TBranch        *b_event_timeunix;   //!
   TBranch        *b_event_timemicrosec;   //!
   TBranch        *b_event_luminosityblock;   //!
   TBranch        *b_trigger_level1bits;   //!
   TBranch        *b_trigger_level1;   //!
   TBranch        *b_trigger_HLT;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_primvertex_count;   //!
   TBranch        *b_primvertex_x;   //!
   TBranch        *b_primvertex_y;   //!
   TBranch        *b_primvertex_z;   //!
   TBranch        *b_primvertex_chi2;   //!
   TBranch        *b_primvertex_ndof;   //!
   TBranch        *b_primvertex_pdf;   //!
   TBranch        *b_primvertex_ntracks;   //!
   TBranch        *b_primvertex_cov;   //!
   TBranch        *b_muon_count;   //!
   TBranch        *b_muon_px;   //!
   TBranch        *b_muon_py;   //!
   TBranch        *b_muon_pz;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_pterror;   //!
   TBranch        *b_muon_chi2;   //!
   TBranch        *b_muon_normChi2;   //!
   TBranch        *b_muon_ndof;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_miniISO;   //!
   TBranch        *b_muon_combQ_chi2LocalPosition;   //!
   TBranch        *b_muon_combQ_trkKink;   //!
   TBranch        *b_muon_validFraction;   //!
   TBranch        *b_muon_segmentComp;   //!
   TBranch        *b_muon_nMuonStations;   //!
   TBranch        *b_muon_nMuonHits;   //!
   TBranch        *b_muon_nPixelHits;   //!
   TBranch        *b_muon_nTrackerHits;   //!
   TBranch        *b_muon_dxy;   //!
   TBranch        *b_muon_dxyerr;   //!
   TBranch        *b_muon_dz;   //!
   TBranch        *b_muon_dzerr;   //!
   TBranch        *b_muon_chargedHadIso;   //!
   TBranch        *b_muon_neutralHadIso;   //!
   TBranch        *b_muon_photonIso;   //!
   TBranch        *b_muon_puIso;   //!
   TBranch        *b_muon_r03_sumChargedHadronPt;   //!
   TBranch        *b_muon_r03_sumChargedParticlePt;   //!
   TBranch        *b_muon_r03_sumNeutralHadronEt;   //!
   TBranch        *b_muon_r03_sumPhotonEt;   //!
   TBranch        *b_muon_r03_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_muon_r03_sumPhotonEtHighThreshold;   //!
   TBranch        *b_muon_r03_sumPUPt;   //!
   TBranch        *b_muon_r04_sumChargedHadronPt;   //!
   TBranch        *b_muon_r04_sumChargedParticlePt;   //!
   TBranch        *b_muon_r04_sumNeutralHadronEt;   //!
   TBranch        *b_muon_r04_sumPhotonEt;   //!
   TBranch        *b_muon_r04_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_muon_r04_sumPhotonEtHighThreshold;   //!
   TBranch        *b_muon_r04_sumPUPt;   //!
   TBranch        *b_muon_isPF;   //!
   TBranch        *b_muon_isGlobal;   //!
   TBranch        *b_muon_isTracker;   //!
   TBranch        *b_muon_isTight;   //!
   TBranch        *b_muon_isLoose;   //!
   TBranch        *b_muon_isMedium;   //!
   TBranch        *b_pfjet_count;   //!
   TBranch        *b_pfjet_e;   //!
   TBranch        *b_pfjet_px;   //!
   TBranch        *b_pfjet_py;   //!
   TBranch        *b_pfjet_pz;   //!
   TBranch        *b_pfjet_pt;   //!
   TBranch        *b_pfjet_eta;   //!
   TBranch        *b_pfjet_phi;   //!
   TBranch        *b_pfjet_neutralhadronicenergy;   //!
   TBranch        *b_pfjet_chargedhadronicenergy;   //!
   TBranch        *b_pfjet_neutralemenergy;   //!
   TBranch        *b_pfjet_chargedemenergy;   //!
   TBranch        *b_pfjet_chargedmulti;   //!
   TBranch        *b_pfjet_neutralmulti;   //!
   TBranch        *b_pfjet_chargedhadronmulti;   //!
   TBranch        *b_pfjet_energycorr;   //!
   TBranch        *b_pfjet_energycorr_l1fastjet;   //!
   TBranch        *b_pfjet_energycorr_l2relative;   //!
   TBranch        *b_pfjet_energycorr_l3absolute;   //!
   TBranch        *b_pfjet_pu_jet_full_mva;   //!
   TBranch        *b_pfjet_flavour;   //!
   TBranch        *b_pfjet_btag;   //!
   TBranch        *b_electron_count;   //!
   TBranch        *b_electron_px;   //!
   TBranch        *b_electron_py;   //!
   TBranch        *b_electron_pz;   //!
   TBranch        *b_electron_pt;   //!
   TBranch        *b_electron_eta;   //!
   TBranch        *b_electron_phi;   //!
   TBranch        *b_electron_trackchi2;   //!
   TBranch        *b_electron_trackndof;   //!
   TBranch        *b_electron_outerx;   //!
   TBranch        *b_electron_outery;   //!
   TBranch        *b_electron_outerz;   //!
   TBranch        *b_electron_closestpointx;   //!
   TBranch        *b_electron_closestpointy;   //!
   TBranch        *b_electron_closestpointz;   //!
   TBranch        *b_electron_esuperclusterovertrack;   //!
   TBranch        *b_electron_eseedclusterovertrack;   //!
   TBranch        *b_electron_deltaetasuperclustertrack;   //!
   TBranch        *b_electron_deltaphisuperclustertrack;   //!
   TBranch        *b_electron_e1x5;   //!
   TBranch        *b_electron_e2x5;   //!
   TBranch        *b_electron_e5x5;   //!
   TBranch        *b_electron_sigmaetaeta;   //!
   TBranch        *b_electron_sigmaietaieta;   //!
   TBranch        *b_electron_ehcaloverecal;   //!
   TBranch        *b_electron_ehcaloverecaldepth1;   //!
   TBranch        *b_electron_ehcaloverecaldepth2;   //!
   TBranch        *b_electron_full5x5_sigmaietaieta;   //!
   TBranch        *b_electron_ooemoop;   //!
   TBranch        *b_electron_miniISO;   //!
   TBranch        *b_electron_superclusterEta;   //!
   TBranch        *b_electron_superclusterPhi;   //!
   TBranch        *b_electron_superclusterX;   //!
   TBranch        *b_electron_superclusterY;   //!
   TBranch        *b_electron_superclusterZ;   //!
   TBranch        *b_electron_chargedHadIso;   //!
   TBranch        *b_electron_neutralHadIso;   //!
   TBranch        *b_electron_photonIso;   //!
   TBranch        *b_electron_puIso;   //!
   TBranch        *b_electron_r03_sumChargedHadronPt;   //!
   TBranch        *b_electron_r03_sumChargedParticlePt;   //!
   TBranch        *b_electron_r03_sumNeutralHadronEt;   //!
   TBranch        *b_electron_r03_sumPhotonEt;   //!
   TBranch        *b_electron_r03_sumNeutralHadronEtHighThreshold;   //!
   TBranch        *b_electron_r03_sumPhotonEtHighThreshold;   //!
   TBranch        *b_electron_r03_sumPUPt;   //!
   TBranch        *b_electron_nhits;   //!
   TBranch        *b_electron_npixelhits;   //!
   TBranch        *b_electron_nmissinghits;   //!
   TBranch        *b_electron_nmissinginnerhits;   //!
   TBranch        *b_electron_npixellayers;   //!
   TBranch        *b_electron_nstriplayers;   //!
   TBranch        *b_electron_dxy;   //!
   TBranch        *b_electron_dxyerr;   //!
   TBranch        *b_electron_dz;   //!
   TBranch        *b_electron_dzerr;   //!
   TBranch        *b_electron_convdist;   //!
   TBranch        *b_electron_gapinfo;   //!
   TBranch        *b_electron_chargeinfo;   //!
   TBranch        *b_electron_fbrems;   //!
   TBranch        *b_electron_numbrems;   //!
   TBranch        *b_electron_charge;   //!
   TBranch        *b_electron_superclusterindex;   //!
   TBranch        *b_electron_info;   //!
   TBranch        *b_electron_mva_id_nontrigPhys14;   //!
   TBranch        *b_electron_pass_conversion;   //!
   TBranch        *b_tau_count;   //!
   TBranch        *b_tau_e;   //!
   TBranch        *b_tau_px;   //!
   TBranch        *b_tau_py;   //!
   TBranch        *b_tau_pz;   //!
   TBranch        *b_tau_mass;   //!
   TBranch        *b_tau_eta;   //!
   TBranch        *b_tau_phi;   //!
   TBranch        *b_tau_pt;   //!
   TBranch        *b_tau_vertexx;   //!
   TBranch        *b_tau_vertexy;   //!
   TBranch        *b_tau_vertexz;   //!
   TBranch        *b_tau_dxy;   //!
   TBranch        *b_tau_dz;   //!
   TBranch        *b_tau_ip3d;   //!
   TBranch        *b_tau_ip3dSig;   //!
   TBranch        *b_tau_charge;   //!
   TBranch        *b_tau_genjet_px;   //!
   TBranch        *b_tau_genjet_py;   //!
   TBranch        *b_tau_genjet_pz;   //!
   TBranch        *b_tau_genjet_e;   //!
   TBranch        *b_tau_decayModeFinding;   //!
   TBranch        *b_tau_decayModeFindingNewDMs;   //!
   TBranch        *b_tau_byCombinedIsolationDeltaBetaCorrRaw3Hits;   //!
   TBranch        *b_tau_byLooseCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tau_byMediumCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tau_byTightCombinedIsolationDeltaBetaCorr3Hits;   //!
   TBranch        *b_tau_chargedIsoPtSum;   //!
   TBranch        *b_tau_neutralIsoPtSum;   //!
   TBranch        *b_tau_puCorrPtSum;   //!
   TBranch        *b_tau_againstMuonLoose3;   //!
   TBranch        *b_tau_againstMuonTight3;   //!
   TBranch        *b_tau_againstElectronVLooseMVA5;   //!
   TBranch        *b_tau_againstElectronVTightMVA5;   //!
   TBranch        *b_tau_againstElectronLooseMVA5;   //!
   TBranch        *b_tau_againstElectronMediumMVA5;   //!
   TBranch        *b_tau_againstElectronTightMVA5;   //!
   TBranch        *b_tau_ntracks_pt05;   //!
   TBranch        *b_tau_ntracks_pt08;   //!
   TBranch        *b_tau_ntracks_pt1;   //!
   TBranch        *b_tau_L1trigger_match;   //!
   TBranch        *b_tau_signalChargedHadrCands_size;   //!
   TBranch        *b_tau_signalNeutralHadrCands_size;   //!
   TBranch        *b_tau_signalGammaCands_size;   //!
   TBranch        *b_tau_isolationChargedHadrCands_size;   //!
   TBranch        *b_tau_isolationNeutralHadrCands_size;   //!
   TBranch        *b_tau_isolationGammaCands_size;   //!
   TBranch        *b_tau_genDecayMode_name;   //!
   TBranch        *b_tau_genDecayMode;   //!
   TBranch        *b_tau_decayMode_name;   //!
   TBranch        *b_tau_decayMode;   //!
   TBranch        *b_pfmet_ex;   //!
   TBranch        *b_pfmet_ey;   //!
   TBranch        *b_pfmet_ez;   //!
   TBranch        *b_pfmet_pt;   //!
   TBranch        *b_pfmet_phi;   //!
   TBranch        *b_pfmet_sigxx;   //!
   TBranch        *b_pfmet_sigxy;   //!
   TBranch        *b_pfmet_sigyx;   //!
   TBranch        *b_pfmet_sigyy;   //!
   TBranch        *b_genmet_ex;   //!
   TBranch        *b_genmet_ey;   //!
   TBranch        *b_mvamet_count;   //!
   TBranch        *b_mvamet_ex;   //!
   TBranch        *b_mvamet_ey;   //!
   TBranch        *b_mvamet_sigxx;   //!
   TBranch        *b_mvamet_sigxy;   //!
   TBranch        *b_mvamet_sigyx;   //!
   TBranch        *b_mvamet_sigyy;   //!
   TBranch        *b_mvamet_channel;   //!
   TBranch        *b_genweight;   //!
   TBranch        *b_genid1;   //!
   TBranch        *b_genx1;   //!
   TBranch        *b_genid2;   //!
   TBranch        *b_genx2;   //!
   TBranch        *b_genScale;   //!
   TBranch        *b_numpileupinteractionsminus;   //!
   TBranch        *b_numpileupinteractions;   //!
   TBranch        *b_numpileupinteractionsplus;   //!
   TBranch        *b_numtruepileupinteractions;   //!
   TBranch        *b_gentau_count;   //!
   TBranch        *b_gentau_e;   //!
   TBranch        *b_gentau_px;   //!
   TBranch        *b_gentau_py;   //!
   TBranch        *b_gentau_pz;   //!
   TBranch        *b_gentau_visible_e;   //!
   TBranch        *b_gentau_visible_px;   //!
   TBranch        *b_gentau_visible_py;   //!
   TBranch        *b_gentau_visible_pz;   //!
   TBranch        *b_gentau_visible_pt;   //!
   TBranch        *b_gentau_visible_eta;   //!
   TBranch        *b_gentau_visible_phi;   //!
   TBranch        *b_gentau_visible_mass;   //!
   TBranch        *b_gentau_decayMode;   //!
   TBranch        *b_gentau_decayMode_name;   //!
   TBranch        *b_gentau_mother;   //!
   TBranch        *b_genparticles_count;   //!
   TBranch        *b_genparticles_e;   //!
   TBranch        *b_genparticles_px;   //!
   TBranch        *b_genparticles_py;   //!
   TBranch        *b_genparticles_pz;   //!
   TBranch        *b_genparticles_vx;   //!
   TBranch        *b_genparticles_vy;   //!
   TBranch        *b_genparticles_vz;   //!
   TBranch        *b_genparticles_pdgid;   //!
   TBranch        *b_genparticles_status;   //!
   TBranch        *b_genparticles_info;   //!
   TBranch        *b_genparticles_mother;   //!
   TBranch        *b_trigobject_count;   //!
   TBranch        *b_trigobject_px;   //!
   TBranch        *b_trigobject_py;   //!
   TBranch        *b_trigobject_pz;   //!
   TBranch        *b_trigobject_pt;   //!
   TBranch        *b_trigobject_eta;   //!
   TBranch        *b_trigobject_phi;   //!
   TBranch        *b_trigobject_filters;   //!
   TBranch        *b_trigobject_isMuon;   //!
   TBranch        *b_trigobject_isElectron;   //!
   TBranch        *b_trigobject_isTau;   //!
   TBranch        *b_trigobject_isJet;   //!
   TBranch        *b_trigobject_isMET;   //!
   TBranch        *b_run_hltnames;   //!
   TBranch        *b_run_hltfilters;   //!
   TBranch        *b_run_hltmufilters;   //!
   TBranch        *b_run_hltelectronfilters;   //!
   TBranch        *b_run_hlttaufilters;   //!
   TBranch        *b_run_hltphotonfilters;   //!
   TBranch        *b_run_hltjetfilters;   //!
   TBranch        *b_run_floattaudiscriminators;   //!
   TBranch        *b_run_binarytaudiscriminators;   //!
   TBranch        *b_run_btagdiscriminators;   //!
   TBranch        *b_hltriggerresults_;   //!
   TBranch        *b_hltriggerresults_first;   //!
   TBranch        *b_hltriggerresults_second;   //!
   TBranch        *b_hltriggerprescales_;   //!
   TBranch        *b_hltriggerprescales_first;   //!
   TBranch        *b_hltriggerprescales_second;   //!
   TBranch        *b_hltriggerresultsV;   //!

   AC1B(TTree *tree=0);
   virtual ~AC1B();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t GetEntries();
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef AC1B_cxx
AC1B::AC1B(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/nfs/dust/cms/user/rasp/ntuples/PHYS14/VBF_HToTauTau_M-125_13TeV-powheg-pythia6/VBF_HToTauTau_M-125_13TeV-powheg-pythia6_0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/nfs/dust/cms/user/rasp/ntuples/PHYS14/VBF_HToTauTau_M-125_13TeV-powheg-pythia6/VBF_HToTauTau_M-125_13TeV-powheg-pythia6_0.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/nfs/dust/cms/user/rasp/ntuples/PHYS14/VBF_HToTauTau_M-125_13TeV-powheg-pythia6/VBF_HToTauTau_M-125_13TeV-powheg-pythia6_0.root:/makeroottree");
      dir->GetObject("AC1B",tree);

   }
   Init(tree);
}

AC1B::~AC1B()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t AC1B::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t AC1B::GetEntries()
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntries();
}
Long64_t AC1B::LoadTree(Long64_t entry)
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

void AC1B::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   run_hltnames = 0;
   run_hltfilters = 0;
   run_hltmufilters = 0;
   run_hltelectronfilters = 0;
   run_hlttaufilters = 0;
   run_hltphotonfilters = 0;
   run_hltjetfilters = 0;
   run_floattaudiscriminators = 0;
   run_binarytaudiscriminators = 0;
   run_btagdiscriminators = 0;
   hltriggerresultsV = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("errors", &errors, &b_errors);
   fChain->SetBranchAddress("event_nr", &event_nr, &b_event_nr);
   fChain->SetBranchAddress("event_run", &event_run, &b_event_run);
   fChain->SetBranchAddress("event_timeunix", &event_timeunix, &b_event_timeunix);
   fChain->SetBranchAddress("event_timemicrosec", &event_timemicrosec, &b_event_timemicrosec);
   fChain->SetBranchAddress("event_luminosityblock", &event_luminosityblock, &b_event_luminosityblock);
   fChain->SetBranchAddress("trigger_level1bits", trigger_level1bits, &b_trigger_level1bits);
   fChain->SetBranchAddress("trigger_level1", trigger_level1, &b_trigger_level1);
   fChain->SetBranchAddress("trigger_HLT", trigger_HLT, &b_trigger_HLT);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("primvertex_count", &primvertex_count, &b_primvertex_count);
   fChain->SetBranchAddress("primvertex_x", &primvertex_x, &b_primvertex_x);
   fChain->SetBranchAddress("primvertex_y", &primvertex_y, &b_primvertex_y);
   fChain->SetBranchAddress("primvertex_z", &primvertex_z, &b_primvertex_z);
   fChain->SetBranchAddress("primvertex_chi2", &primvertex_chi2, &b_primvertex_chi2);
   fChain->SetBranchAddress("primvertex_ndof", &primvertex_ndof, &b_primvertex_ndof);
   fChain->SetBranchAddress("primvertex_ptq", &primvertex_ptq, &b_primvertex_pdf);
   fChain->SetBranchAddress("primvertex_ntracks", &primvertex_ntracks, &b_primvertex_ntracks);
   fChain->SetBranchAddress("primvertex_cov", primvertex_cov, &b_primvertex_cov);
   fChain->SetBranchAddress("muon_count", &muon_count, &b_muon_count);
   fChain->SetBranchAddress("muon_px", muon_px, &b_muon_px);
   fChain->SetBranchAddress("muon_py", muon_py, &b_muon_py);
   fChain->SetBranchAddress("muon_pz", muon_pz, &b_muon_pz);
   fChain->SetBranchAddress("muon_pt", muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_eta", muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_phi", muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_pterror", muon_pterror, &b_muon_pterror);
   fChain->SetBranchAddress("muon_chi2", muon_chi2, &b_muon_chi2);
   fChain->SetBranchAddress("muon_normChi2", muon_normChi2, &b_muon_normChi2);
   fChain->SetBranchAddress("muon_ndof", muon_ndof, &b_muon_ndof);
   fChain->SetBranchAddress("muon_charge", muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_miniISO", muon_miniISO, &b_muon_miniISO);
   fChain->SetBranchAddress("muon_combQ_chi2LocalPosition", muon_combQ_chi2LocalPosition, &b_muon_combQ_chi2LocalPosition);
   fChain->SetBranchAddress("muon_combQ_trkKink", muon_combQ_trkKink, &b_muon_combQ_trkKink);
   fChain->SetBranchAddress("muon_validFraction", muon_validFraction, &b_muon_validFraction);
   fChain->SetBranchAddress("muon_segmentComp", muon_segmentComp, &b_muon_segmentComp);
   fChain->SetBranchAddress("muon_nMuonStations", muon_nMuonStations, &b_muon_nMuonStations);
   fChain->SetBranchAddress("muon_nMuonHits", muon_nMuonHits, &b_muon_nMuonHits);
   fChain->SetBranchAddress("muon_nPixelHits", muon_nPixelHits, &b_muon_nPixelHits);
   fChain->SetBranchAddress("muon_nTrackerHits", muon_nTrackerHits, &b_muon_nTrackerHits);
   fChain->SetBranchAddress("muon_dxy", muon_dxy, &b_muon_dxy);
   fChain->SetBranchAddress("muon_dxyerr", muon_dxyerr, &b_muon_dxyerr);
   fChain->SetBranchAddress("muon_dz", muon_dz, &b_muon_dz);
   fChain->SetBranchAddress("muon_dzerr", muon_dzerr, &b_muon_dzerr);
   fChain->SetBranchAddress("muon_chargedHadIso", muon_chargedHadIso, &b_muon_chargedHadIso);
   fChain->SetBranchAddress("muon_neutralHadIso", muon_neutralHadIso, &b_muon_neutralHadIso);
   fChain->SetBranchAddress("muon_photonIso", muon_photonIso, &b_muon_photonIso);
   fChain->SetBranchAddress("muon_puIso", muon_puIso, &b_muon_puIso);
   fChain->SetBranchAddress("muon_r03_sumChargedHadronPt", muon_r03_sumChargedHadronPt, &b_muon_r03_sumChargedHadronPt);
   fChain->SetBranchAddress("muon_r03_sumChargedParticlePt", muon_r03_sumChargedParticlePt, &b_muon_r03_sumChargedParticlePt);
   fChain->SetBranchAddress("muon_r03_sumNeutralHadronEt", muon_r03_sumNeutralHadronEt, &b_muon_r03_sumNeutralHadronEt);
   fChain->SetBranchAddress("muon_r03_sumPhotonEt", muon_r03_sumPhotonEt, &b_muon_r03_sumPhotonEt);
   fChain->SetBranchAddress("muon_r03_sumNeutralHadronEtHighThreshold", muon_r03_sumNeutralHadronEtHighThreshold, &b_muon_r03_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("muon_r03_sumPhotonEtHighThreshold", muon_r03_sumPhotonEtHighThreshold, &b_muon_r03_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("muon_r03_sumPUPt", muon_r03_sumPUPt, &b_muon_r03_sumPUPt);
   fChain->SetBranchAddress("muon_r04_sumChargedHadronPt", muon_r04_sumChargedHadronPt, &b_muon_r04_sumChargedHadronPt);
   fChain->SetBranchAddress("muon_r04_sumChargedParticlePt", muon_r04_sumChargedParticlePt, &b_muon_r04_sumChargedParticlePt);
   fChain->SetBranchAddress("muon_r04_sumNeutralHadronEt", muon_r04_sumNeutralHadronEt, &b_muon_r04_sumNeutralHadronEt);
   fChain->SetBranchAddress("muon_r04_sumPhotonEt", muon_r04_sumPhotonEt, &b_muon_r04_sumPhotonEt);
   fChain->SetBranchAddress("muon_r04_sumNeutralHadronEtHighThreshold", muon_r04_sumNeutralHadronEtHighThreshold, &b_muon_r04_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("muon_r04_sumPhotonEtHighThreshold", muon_r04_sumPhotonEtHighThreshold, &b_muon_r04_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("muon_r04_sumPUPt", muon_r04_sumPUPt, &b_muon_r04_sumPUPt);
   fChain->SetBranchAddress("muon_isPF", muon_isPF, &b_muon_isPF);
   fChain->SetBranchAddress("muon_isGlobal", muon_isGlobal, &b_muon_isGlobal);
   fChain->SetBranchAddress("muon_isTracker", muon_isTracker, &b_muon_isTracker);
   fChain->SetBranchAddress("muon_isTight", muon_isTight, &b_muon_isTight);
   fChain->SetBranchAddress("muon_isLoose", muon_isLoose, &b_muon_isLoose);
   fChain->SetBranchAddress("muon_isMedium", muon_isMedium, &b_muon_isMedium);
   fChain->SetBranchAddress("pfjet_count", &pfjet_count, &b_pfjet_count);
   fChain->SetBranchAddress("pfjet_e", pfjet_e, &b_pfjet_e);
   fChain->SetBranchAddress("pfjet_px", pfjet_px, &b_pfjet_px);
   fChain->SetBranchAddress("pfjet_py", pfjet_py, &b_pfjet_py);
   fChain->SetBranchAddress("pfjet_pz", pfjet_pz, &b_pfjet_pz);
   fChain->SetBranchAddress("pfjet_pt", pfjet_pt, &b_pfjet_pt);
   fChain->SetBranchAddress("pfjet_eta", pfjet_eta, &b_pfjet_eta);
   fChain->SetBranchAddress("pfjet_phi", pfjet_phi, &b_pfjet_phi);
   fChain->SetBranchAddress("pfjet_neutralhadronicenergy", pfjet_neutralhadronicenergy, &b_pfjet_neutralhadronicenergy);
   fChain->SetBranchAddress("pfjet_chargedhadronicenergy", pfjet_chargedhadronicenergy, &b_pfjet_chargedhadronicenergy);
   fChain->SetBranchAddress("pfjet_neutralemenergy", pfjet_neutralemenergy, &b_pfjet_neutralemenergy);
   fChain->SetBranchAddress("pfjet_chargedemenergy", pfjet_chargedemenergy, &b_pfjet_chargedemenergy);
   fChain->SetBranchAddress("pfjet_chargedmulti", pfjet_chargedmulti, &b_pfjet_chargedmulti);
   fChain->SetBranchAddress("pfjet_neutralmulti", pfjet_neutralmulti, &b_pfjet_neutralmulti);
   fChain->SetBranchAddress("pfjet_chargedhadronmulti", pfjet_chargedhadronmulti, &b_pfjet_chargedhadronmulti);
   fChain->SetBranchAddress("pfjet_energycorr", pfjet_energycorr, &b_pfjet_energycorr);
   fChain->SetBranchAddress("pfjet_energycorr_l1fastjet", pfjet_energycorr_l1fastjet, &b_pfjet_energycorr_l1fastjet);
   fChain->SetBranchAddress("pfjet_energycorr_l2relative", pfjet_energycorr_l2relative, &b_pfjet_energycorr_l2relative);
   fChain->SetBranchAddress("pfjet_energycorr_l3absolute", pfjet_energycorr_l3absolute, &b_pfjet_energycorr_l3absolute);
   fChain->SetBranchAddress("pfjet_pu_jet_full_mva", pfjet_pu_jet_full_mva, &b_pfjet_pu_jet_full_mva);
   fChain->SetBranchAddress("pfjet_flavour", pfjet_flavour, &b_pfjet_flavour);
   fChain->SetBranchAddress("pfjet_btag", pfjet_btag, &b_pfjet_btag);
   fChain->SetBranchAddress("electron_count", &electron_count, &b_electron_count);
   fChain->SetBranchAddress("electron_px", electron_px, &b_electron_px);
   fChain->SetBranchAddress("electron_py", electron_py, &b_electron_py);
   fChain->SetBranchAddress("electron_pz", electron_pz, &b_electron_pz);
   fChain->SetBranchAddress("electron_pt", electron_pt, &b_electron_pt);
   fChain->SetBranchAddress("electron_eta", electron_eta, &b_electron_eta);
   fChain->SetBranchAddress("electron_phi", electron_phi, &b_electron_phi);
   fChain->SetBranchAddress("electron_trackchi2", electron_trackchi2, &b_electron_trackchi2);
   fChain->SetBranchAddress("electron_trackndof", electron_trackndof, &b_electron_trackndof);
   fChain->SetBranchAddress("electron_outerx", electron_outerx, &b_electron_outerx);
   fChain->SetBranchAddress("electron_outery", electron_outery, &b_electron_outery);
   fChain->SetBranchAddress("electron_outerz", electron_outerz, &b_electron_outerz);
   fChain->SetBranchAddress("electron_closestpointx", electron_closestpointx, &b_electron_closestpointx);
   fChain->SetBranchAddress("electron_closestpointy", electron_closestpointy, &b_electron_closestpointy);
   fChain->SetBranchAddress("electron_closestpointz", electron_closestpointz, &b_electron_closestpointz);
   fChain->SetBranchAddress("electron_esuperclusterovertrack", electron_esuperclusterovertrack, &b_electron_esuperclusterovertrack);
   fChain->SetBranchAddress("electron_eseedclusterovertrack", electron_eseedclusterovertrack, &b_electron_eseedclusterovertrack);
   fChain->SetBranchAddress("electron_deltaetasuperclustertrack", electron_deltaetasuperclustertrack, &b_electron_deltaetasuperclustertrack);
   fChain->SetBranchAddress("electron_deltaphisuperclustertrack", electron_deltaphisuperclustertrack, &b_electron_deltaphisuperclustertrack);
   fChain->SetBranchAddress("electron_e1x5", electron_e1x5, &b_electron_e1x5);
   fChain->SetBranchAddress("electron_e2x5", electron_e2x5, &b_electron_e2x5);
   fChain->SetBranchAddress("electron_e5x5", electron_e5x5, &b_electron_e5x5);
   fChain->SetBranchAddress("electron_sigmaetaeta", electron_sigmaetaeta, &b_electron_sigmaetaeta);
   fChain->SetBranchAddress("electron_sigmaietaieta", electron_sigmaietaieta, &b_electron_sigmaietaieta);
   fChain->SetBranchAddress("electron_ehcaloverecal", electron_ehcaloverecal, &b_electron_ehcaloverecal);
   fChain->SetBranchAddress("electron_ehcaloverecaldepth1", electron_ehcaloverecaldepth1, &b_electron_ehcaloverecaldepth1);
   fChain->SetBranchAddress("electron_ehcaloverecaldepth2", electron_ehcaloverecaldepth2, &b_electron_ehcaloverecaldepth2);
   fChain->SetBranchAddress("electron_full5x5_sigmaietaieta", electron_full5x5_sigmaietaieta, &b_electron_full5x5_sigmaietaieta);
   fChain->SetBranchAddress("electron_ooemoop", electron_ooemoop, &b_electron_ooemoop);
   fChain->SetBranchAddress("electron_miniISO", electron_miniISO, &b_electron_miniISO);
   fChain->SetBranchAddress("electron_superclusterEta", electron_superclusterEta, &b_electron_superclusterEta);
   fChain->SetBranchAddress("electron_superclusterPhi", electron_superclusterPhi, &b_electron_superclusterPhi);
   fChain->SetBranchAddress("electron_superclusterX", electron_superclusterX, &b_electron_superclusterX);
   fChain->SetBranchAddress("electron_superclusterY", electron_superclusterY, &b_electron_superclusterY);
   fChain->SetBranchAddress("electron_superclusterZ", electron_superclusterZ, &b_electron_superclusterZ);
   fChain->SetBranchAddress("electron_chargedHadIso", electron_chargedHadIso, &b_electron_chargedHadIso);
   fChain->SetBranchAddress("electron_neutralHadIso", electron_neutralHadIso, &b_electron_neutralHadIso);
   fChain->SetBranchAddress("electron_photonIso", electron_photonIso, &b_electron_photonIso);
   fChain->SetBranchAddress("electron_puIso", electron_puIso, &b_electron_puIso);
   fChain->SetBranchAddress("electron_r03_sumChargedHadronPt", electron_r03_sumChargedHadronPt, &b_electron_r03_sumChargedHadronPt);
   fChain->SetBranchAddress("electron_r03_sumChargedParticlePt", electron_r03_sumChargedParticlePt, &b_electron_r03_sumChargedParticlePt);
   fChain->SetBranchAddress("electron_r03_sumNeutralHadronEt", electron_r03_sumNeutralHadronEt, &b_electron_r03_sumNeutralHadronEt);
   fChain->SetBranchAddress("electron_r03_sumPhotonEt", electron_r03_sumPhotonEt, &b_electron_r03_sumPhotonEt);
   fChain->SetBranchAddress("electron_r03_sumNeutralHadronEtHighThreshold", electron_r03_sumNeutralHadronEtHighThreshold, &b_electron_r03_sumNeutralHadronEtHighThreshold);
   fChain->SetBranchAddress("electron_r03_sumPhotonEtHighThreshold", electron_r03_sumPhotonEtHighThreshold, &b_electron_r03_sumPhotonEtHighThreshold);
   fChain->SetBranchAddress("electron_r03_sumPUPt", electron_r03_sumPUPt, &b_electron_r03_sumPUPt);
   fChain->SetBranchAddress("electron_nhits", electron_nhits, &b_electron_nhits);
   fChain->SetBranchAddress("electron_npixelhits", electron_npixelhits, &b_electron_npixelhits);
   fChain->SetBranchAddress("electron_nmissinghits", electron_nmissinghits, &b_electron_nmissinghits);
   fChain->SetBranchAddress("electron_nmissinginnerhits", electron_nmissinginnerhits, &b_electron_nmissinginnerhits);
   fChain->SetBranchAddress("electron_npixellayers", electron_npixellayers, &b_electron_npixellayers);
   fChain->SetBranchAddress("electron_nstriplayers", electron_nstriplayers, &b_electron_nstriplayers);
   fChain->SetBranchAddress("electron_dxy", electron_dxy, &b_electron_dxy);
   fChain->SetBranchAddress("electron_dxyerr", electron_dxyerr, &b_electron_dxyerr);
   fChain->SetBranchAddress("electron_dz", electron_dz, &b_electron_dz);
   fChain->SetBranchAddress("electron_dzerr", electron_dzerr, &b_electron_dzerr);
   fChain->SetBranchAddress("electron_convdist", electron_convdist, &b_electron_convdist);
   fChain->SetBranchAddress("electron_gapinfo", electron_gapinfo, &b_electron_gapinfo);
   fChain->SetBranchAddress("electron_chargeinfo", electron_chargeinfo, &b_electron_chargeinfo);
   fChain->SetBranchAddress("electron_fbrems", electron_fbrems, &b_electron_fbrems);
   fChain->SetBranchAddress("electron_numbrems", electron_numbrems, &b_electron_numbrems);
   fChain->SetBranchAddress("electron_charge", electron_charge, &b_electron_charge);
   fChain->SetBranchAddress("electron_superclusterindex", electron_superclusterindex, &b_electron_superclusterindex);
   fChain->SetBranchAddress("electron_info", electron_info, &b_electron_info);
   fChain->SetBranchAddress("electron_mva_id_nontrigPhys14", electron_mva_id_nontrigPhys14, &b_electron_mva_id_nontrigPhys14);
   fChain->SetBranchAddress("electron_pass_conversion", electron_pass_conversion, &b_electron_pass_conversion);
   fChain->SetBranchAddress("tau_count", &tau_count, &b_tau_count);
   fChain->SetBranchAddress("tau_e", tau_e, &b_tau_e);
   fChain->SetBranchAddress("tau_px", tau_px, &b_tau_px);
   fChain->SetBranchAddress("tau_py", tau_py, &b_tau_py);
   fChain->SetBranchAddress("tau_pz", tau_pz, &b_tau_pz);
   fChain->SetBranchAddress("tau_mass", tau_mass, &b_tau_mass);
   fChain->SetBranchAddress("tau_eta", tau_eta, &b_tau_eta);
   fChain->SetBranchAddress("tau_phi", tau_phi, &b_tau_phi);
   fChain->SetBranchAddress("tau_pt", tau_pt, &b_tau_pt);
   fChain->SetBranchAddress("tau_vertexx", tau_vertexx, &b_tau_vertexx);
   fChain->SetBranchAddress("tau_vertexy", tau_vertexy, &b_tau_vertexy);
   fChain->SetBranchAddress("tau_vertexz", tau_vertexz, &b_tau_vertexz);
   fChain->SetBranchAddress("tau_dxy", tau_dxy, &b_tau_dxy);
   fChain->SetBranchAddress("tau_dz", tau_dz, &b_tau_dz);
   fChain->SetBranchAddress("tau_ip3d", tau_ip3d, &b_tau_ip3d);
   fChain->SetBranchAddress("tau_ip3dSig", tau_ip3dSig, &b_tau_ip3dSig);
   fChain->SetBranchAddress("tau_charge", tau_charge, &b_tau_charge);
   fChain->SetBranchAddress("tau_genjet_px", tau_genjet_px, &b_tau_genjet_px);
   fChain->SetBranchAddress("tau_genjet_py", tau_genjet_py, &b_tau_genjet_py);
   fChain->SetBranchAddress("tau_genjet_pz", tau_genjet_pz, &b_tau_genjet_pz);
   fChain->SetBranchAddress("tau_genjet_e", tau_genjet_e, &b_tau_genjet_e);
   fChain->SetBranchAddress("tau_decayModeFinding", tau_decayModeFinding, &b_tau_decayModeFinding);
   fChain->SetBranchAddress("tau_decayModeFindingNewDMs", tau_decayModeFindingNewDMs, &b_tau_decayModeFindingNewDMs);
   fChain->SetBranchAddress("tau_byCombinedIsolationDeltaBetaCorrRaw3Hits", tau_byCombinedIsolationDeltaBetaCorrRaw3Hits, &b_tau_byCombinedIsolationDeltaBetaCorrRaw3Hits);
   fChain->SetBranchAddress("tau_byLooseCombinedIsolationDeltaBetaCorr3Hits", tau_byLooseCombinedIsolationDeltaBetaCorr3Hits, &b_tau_byLooseCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("tau_byMediumCombinedIsolationDeltaBetaCorr3Hits", tau_byMediumCombinedIsolationDeltaBetaCorr3Hits, &b_tau_byMediumCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("tau_byTightCombinedIsolationDeltaBetaCorr3Hits", tau_byTightCombinedIsolationDeltaBetaCorr3Hits, &b_tau_byTightCombinedIsolationDeltaBetaCorr3Hits);
   fChain->SetBranchAddress("tau_chargedIsoPtSum", tau_chargedIsoPtSum, &b_tau_chargedIsoPtSum);
   fChain->SetBranchAddress("tau_neutralIsoPtSum", tau_neutralIsoPtSum, &b_tau_neutralIsoPtSum);
   fChain->SetBranchAddress("tau_puCorrPtSum", tau_puCorrPtSum, &b_tau_puCorrPtSum);
   fChain->SetBranchAddress("tau_againstMuonLoose3", tau_againstMuonLoose3, &b_tau_againstMuonLoose3);
   fChain->SetBranchAddress("tau_againstMuonTight3", tau_againstMuonTight3, &b_tau_againstMuonTight3);
   fChain->SetBranchAddress("tau_againstElectronVLooseMVA5", tau_againstElectronVLooseMVA5, &b_tau_againstElectronVLooseMVA5);
   fChain->SetBranchAddress("tau_againstElectronVTightMVA5", tau_againstElectronVTightMVA5, &b_tau_againstElectronVTightMVA5);
   fChain->SetBranchAddress("tau_againstElectronLooseMVA5", tau_againstElectronLooseMVA5, &b_tau_againstElectronLooseMVA5);
   fChain->SetBranchAddress("tau_againstElectronMediumMVA5", tau_againstElectronMediumMVA5, &b_tau_againstElectronMediumMVA5);
   fChain->SetBranchAddress("tau_againstElectronTightMVA5", tau_againstElectronTightMVA5, &b_tau_againstElectronTightMVA5);
   fChain->SetBranchAddress("tau_ntracks_pt05", tau_ntracks_pt05, &b_tau_ntracks_pt05);
   fChain->SetBranchAddress("tau_ntracks_pt08", tau_ntracks_pt08, &b_tau_ntracks_pt08);
   fChain->SetBranchAddress("tau_ntracks_pt1", tau_ntracks_pt1, &b_tau_ntracks_pt1);
   fChain->SetBranchAddress("tau_L1trigger_match", tau_L1trigger_match, &b_tau_L1trigger_match);
   fChain->SetBranchAddress("tau_signalChargedHadrCands_size", tau_signalChargedHadrCands_size, &b_tau_signalChargedHadrCands_size);
   fChain->SetBranchAddress("tau_signalNeutralHadrCands_size", tau_signalNeutralHadrCands_size, &b_tau_signalNeutralHadrCands_size);
   fChain->SetBranchAddress("tau_signalGammaCands_size", tau_signalGammaCands_size, &b_tau_signalGammaCands_size);
   fChain->SetBranchAddress("tau_isolationChargedHadrCands_size", tau_isolationChargedHadrCands_size, &b_tau_isolationChargedHadrCands_size);
   fChain->SetBranchAddress("tau_isolationNeutralHadrCands_size", tau_isolationNeutralHadrCands_size, &b_tau_isolationNeutralHadrCands_size);
   fChain->SetBranchAddress("tau_isolationGammaCands_size", tau_isolationGammaCands_size, &b_tau_isolationGammaCands_size);
   fChain->SetBranchAddress("tau_genDecayMode_name", tau_genDecayMode_name, &b_tau_genDecayMode_name);
   fChain->SetBranchAddress("tau_genDecayMode", tau_genDecayMode, &b_tau_genDecayMode);
   fChain->SetBranchAddress("tau_decayMode_name", tau_decayMode_name, &b_tau_decayMode_name);
   fChain->SetBranchAddress("tau_decayMode", tau_decayMode, &b_tau_decayMode);
   fChain->SetBranchAddress("pfmet_ex", &pfmet_ex, &b_pfmet_ex);
   fChain->SetBranchAddress("pfmet_ey", &pfmet_ey, &b_pfmet_ey);
   fChain->SetBranchAddress("pfmet_ez", &pfmet_ez, &b_pfmet_ez);
   fChain->SetBranchAddress("pfmet_pt", &pfmet_pt, &b_pfmet_pt);
   fChain->SetBranchAddress("pfmet_phi", &pfmet_phi, &b_pfmet_phi);
   fChain->SetBranchAddress("pfmet_sigxx", &pfmet_sigxx, &b_pfmet_sigxx);
   fChain->SetBranchAddress("pfmet_sigxy", &pfmet_sigxy, &b_pfmet_sigxy);
   fChain->SetBranchAddress("pfmet_sigyx", &pfmet_sigyx, &b_pfmet_sigyx);
   fChain->SetBranchAddress("pfmet_sigyy", &pfmet_sigyy, &b_pfmet_sigyy);
   fChain->SetBranchAddress("genmet_ex", &genmet_ex, &b_genmet_ex);
   fChain->SetBranchAddress("genmet_ey", &genmet_ey, &b_genmet_ey);
   fChain->SetBranchAddress("mvamet_count", &mvamet_count, &b_mvamet_count);
   fChain->SetBranchAddress("mvamet_ex", mvamet_ex, &b_mvamet_ex);
   fChain->SetBranchAddress("mvamet_ey", mvamet_ey, &b_mvamet_ey);
   fChain->SetBranchAddress("mvamet_sigxx", mvamet_sigxx, &b_mvamet_sigxx);
   fChain->SetBranchAddress("mvamet_sigxy", mvamet_sigxy, &b_mvamet_sigxy);
   fChain->SetBranchAddress("mvamet_sigyx", mvamet_sigyx, &b_mvamet_sigyx);
   fChain->SetBranchAddress("mvamet_sigyy", mvamet_sigyy, &b_mvamet_sigyy);
   fChain->SetBranchAddress("mvamet_channel", mvamet_channel, &b_mvamet_channel);
   fChain->SetBranchAddress("genweight", &genweight, &b_genweight);
   fChain->SetBranchAddress("genid1", &genid1, &b_genid1);
   fChain->SetBranchAddress("genx1", &genx1, &b_genx1);
   fChain->SetBranchAddress("genid2", &genid2, &b_genid2);
   fChain->SetBranchAddress("genx2", &genx2, &b_genx2);
   fChain->SetBranchAddress("genScale", &genScale, &b_genScale);
   fChain->SetBranchAddress("numpileupinteractionsminus", &numpileupinteractionsminus, &b_numpileupinteractionsminus);
   fChain->SetBranchAddress("numpileupinteractions", &numpileupinteractions, &b_numpileupinteractions);
   fChain->SetBranchAddress("numpileupinteractionsplus", &numpileupinteractionsplus, &b_numpileupinteractionsplus);
   fChain->SetBranchAddress("numtruepileupinteractions", &numtruepileupinteractions, &b_numtruepileupinteractions);
   fChain->SetBranchAddress("gentau_count", &gentau_count, &b_gentau_count);
   fChain->SetBranchAddress("gentau_e", gentau_e, &b_gentau_e);
   fChain->SetBranchAddress("gentau_px", gentau_px, &b_gentau_px);
   fChain->SetBranchAddress("gentau_py", gentau_py, &b_gentau_py);
   fChain->SetBranchAddress("gentau_pz", gentau_pz, &b_gentau_pz);
   fChain->SetBranchAddress("gentau_visible_e", gentau_visible_e, &b_gentau_visible_e);
   fChain->SetBranchAddress("gentau_visible_px", gentau_visible_px, &b_gentau_visible_px);
   fChain->SetBranchAddress("gentau_visible_py", gentau_visible_py, &b_gentau_visible_py);
   fChain->SetBranchAddress("gentau_visible_pz", gentau_visible_pz, &b_gentau_visible_pz);
   fChain->SetBranchAddress("gentau_visible_pt", gentau_visible_pt, &b_gentau_visible_pt);
   fChain->SetBranchAddress("gentau_visible_eta", gentau_visible_eta, &b_gentau_visible_eta);
   fChain->SetBranchAddress("gentau_visible_phi", gentau_visible_phi, &b_gentau_visible_phi);
   fChain->SetBranchAddress("gentau_visible_mass", gentau_visible_mass, &b_gentau_visible_mass);
   fChain->SetBranchAddress("gentau_decayMode", gentau_decayMode, &b_gentau_decayMode);
   fChain->SetBranchAddress("gentau_decayMode_name", gentau_decayMode_name, &b_gentau_decayMode_name);
   fChain->SetBranchAddress("gentau_mother", gentau_mother, &b_gentau_mother);
   fChain->SetBranchAddress("genparticles_count", &genparticles_count, &b_genparticles_count);
   fChain->SetBranchAddress("genparticles_e", genparticles_e, &b_genparticles_e);
   fChain->SetBranchAddress("genparticles_px", genparticles_px, &b_genparticles_px);
   fChain->SetBranchAddress("genparticles_py", genparticles_py, &b_genparticles_py);
   fChain->SetBranchAddress("genparticles_pz", genparticles_pz, &b_genparticles_pz);
   fChain->SetBranchAddress("genparticles_vx", genparticles_vx, &b_genparticles_vx);
   fChain->SetBranchAddress("genparticles_vy", genparticles_vy, &b_genparticles_vy);
   fChain->SetBranchAddress("genparticles_vz", genparticles_vz, &b_genparticles_vz);
   fChain->SetBranchAddress("genparticles_pdgid", genparticles_pdgid, &b_genparticles_pdgid);
   fChain->SetBranchAddress("genparticles_status", genparticles_status, &b_genparticles_status);
   fChain->SetBranchAddress("genparticles_info", genparticles_info, &b_genparticles_info);
   fChain->SetBranchAddress("genparticles_mother", genparticles_mother, &b_genparticles_mother);
   fChain->SetBranchAddress("trigobject_count", &trigobject_count, &b_trigobject_count);
   fChain->SetBranchAddress("trigobject_px", trigobject_px, &b_trigobject_px);
   fChain->SetBranchAddress("trigobject_py", trigobject_py, &b_trigobject_py);
   fChain->SetBranchAddress("trigobject_pz", trigobject_pz, &b_trigobject_pz);
   fChain->SetBranchAddress("trigobject_pt", trigobject_pt, &b_trigobject_pt);
   fChain->SetBranchAddress("trigobject_eta", trigobject_eta, &b_trigobject_eta);
   fChain->SetBranchAddress("trigobject_phi", trigobject_phi, &b_trigobject_phi);
   fChain->SetBranchAddress("trigobject_filters", trigobject_filters, &b_trigobject_filters);
   fChain->SetBranchAddress("trigobject_isMuon", trigobject_isMuon, &b_trigobject_isMuon);
   fChain->SetBranchAddress("trigobject_isElectron", trigobject_isElectron, &b_trigobject_isElectron);
   fChain->SetBranchAddress("trigobject_isTau", trigobject_isTau, &b_trigobject_isTau);
   fChain->SetBranchAddress("trigobject_isJet", trigobject_isJet, &b_trigobject_isJet);
   fChain->SetBranchAddress("trigobject_isMET", trigobject_isMET, &b_trigobject_isMET);
   fChain->SetBranchAddress("run_hltnames", &run_hltnames, &b_run_hltnames);
   fChain->SetBranchAddress("run_hltfilters", &run_hltfilters, &b_run_hltfilters);
   fChain->SetBranchAddress("run_hltmufilters", &run_hltmufilters, &b_run_hltmufilters);
   fChain->SetBranchAddress("run_hltelectronfilters", &run_hltelectronfilters, &b_run_hltelectronfilters);
   fChain->SetBranchAddress("run_hlttaufilters", &run_hlttaufilters, &b_run_hlttaufilters);
   fChain->SetBranchAddress("run_hltphotonfilters", &run_hltphotonfilters, &b_run_hltphotonfilters);
   fChain->SetBranchAddress("run_hltjetfilters", &run_hltjetfilters, &b_run_hltjetfilters);
   fChain->SetBranchAddress("run_floattaudiscriminators", &run_floattaudiscriminators, &b_run_floattaudiscriminators);
   fChain->SetBranchAddress("run_binarytaudiscriminators", &run_binarytaudiscriminators, &b_run_binarytaudiscriminators);
   fChain->SetBranchAddress("run_btagdiscriminators", &run_btagdiscriminators, &b_run_btagdiscriminators);
   fChain->SetBranchAddress("hltriggerresults", &hltriggerresults_, &b_hltriggerresults_);
   fChain->SetBranchAddress("hltriggerresults.first", hltriggerresults_first, &b_hltriggerresults_first);
   fChain->SetBranchAddress("hltriggerresults.second", hltriggerresults_second, &b_hltriggerresults_second);
   fChain->SetBranchAddress("hltriggerprescales", &hltriggerprescales_, &b_hltriggerprescales_);
   fChain->SetBranchAddress("hltriggerprescales.first", hltriggerprescales_first, &b_hltriggerprescales_first);
   fChain->SetBranchAddress("hltriggerprescales.second", hltriggerprescales_second, &b_hltriggerprescales_second);
   fChain->SetBranchAddress("hltriggerresultsV", &hltriggerresultsV, &b_hltriggerresultsV);
   Notify();
}

Bool_t AC1B::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void AC1B::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t AC1B::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef AC1B_cxx
