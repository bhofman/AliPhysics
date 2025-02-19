/*=================================================================================
 /-----------------------Dukhishyam Mallick-------------------------------------------------------/

 *** Configuration script for K*+-->K0Short-K0short analysis ***
 =======================================================================================*/
// A configuration script for RSN package needs to define the followings:
//
// (1) decay tree of each resonance to be studied, which is needed to select
//     true pairs and to assign the right mass to all candidate daughters
// (2) cuts at all levels: single daughters, tracks, events
// (3) output objects: histograms or trees

Bool_t SetCustomQualityCut(AliRsnCutTrackQuality * trkQualityCut, Int_t customQualityCutsID = 0, Int_t customFilterBit = 0);

#ifdef __CLING__
R__ADD_INCLUDE_PATH($ALICE_PHYSICS)
#include <PWGLF/RESONANCES/macros/mini/AddMonitorOutput.C>
#endif

/*
void AddMonitorOutput_PionPt(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *ppt=0)
{

    // PionPt
    AliRsnValueDaughter *axisPionPt = new AliRsnValueDaughter("pion_pt", AliRsnValueDaughter::kPt);
    axisPionPt->SetBins(0.,10.0,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionPt = new AliRsnListOutput("Pion_Pt", AliRsnListOutput::kHistoDefault);
    outMonitorPionPt->AddValue(axisPionPt);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionPt);
    if (ppt) ppt->AddOutput(outMonitorPionPt);

}

void AddMonitorOutput_PionEta(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *peta=0)
{

    // PionDCA
    AliRsnValueDaughter *axisPionEta = new AliRsnValueDaughter("pion_eta", AliRsnValueDaughter::kEta);
    axisPionEta->SetBins(-2.,2.,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionEta = new AliRsnListOutput("Pion_Eta", AliRsnListOutput::kHistoDefault);
    outMonitorPionEta->AddValue(axisPionEta);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionEta);
    if (peta) peta->AddOutput(outMonitorPionEta);

}

void AddMonitorOutput_PionDCAxy(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *pdcaxy=0)
{

    // PionDCA
    AliRsnValueDaughter *axisPionDCAxy = new AliRsnValueDaughter("pion_dcaxy", AliRsnValueDaughter::kDCAXY);
    axisPionDCAxy->SetBins(-0.5,0.5,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionDCAxy = new AliRsnListOutput("Pion_DCAxy", AliRsnListOutput::kHistoDefault);
    outMonitorPionDCAxy->AddValue(axisPionDCAxy);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionDCAxy);
    if (pdcaxy) pdcaxy->AddOutput(outMonitorPionDCAxy);

}

void AddMonitorOutput_PionDCAz(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *pdcaz=0)
{

    // PionDCA
    AliRsnValueDaughter *axisPionDCAz = new AliRsnValueDaughter("pion_dcaz", AliRsnValueDaughter::kDCAZ);
    axisPionDCAz->SetBins(-2.5,2.5,0.005);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionDCAz = new AliRsnListOutput("Pion_DCAz", AliRsnListOutput::kHistoDefault);
    outMonitorPionDCAz->AddValue(axisPionDCAz);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionDCAz);
    if (pdcaz) pdcaz->AddOutput(outMonitorPionDCAz);

}

void AddMonitorOutput_PionPIDCut(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *piPID=0)
{

    // Pion PID Cut
    AliRsnValueDaughter *axisPionPIDCut = new AliRsnValueDaughter("pionPID", AliRsnValueDaughter::kTPCnsigmaPi);
    axisPionPIDCut->SetBins(0.0,5,0.01);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionPIDCut = new AliRsnListOutput("Pion_PID_Cut", AliRsnListOutput::kHistoDefault);
    outMonitorPionPIDCut->AddValue(axisPionPIDCut);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionPIDCut);
    if (piPID) piPID->AddOutput(outMonitorPionPIDCut);

}

void AddMonitorOutput_PionNTPC(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *piNTPC=0)
{

    // Pion PID Cut
    AliRsnValueDaughter *axisPionNTPC = new AliRsnValueDaughter("pionNTPC", AliRsnValueDaughter::kNTPCclusters);
    axisPionNTPC->SetBins(0.0,200,1);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionNTPC = new AliRsnListOutput("Pion_NTPC", AliRsnListOutput::kHistoDefault);
    outMonitorPionNTPC->AddValue(axisPionNTPC);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionNTPC);
    if (piNTPC) pNTPC->AddOutput(outMonitorPionNTPC);

}

void AddMonitorOutput_PionTPCchi2(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *piTPCchi2=0)
{

    // Pion PID Cut
    AliRsnValueDaughter *axisPionTPCchi2 = new AliRsnValueDaughter("pionTPCchi2", AliRsnValueDaughter::kTPCchi2);
    axisPionTPCchi2->SetBins(0.0,6,.1);

    // output: 2D histogram
    AliRsnListOutput *outMonitorPionTPCchi2 = new AliRsnListOutput("Pion_TPCchi2", AliRsnListOutput::kHistoDefault);
    outMonitorPionTPCchi2->AddValue(axisPionTPCchi2);

    // add outputs to loop
    if (mon) mon->Add(outMonitorPionTPCchi2);
    if (piTPCchi2) pTPCchi2->AddOutput(outMonitorPionTPCchi2);

}
*/

void AddMonitorOutput_K0sP(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lp=0)
{


    AliRsnValueDaughter *axisK0sP = new AliRsnValueDaughter("k0s_momentum", AliRsnValueDaughter::kP);
    axisK0sP->SetBins(0.,20.,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorMom = new AliRsnListOutput("K0s_Momentum", AliRsnListOutput::kHistoDefault);
    outMonitorMom->AddValue(axisK0sP);

    // add outputs to loop
    if (mon) mon->Add(outMonitorMom);
    if (lp) lp->AddOutput(outMonitorMom);

}

void AddMonitorOutput_K0sPt(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lpt=0)
{

    // Pt
    AliRsnValueDaughter *axisK0sPt = new AliRsnValueDaughter("k0s_transversemomentum", AliRsnValueDaughter::kV0Pt);
    axisK0sPt->SetBins(0.,20.,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorTrMom = new AliRsnListOutput("K0s_TransverseMomentum", AliRsnListOutput::kHistoDefault);
    outMonitorTrMom->AddValue(axisK0sPt);

    // add outputs to loop
    if (mon) mon->Add(outMonitorTrMom);
    if (lpt) lpt->AddOutput(outMonitorTrMom);

}

void AddMonitorOutput_K0sNegDaughPt(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lnpt=0)
{

    // Pt
    AliRsnValueDaughter *axisK0sNegDaughPt = new AliRsnValueDaughter("k0s_negdaugh_transversemomentum", AliRsnValueDaughter::kV0NPt);
    axisK0sNegDaughPt->SetBins(0.,20.,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sNegDaughTrMom = new AliRsnListOutput("K0s_NegDaugh_TransverseMomentum", AliRsnListOutput::kHistoDefault);
    outMonitorK0sNegDaughTrMom->AddValue(axisK0sNegDaughPt);

    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sNegDaughTrMom);
    if (lnpt) lnpt->AddOutput(outMonitorK0sNegDaughTrMom);

}

void AddMonitorOutput_K0sPosDaughPt(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lppt=0)
{

    // Mass
    AliRsnValueDaughter *axisK0sPosDaughPt = new AliRsnValueDaughter("k0s_posdaugh_transversemomentum", AliRsnValueDaughter::kV0PPt);
    axisK0sPosDaughPt->SetBins(0.,20.,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sPosDaughTrMom = new AliRsnListOutput("K0s_PosDaugh_TransverseMomentum", AliRsnListOutput::kHistoDefault);
    outMonitorK0sPosDaughTrMom->AddValue(axisK0sPosDaughPt);

    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sPosDaughTrMom);
    if (lppt) lppt->AddOutput(outMonitorK0sPosDaughTrMom);

}


void AddMonitorOutput_K0sMass(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lm=0)
{

    // Mass
    AliRsnValueDaughter *axisMass = new AliRsnValueDaughter("k0s_mass", AliRsnValueDaughter::kV0Mass);
    axisMass->SetBins(0.4,0.6,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorM = new AliRsnListOutput("K0s_Mass", AliRsnListOutput::kHistoDefault);
    outMonitorM->AddValue(axisMass);

    // add outputs to loop
    if (mon) mon->Add(outMonitorM);
    if (lm) lm->AddOutput(outMonitorM);

}

void AddMonitorOutput_K0sDCA(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *ldca=0)
 {
 // K0s DCA
 AliRsnValueDaughter *axisK0sDCA = new AliRsnValueDaughter("k0s_dca", AliRsnValueDaughter::kV0DCA);
 axisK0sDCA->SetBins(0.0,0.4,0.001);
 // output: 2D histogram
 AliRsnListOutput *outMonitorK0sDCA = new AliRsnListOutput("K0s_DCA", AliRsnListOutput::kHistoDefault);
 outMonitorK0sDCA->AddValue(axisK0sDCA);
 // add outputs to loop
 if (mon) mon->Add(outMonitorK0sDCA);
 if (ldca) ldca->AddOutput(outMonitorK0sDCA);
 }  

void AddMonitorOutput_K0sRadius(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *ldca=0)
{
    // K0s Radius
    AliRsnValueDaughter *axisK0sRadius = new AliRsnValueDaughter("k0s_radius", AliRsnValueDaughter::kV0Radius);
    axisK0sRadius->SetBins(0.0,200,0.2);
    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sRadius = new AliRsnListOutput("K0s_Radius", AliRsnListOutput::kHistoDefault);
    outMonitorK0sRadius->AddValue(axisK0sRadius);
    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sRadius);
    if (ldca) ldca->AddOutput(outMonitorK0sRadius);
}

void AddMonitorOutput_K0sDaughterDCA(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *ldaugdca=0)
{

    // K0s Daughter DCA
    AliRsnValueDaughter *axisK0sDDCA = new AliRsnValueDaughter("k0s_daughterDCA", AliRsnValueDaughter::kDaughterDCA);
    axisK0sDDCA->SetBins(0.0,2,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sDDCA = new AliRsnListOutput("K0s_DaughterDCA", AliRsnListOutput::kHistoDefault);
    outMonitorK0sDDCA->AddValue(axisK0sDDCA);

    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sDDCA);
    if (ldaugdca) ldaugdca->AddOutput(outMonitorK0sDDCA);

}

void AddMonitorOutput_K0sCosPointAngle(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lcpa=0)
{

    // K0s Cosine of the Pointing Angle
    AliRsnValueDaughter *axisK0sCPA = new AliRsnValueDaughter("k0s_cospointang", AliRsnValueDaughter::kCosPointAng);
    axisK0sCPA->SetBins(0.95,1.,0.0001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sCPA = new AliRsnListOutput("K0s_CosineOfPointingAngle", AliRsnListOutput::kHistoDefault);
    outMonitorK0sCPA->AddValue(axisK0sCPA);

    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sCPA);
    if (lcpa) lcpa->AddOutput(outMonitorK0sCPA);

}

/*
void AddMonitorOutput_K0sPionPID(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lpiPID=0)
{


    AliRsnValueDaughter *axisK0sPionPID = new AliRsnValueDaughter("k0s_pionPID", AliRsnValueDaughter::kLambdaPionPIDCut);
    axisK0sPionPID->SetBins(0.0,5,0.01);

    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sPionPID = new AliRsnListOutput("K0s_PionPID", AliRsnListOutput::kHistoDefault);
    outMonitorK0sPionPID->AddValue(axisK0sPionPID);

    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sPionPID);
    if (lpiPID) lpiPID->AddOutput(outMonitorK0sPionPID);

}

void AddMonitorOutput_K0sAntiPionPID(TObjArray *mon=0,TString opt="",AliRsnLoopDaughter *lapiPID=0)
{


    AliRsnValueDaughter *axisK0sAntiPionPID = new AliRsnValueDaughter("k0s_antipionPID", AliRsnValueDaughter::kAntiLambdaAntiPionPIDCut);
    axisK0sAntiPionPID->SetBins(0.0,5,0.01);

    // output: 2D histogram
    AliRsnListOutput *outMonitorK0sAntiPionPID = new AliRsnListOutput("K0s_AntiPionPID", AliRsnListOutput::kHistoDefault);
    outMonitorK0sAntiPionPID->AddValue(axisK0sAntiPionPID);

    // add outputs to loop
    if (mon) mon->Add(outMonitorK0sAntiPionPID);
    if (lapiPID) lpiPID->AddOutput(outMonitorK0sAntiPionPID);

}
*/


void AddMonitorOutput_MinDCAToVertexXYPtDep(TObjArray *mon=0, TString opt="", AliRsnLoopDaughter *trackDCAXY=0)
{

    // DCAXY of Tracks
    AliRsnValueDaughter *axisDCATracks = new AliRsnValueDaughter("dcaXY_tracks", AliRsnValueDaughter::kV0DCAXY);
    axisDCATracks->SetBins(0.0,2,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorDCATracks = new AliRsnListOutput("DCAXY_Tracks", AliRsnListOutput::kHistoDefault);
    outMonitorDCATracks->AddValue(axisDCATracks);
    // add outputs to loop
    if (mon) mon->Add(outMonitorDCATracks);
    if (trackDCAXY) trackDCAXY->AddOutput(outMonitorDCATracks);


}

//  DCA V0 Secondary Tracks to Primary Vertex
void AddMonitorOutput_MinDCAToVertexXY(TObjArray *mon=0, TString opt="", AliRsnLoopDaughter *trackDCAXY=0)
{

    // DCAXY of Tracks
    AliRsnValueDaughter *axisDCATracks = new AliRsnValueDaughter("dcaXY_tracks", AliRsnValueDaughter::kV0DCAXY);
    axisDCATracks->SetBins(0.0,2,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorDCATracks = new AliRsnListOutput("DCAXY_Tracks", AliRsnListOutput::kHistoDefault);
    outMonitorDCATracks->AddValue(axisDCATracks);
    // add outputs to loop
    if (mon) mon->Add(outMonitorDCATracks);
    if (trackDCAXY) trackDCAXY->AddOutput(outMonitorDCATracks);


}

// Lifetime of V0 particle.

void AddMonitorOutput_K0sfpLife(TObjArray *mon=0, TString opt="", AliRsnLoopDaughter *llifetime=0)
{
    AliRsnValueDaughter *k0slifetime = new AliRsnValueDaughter("lifetime", AliRsnValueDaughter::kV0Lifetime);
    k0slifetime->SetBins(0.0,200,0.1);

    // output: 2D histogram
    AliRsnListOutput *outMonitork0sLifetime = new AliRsnListOutput("k0s", AliRsnListOutput::kHistoDefault);
    outMonitork0sLifetime->AddValue(k0slifetime);

    // add outputs to loop
    if (mon) mon->Add(outMonitork0sLifetime);
    if (llifetime) llifetime->AddOutput(outMonitork0sLifetime);

}

void AddMonitorOutput_K0sMass_Pt(TObjArray *mon=0, TString opt="", AliRsnLoopDaughter *lMass=0, AliRsnLoopDaughter *lPt=0)
{
    AliRsnValueDaughter *axisMass = new AliRsnValueDaughter("K0s_Mass", AliRsnValueDaughter::kV0Mass);
    axisMass->SetBins(0.4,0.6,0.001);

    AliRsnValueDaughter *axisK0sPt = new AliRsnValueDaughter("K0s_Pt", AliRsnValueDaughter::kV0Pt);
    axisK0sPt->SetBins(0.,30.,0.001);

    // output: 2D histogram
    AliRsnListOutput *outMonitorTrMom = new AliRsnListOutput("K0s_Mass_Pt", AliRsnListOutput::kHistoDefault);
    outMonitorTrMom->AddValue(axisK0sPt);
    outMonitorTrMom->AddValue(axisMass);

    // add outputs to loop
    if (mon) mon->Add(outMonitorTrMom);
    if (lPt) lPt->AddOutput(outMonitorTrMom);
    //if (mon) mon->Add(outMonitorM);
    //if (lMass) lm->AddOutput(outMonitorM);

}

Bool_t ConfigKsKs
(
 AliRsnMiniAnalysisTask *task,
 Bool_t                  isPP = kTRUE,
 Bool_t                  isMC = kFALSE,
 Int_t                   customQualityCutsID=AliRsnCutSetDaughterParticle::kDisableCustom,
 Int_t                   aodFilterBit = 32,
 Bool_t                  enableMonitor=kTRUE,
 Bool_t                  enaMultSel = kTRUE,    //enable multiplicity axis
 TString                 monitorOpt = kTRUE,
 AliRsnCutSetDaughterParticle::ERsnDaughterCutSet cutPiCandidate = AliRsnCutSetDaughterParticle::kTPCTOFpidphikstarpPb2016,
 Int_t                    polaxis=0,
 //TString  ThetaStar = AliRsnMiniValue::kCosThetaHeAbs,
 //const char  *ThetaStar = AliRsnMiniValue::kCosThetaHeAbs,
 Float_t                 piPIDCut = 3.0,
 Float_t                 pi_k0s_PIDCut=5.0,
 Float_t                 massTol=0.03,
 Float_t                 massTolVeto =0.03,
 Int_t 			 tol_switch = 1,
 Double_t                tol_sigma =4.0,
 Float_t                 pLife = 20.0,
 Float_t                 radiuslow =0.5,
 Bool_t                  Switch = kTRUE,
 Float_t                 k0sDCA =1.0,
 Float_t                 k0sCosPoinAn=0.997,
 Float_t                 k0sDaughDCA =1.0,
 const char             *suffix =0,
 AliRsnCutSet           *PairCutsSame = 0,
 AliRsnCutSet           *PairCutsMix = 0,
 Float_t                 DCAxy = 0.06,
 Bool_t                  enableSys = kTRUE,
 Int_t                   Sys = kTRUE,
 Float_t                masslow = 0.5,         //inv mass axis low edge
 Float_t                massup = 2.5,          //inv mass axis upper edge 
 Int_t                  nbins = 200,           //inv mass axis n bin
 Float_t                ptlow = 0.0,             //pT axis low edge 
 Float_t                ptup = 20.0,              //pT axis upper edge 
 Int_t                  nbinspt = 200,           //pT axis n bins
 Float_t                coslow = 0.0,             //costheta axis low edge 
 Float_t                cosup = 1.0,              //costheta axis upper edge 
 Int_t                  nbinscos = 100           //costheta axis n bins

 )
//kTPCpidphipp2015
 {
  
    // manage suffix
    if (strlen(suffix) > 0) suffix = Form("_%s", suffix);
  /////////////////////////////////////////////////////
  // selections for the pion from the decay of KStarPlusMinus*
    /////////////////////////////////////////////////////

     Float_t  v0rapidity=0.5;
     Float_t crossedRows =70;
     Float_t rowsbycluster = 0.8;
       
    //
  AliRsnCutSetDaughterParticle* cutSetQ;
  AliRsnCutSetDaughterParticle* cutSetPi;

  AliRsnCutTrackQuality* trkQualityCut= new AliRsnCutTrackQuality("myQualityCut");
  if(SetCustomQualityCut(trkQualityCut,customQualityCutsID,aodFilterBit)){
        //Set custom quality cuts for systematic checks
    cutSetQ=new AliRsnCutSetDaughterParticle(Form("cutQ_bit%i",aodFilterBit),trkQualityCut,AliRsnCutSetDaughterParticle::kQualityStd2011,AliPID::kPion,-1.);
    cutSetPi=new AliRsnCutSetDaughterParticle(Form("cutPi%i_%2.1fsigma",cutPiCandidate, piPIDCut),trkQualityCut,cutPiCandidate,AliPID::kPion,piPIDCut);
  }else{
    //use default quality cuts std 2010 with crossed rows TPC
    Bool_t useCrossedRows = 1;
        cutSetQ=new AliRsnCutSetDaughterParticle(Form("cutQ_bit%i",aodFilterBit),AliRsnCutSetDaughterParticle::kQualityStd2011,AliPID::kPion,-1.,aodFilterBit,kTRUE);
        cutSetPi=new AliRsnCutSetDaughterParticle(Form("cutPi%i_%2.1fsigma",cutPiCandidate,piPIDCut),cutPiCandidate,AliPID::kPion,piPIDCut,aodFilterBit, kTRUE);
  }
  
  
  Int_t iCutQ=task->AddTrackCuts(cutSetQ);
  Int_t iCutPi=task->AddTrackCuts(cutSetPi);
  
    /////////////////////////////////////////////////////////////
    // selections for K0s and for the daughters of K0s
    /////////////////////////////////////////////////////////////
    //
  // selections for pion daugthers of K0s
     AliESDtrackCuts *esdTrackCuts = new AliESDtrackCuts("qualityDaughterK0s");
  //    AliAODtrackCuts *aodTrackCuts = new AliAODtrackCuts("qualityDaughterK0s");
    esdTrackCuts->SetEtaRange(-0.8,0.8);
    esdTrackCuts->SetRequireTPCRefit();
   esdTrackCuts->SetAcceptKinkDaughters(0); //
   esdTrackCuts->SetMinNCrossedRowsTPC(crossedRows);
   //  esdTrackCuts->SetMinNCrossedRowsTPC(70);
   esdTrackCuts->SetMinRatioCrossedRowsOverFindableClustersTPC(rowsbycluster);
   //  esdTrackCuts->SetMinRatioCrossedRowsOverFindableClustersTPC(0.8);
    esdTrackCuts->SetMaxChi2PerClusterTPC(100);
    esdTrackCuts->SetMinDCAToVertexXY(DCAxy); //Use one of the two - pt dependent or fixed value cut.

    //
    /////////////////////////////////////////////////
    // selections for K0s
    AliRsnCutV0 *cutK0s = new AliRsnCutV0("cutK0s", kK0Short, AliPID::kPion, AliPID::kPion);
    cutK0s->SetPIDCutPion(pi_k0s_PIDCut);        // PID for the pion daughter of K0s
    cutK0s->SetESDtrackCuts(esdTrackCuts);
    cutK0s->SetMaxDaughtersDCA(k0sDaughDCA);
    cutK0s->SetMaxDCAVertex(k0sDCA);
    cutK0s->SetMinCosPointingAngle(k0sCosPoinAn);
    cutK0s->SetTolerance(massTol);
    cutK0s->SetToleranceVeto(massTolVeto);   //Rejection range for Competing V0 Rejection
    cutK0s->SetSwitch(Switch);
    cutK0s->SetfLife(pLife);
    cutK0s->SetfLowRadius(radiuslow);
    cutK0s->SetfHighRadius(200);
    cutK0s->SetMaxRapidity(v0rapidity);
    // cutK0s->SetMaxRapidity(0.5);
    cutK0s->SetpT_Tolerance(tol_switch);
    cutK0s->SetMassTolSigma(tol_sigma);

    if(enableSys)
    {

        if(Sys==1){cutK0s->SetPIDCutPion(pi_k0s_PIDCut-0.5);}
        else if(Sys==2){cutK0s->SetPIDCutPion(pi_k0s_PIDCut-1.0);}
        else if(Sys==3){cutK0s->SetMaxDaughtersDCA(k0sDaughDCA-0.25);}
        else if(Sys==4){cutK0s->SetMaxDaughtersDCA(k0sDaughDCA+0.25);}
        else if(Sys==5){cutK0s->SetMinCosPointingAngle(k0sCosPoinAn-0.02);}
        else if(Sys==6){cutK0s->SetMinCosPointingAngle(k0sCosPoinAn+0.02);}
        else if(Sys==7){cutK0s->SetTolerance(massTol+1);}
        else if(Sys==8){cutK0s->SetTolerance(massTol+2);}
        else if(Sys==9){cutK0s->SetTolerance(massTol-1);}
        else if(Sys==10){cutK0s->SetfLife(pLife-8);}
        else if(Sys==11){cutK0s->SetfLowRadius(radiuslow-0.2);}
        else if(Sys==12){cutK0s->SetfLowRadius(radiuslow+0.2);}
        else if(Sys==13){cutK0s->SetMaxRapidity(v0rapidity-0.1);}
        else if(Sys==14){cutK0s->SetMaxRapidity(v0rapidity+0.1);}
        else if(Sys==15){cutK0s->SetToleranceVeto(massTolVeto-0.0011);}
        else if(Sys==16){cutK0s->SetToleranceVeto(massTolVeto+0.0011);}
        else if(Sys==17){esdTrackCuts->SetMinDCAToVertexXY(DCAxy-0.01);}
        else if(Sys==18){esdTrackCuts->SetMinDCAToVertexXY(DCAxy+0.01);}
        else if(Sys==19){esdTrackCuts->SetMinNCrossedRowsTPC(crossedRows+10);}
        else if(Sys==20){esdTrackCuts->SetMinNCrossedRowsTPC(crossedRows+30);}
        else if(Sys==21){esdTrackCuts->SetMinRatioCrossedRowsOverFindableClustersTPC(rowsbycluster+0.1);}

    }

    //
    AliRsnCutSet *cutSetK0s = new AliRsnCutSet("setK0s", AliRsnTarget::kDaughter);
    cutSetK0s->AddCut(cutK0s);
    cutSetK0s->SetCutScheme(cutK0s->GetName());
    Int_t iCutK0s = task->AddTrackCuts(cutSetK0s);
    //

    if(enableMonitor){
        Printf("======== Cut monitoring enabled");
     //AddMonitorOutput(isMC, cutPi->GetMonitorOutput(), monitorOpt.Data());
     //AddMonitorOutput(isMC, cutQ->GetMonitorOutput(), monitorOpt.Data());
        AddMonitorOutput(isMC, cutSetQ->GetMonitorOutput(), monitorOpt.Data());
        AddMonitorOutput(isMC, cutSetPi->GetMonitorOutput(), monitorOpt.Data());
    }

    //
    // -- Values ------------------------------------------------------------------------------------
    //

    /// -- Values ------------------------------------------------------------------------------------
    /* invariant mass   */ Int_t imID   = task->CreateValue(AliRsnMiniValue::kInvMass, kFALSE);
    /* transv. momentum */ Int_t ptID    = task->CreateValue(AliRsnMiniValue::kPt, kFALSE);
    /* centrality       */ Int_t centID  = task->CreateValue(AliRsnMiniValue::kMult, kFALSE);
    /* pseudorapidity   */ Int_t etaID   = task->CreateValue(AliRsnMiniValue::kEta, kFALSE);
    /* rapidity         */ Int_t yID     = task->CreateValue(AliRsnMiniValue::kY, kFALSE);

    /* 1st daughter pt  */ Int_t fdpt   = task->CreateValue(AliRsnMiniValue::kFirstDaughterPt,kFALSE);
    /* 2nd daughter pt  */ Int_t sdpt   = task->CreateValue(AliRsnMiniValue::kSecondDaughterPt,kFALSE);
    /* 1st daughter p   */ Int_t fdp    = task->CreateValue(AliRsnMiniValue::kFirstDaughterP,kFALSE);
    /* 2nd daughter p   */ Int_t sdp    = task->CreateValue(AliRsnMiniValue::kSecondDaughterP,kFALSE);
    Int_t costheta;   
 
   if(isMC)
      {
	if(polaxis==0) {
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaHeAbs,kTRUE); } 

	if(polaxis==1) {
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaStarAbs,kTRUE); } 
	//if(polaxis==2) {
	//costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaCsAbs,kTRUE); } 

	if(polaxis==2) {
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaJackson,kTRUE); }

	if(polaxis==3){
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaTransversity,kTRUE); }

      }
	
    if(!isMC)
      {
	if(polaxis==0) {
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaHeAbs,kFALSE); } 

	if(polaxis==1) {
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaStarAbs,kFALSE); } 
	//	if(polaxis==2) {
	// costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaCsAbs,kFALSE); } 

	if(polaxis==2) {
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaJackson,kFALSE); }

	if(polaxis==3){
	  costheta  = task->CreateValue(AliRsnMiniValue::kCosThetaTransversity,kFALSE); }
          }
 
   
    Bool_t  use     [4] = {1   ,1    ,1     ,1  };
    Bool_t  useIM   [4] = {1   ,1    ,1    ,1   };
    TString name    [4] = {"KStarPlusMinus","KStarPlusMinusmix","KStarPlusMinust","AKStarPlusMinust"};
    TString comp    [4] = {"PAIR"          ,"MIX"              ,"TRUE"           ,"TRUE"            };
    TString output  [4] = {"SPARSE"        ,"SPARSE"           ,"SPARSE"         ,"SPARSE"          };
    Char_t  charge1 [4] = {'0'              ,'0'               ,'0'              ,'0'               };
    Char_t  charge2 [4] = {'0'              ,'0'               ,'0'              ,'0'               };
    Int_t   cutID1  [4] = { iCutK0s         ,iCutK0s         ,iCutK0s            ,iCutK0s           };
    Int_t   cutID2  [4] = { iCutK0s         , iCutK0s        , iCutK0s           , iCutK0s          };
    Int_t   ipdg    [4] = {10331            ,10331            ,10331             , 10331            };
    Double_t mass   [4] = { 1.710           ,1.710            ,1.710             , 1.710            };
    AliRsnCutSet* paircuts[4] = {PairCutsSame,  PairCutsMix,    PairCutsSame,   PairCutsSame        };

    
    for (Int_t i = 0; i < 4; i++) {
      if (!use[i]) continue;
      //if (collSyst) output[i] = "SPARSE";
      // create output
      AliRsnMiniOutput *out = task->CreateOutput(Form("ChargeKstar_%s%s", name[i].Data(), suffix), output[i].Data(), comp[i].Data());
      // selection settings
      out->SetCutID(0, cutID1[i]);
      out->SetCutID(1, cutID2[i]);
      out->SetDaughter(0, AliRsnDaughter::kKaon0);
      out->SetDaughter(1, AliRsnDaughter::kKaon0);
      out->SetCharge(0, charge1[i]);
      out->SetCharge(1, charge2[i]);
      out->SetMotherPDG(ipdg[i]);
      out->SetMotherMass(mass[i]);
      // pair cuts
      out->SetPairCuts(paircuts[i]);
      
      // axis X: invmass
      if (useIM[i])
	out->AddAxis(imID, nbins, masslow, massup);
        out->AddAxis(ptID, nbinspt, ptlow,ptup);
  	if(isPP && enaMultSel) out->AddAxis(centID, 100, 0.0, 100.0);
	if(isPP && !enaMultSel) out->AddAxis(centID, 400, 0.5, 400.5);
	if(!isPP) out->AddAxis(centID, 100, 0.0, 100.0);
	out->AddAxis(costheta, nbinscos, coslow, cosup);
     }
    Bool_t isRotate =1;

    if (!isMC)
      {    
	if(isRotate){
	 for (Int_t i = 0; i < 2; i++)
	   {if (!use[i]) continue;
	   //if (collSyst) output[i] = "SPARSE";

	AliRsnMiniOutput *out = task->CreateOutput(Form("ChargeKstar_Rotated_%s%s", name[i].Data(), suffix), output[i].Data(), "ROTATE2");
	  out->SetCutID(0, cutID1[i]);
	  out->SetCutID(1, cutID2[i]);
	  out->SetDaughter(0, AliRsnDaughter::kKaon0);
	  out->SetDaughter(1, AliRsnDaughter::kKaon0);
	  out->SetCharge(0, charge1[i]);
	  out->SetCharge(1, charge2[i]);
	  out->SetMotherPDG(ipdg[i]);
	  out->SetMotherMass(mass[i]);
	  // pair cuts
	  out->SetPairCuts(PairCutsSame);

	if (useIM[i])
	out->AddAxis(imID, nbins, masslow, massup);
        out->AddAxis(ptID, nbinspt, ptlow,ptup);
	if(isPP && enaMultSel) out->AddAxis(centID, 100, 0.0, 100.0);
	if(isPP && !enaMultSel) out->AddAxis(centID, 400, 0.5, 400.5);
	if(!isPP) out->AddAxis(centID, 100, 0.0, 100.0);
       	out->AddAxis(costheta, nbinscos, coslow, cosup);
	    }
        }
      }

    /*
    // AddMonitorOutput_K0sP(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sPt(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sNegDaughPt(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sPosDaughPt(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sMass(cutSetK0s->GetMonitorOutput());
    // AddMonitorOutput_K0sDCA(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sRadius(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sDaughterDCA(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sCosPointAngle(cutSetK0s->GetMonitorOutput());
    // AddMonitorOutput_K0sProtonPID(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sPionPID(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sfpLife(cutSetK0s->GetMonitorOutput());
    AddMonitorOutput_K0sMass_Pt(cutSetK0s->GetMonitorOutput());
    
    //Monitor Output for Tracks
    AddMonitorOutput_MinDCAToVertexXYPtDep(cutSetK0s->GetMonitorOutput());
    //AddMonitorOutput_MinDCAToVertexXY(cutSetK0s->GetMonitorOutput());     //Uncomment if fixed value Cut used
    */
 
    if (isMC) {
 

      /*     Bool_t  MCuseIM   [4] = {1   ,1    ,1    ,1   };
      TString mode = "SPARSE";
        //TString mode = "HIST";
        //if (collSyst) mode = "SPARSE";

	// create output
        AliRsnMiniOutput *out = task->CreateOutput(Form("KStarPlusMinus_MotherMC%s", suffix), mode.Data(), "MOTHER");
        // selection settings
        out->SetDaughter(0, AliRsnDaughter::kKaon0);
        out->SetDaughter(1, AliRsnDaughter::kKaon0);
        out->SetMotherPDG(10331);
        out->SetMotherMass(1.710);
        // pair cuts
        out->SetPairCuts(PairCutsSame);

	if (MCuseIM[i])
	out->AddAxis(imID, nbins, masslow, massup);
        out->AddAxis(ptID, nbinspt, ptlow,ptup);
	if(enaMultSel) out->AddAxis(centID, 100, 0.0, 100.0);
	else out->AddAxis(centID, 400, 0.5, 400.5);
	if(!isPP) out->AddAxis(centID, 100, 0.0, 100.0);
	out->AddAxis(costheta, nbinscos, coslow, cosup);
	
        // create output
        AliRsnMiniOutput *out = task->CreateOutput(Form("AKStarPlusMinus_MotherMC%s", suffix), mode.Data(), "MOTHER");
        // selection settings
        out->SetDaughter(0, AliRsnDaughter::kKaon0);
        out->SetDaughter(1, AliRsnDaughter::kKaon0);
        out->SetMotherPDG(-10331);
        out->SetMotherMass(1.710);
        // pair cuts
        out->SetPairCuts(PairCutsSame);

	if (MCuseIM[i])
	out->AddAxis(imID, nbins, masslow, massup);
        out->AddAxis(ptID, nbinspt, ptlow,ptup);
	out->AddAxis(centID, 400, 0.5, 400.5);
	if (enaMultSel) out->AddAxis(centID, 100, 0.0, 100.0);
       	if(!isPP) out->AddAxis(centID, 100, 0.0, 100.0);
	out->AddAxis(costheta, nbinscos, coslow, cosup);
	//	if(isGT)  out->AddAxis(sdpt,100,0.,10.);
	*/
        AliRsnMiniOutput* outps=task->CreateOutput(Form("K*_phaseSpace%s", suffix),"HIST","TRUE");
        outps->SetDaughter(0,AliRsnDaughter::kKaon0);
        outps->SetDaughter(1,AliRsnDaughter::kKaon0);
        outps->SetCutID(0,iCutK0s);
        outps->SetCutID(1,iCutK0s);
        outps->SetMotherPDG(10331);
        outps->SetMotherMass(1.710);
        outps->SetPairCuts(PairCutsSame);
        outps->AddAxis(fdpt,100,0.,10.);
        outps->AddAxis(sdpt,100,0.,10.);
        outps->AddAxis(ptID,200,0.,20.);

        AliRsnMiniOutput* outpsf=task->CreateOutput(Form("K*_phaseSpaceFine%s", suffix),"HIST","TRUE");
        outpsf->SetDaughter(0,AliRsnDaughter::kKaon0);
        outpsf->SetDaughter(1,AliRsnDaughter::kKaon0);
        outpsf->SetCutID(0,iCutK0s);
        outpsf->SetCutID(1,iCutK0s);
        outpsf->SetMotherPDG(10331);
        outpsf->SetMotherMass(1.710);
        outpsf->SetPairCuts(PairCutsSame);
        outpsf->AddAxis(fdpt,30,0.,3.);
        outpsf->AddAxis(sdpt,30,0.,3.);
        outpsf->AddAxis(ptID,300,0.,3.);


    }

    return kTRUE;
}

Bool_t SetCustomQualityCut(AliRsnCutTrackQuality * trkQualityCut, Int_t customQualityCutsID = 0, Int_t customFilterBit = 0)
{
    //Sets configuration for track quality object different from std quality cuts.
    //Returns kTRUE if track quality cut object is successfully defined,
    //returns kFALSE if an invalid set of cuts (customQualityCutsID) is chosen or if the
    //object to be configured does not exist.

    if ((!trkQualityCut)){
        Printf("::::: SetCustomQualityCut:: use default quality cuts specified in task configuration.");
        return kFALSE;
    }

    if(customQualityCutsID>=1 && customQualityCutsID<100 && customQualityCutsID!=2){
        trkQualityCut->SetDefaults2011(kTRUE,kTRUE);
        Printf(Form("::::: SetCustomQualityCut:: using standard 2011 track quality cuts"));

        if(!customFilterBit){//ESD
            if(customQualityCutsID==3){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexXYPtDep("0.0150+0.0500/pt^1.1");}
            else if(customQualityCutsID==4){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexXYPtDep("0.006+0.0200/pt^1.1");}
            else if(customQualityCutsID==5){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexZ(5.);}
            else if(customQualityCutsID==6){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexZ(0.2);}
            else if(customQualityCutsID==7){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterTPC(5.);}
            else if(customQualityCutsID==8){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterTPC(2.3);}
            else if(customQualityCutsID==9){trkQualityCut->GetESDtrackCuts()->SetMinNCrossedRowsTPC(60);}
            else if(customQualityCutsID==10){trkQualityCut->GetESDtrackCuts()->SetMinNCrossedRowsTPC(100);}
            else if(customQualityCutsID==11){trkQualityCut->GetESDtrackCuts()->SetMinRatioCrossedRowsOverFindableClustersTPC(0.7);}
            else if(customQualityCutsID==12){trkQualityCut->GetESDtrackCuts()->SetMinRatioCrossedRowsOverFindableClustersTPC(0.9);}
            else if(customQualityCutsID==13){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterITS(49.);}
            else if(customQualityCutsID==14){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterITS(4.);}
            else if(customQualityCutsID==15){trkQualityCut->GetESDtrackCuts()->SetMaxChi2TPCConstrainedGlobal(49.);}
            else if(customQualityCutsID==16){trkQualityCut->GetESDtrackCuts()->SetMaxChi2TPCConstrainedGlobal(25.);}
            else if(customQualityCutsID==17){trkQualityCut->GetESDtrackCuts()->SetClusterRequirementITS(AliESDtrackCuts::kSPD,AliESDtrackCuts::kOff);}
            else if(customQualityCutsID==56){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexZ(1.);}
            else if(customQualityCutsID==58){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterTPC(3.);}
            else if(customQualityCutsID==60){trkQualityCut->GetESDtrackCuts()->SetMinNCrossedRowsTPC(80);}
            else if(customQualityCutsID==64){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterITS(25.);}
        }else{//AOD
            trkQualityCut->SetCheckOnlyFilterBit(kFALSE);
            if(customQualityCutsID==4){trkQualityCut->SetDCARPtFormula("0.006+0.0200/pt^1.1");}
            else if(customQualityCutsID==6){trkQualityCut->SetDCAZmax(0.2);}
            else if(customQualityCutsID==8){trkQualityCut->SetTrackMaxChi2(2.3);}
            else if(customQualityCutsID==10){trkQualityCut->SetMinNCrossedRowsTPC(100,kTRUE);}
            else if(customQualityCutsID==12){trkQualityCut->SetMinNCrossedRowsOverFindableClsTPC(0.9,kTRUE);}
            else if(customQualityCutsID==56){trkQualityCut->SetDCAZmax(1.);}
            else if(customQualityCutsID==58){trkQualityCut->SetTrackMaxChi2(3.5);}
            else if(customQualityCutsID==60){trkQualityCut->SetMinNCrossedRowsTPC(80,kTRUE);}
        }

        trkQualityCut->Print();
        return kTRUE;
    }else if(customQualityCutsID==2 || (customQualityCutsID>=100 && customQualityCutsID<200)){
        trkQualityCut->SetDefaultsTPCOnly(kTRUE);
        Printf(Form("::::: SetCustomQualityCut:: using TPC-only track quality cuts"));

        if(customQualityCutsID==103){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexXY(3.);}
        else if(customQualityCutsID==104){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexXY(1.);}
        else if(customQualityCutsID==105){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexZ(4.);}
        else if(customQualityCutsID==106){trkQualityCut->GetESDtrackCuts()->SetMaxDCAToVertexZ(1.);}
        else if(customQualityCutsID==107){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterTPC(7.);}
        else if(customQualityCutsID==108){trkQualityCut->GetESDtrackCuts()->SetMaxChi2PerClusterTPC(2.5);}
        else if(customQualityCutsID==109){trkQualityCut->GetESDtrackCuts()->SetMinNClustersTPC(30);}
        else if(customQualityCutsID==110){trkQualityCut->GetESDtrackCuts()->SetMinNClustersTPC(85);}

        trkQualityCut->Print();
        return kTRUE;
    }else{
        Printf("::::: SetCustomQualityCut:: use default quality cuts specified in task configuration.");
        return kFALSE;
    }

    //for pA 2013
    //trkQualityCut->SetDefaults2011();//with filter bit=10
    //reset filter bit to very loose cuts
    trkQualityCut->SetAODTestFilterBit(customFilterBit);
    //apply all other cuts "by hand"
    trkQualityCut->SetCheckOnlyFilterBit(kFALSE);
    trkQualityCut->SetMinNCrossedRowsTPC(70, kTRUE);
    trkQualityCut->SetMinNCrossedRowsOverFindableClsTPC(0.8, kTRUE);
    trkQualityCut->SetMaxChi2TPCConstrainedGlobal(36);//used for ESD only - for AOD does not correspond to any cut
    trkQualityCut->SetTPCmaxChi2(4.0); //already in filter bit 0
    trkQualityCut->SetRejectKinkDaughters(kTRUE); //already in filter bit 0
    trkQualityCut->SetSPDminNClusters(AliESDtrackCuts::kAny);
    trkQualityCut->SetITSmaxChi2(36);
    trkQualityCut->AddStatusFlag(AliESDtrack::kTPCin   , kTRUE);//already in defaults 2011
    trkQualityCut->AddStatusFlag(AliESDtrack::kTPCrefit, kTRUE);//already in defaults 2011
    trkQualityCut->AddStatusFlag(AliESDtrack::kITSrefit, kTRUE);//already in defaults 2011

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kFilterBitCustom) {
        trkQualityCut->SetCheckOnlyFilterBit(kTRUE);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdLooserDCAXY){
        trkQualityCut->SetDCARmax(2.4);
    } else {
        trkQualityCut->SetDCARPtFormula("0.0105+0.0350/pt^1.1");
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdLooserDCAZ){
        trkQualityCut->SetDCAZmax(3.2);
    } else {
        trkQualityCut->SetDCAZmax(2.0);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdCrossedRows60){
        trkQualityCut->SetMinNCrossedRowsTPC(60, kTRUE);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdCrossedRows80){
        trkQualityCut->SetMinNCrossedRowsTPC(80, kTRUE);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdRowsToCls075){
        trkQualityCut->SetMinNCrossedRowsOverFindableClsTPC(0.75, kTRUE);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdRowsToCls085){
        trkQualityCut->SetMinNCrossedRowsOverFindableClsTPC(0.85, kTRUE);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdCls70){
        trkQualityCut->SetAODTestFilterBit(10);
        trkQualityCut->SetTPCminNClusters(70);
    }

    if (customQualityCutsID==AliRsnCutSetDaughterParticle::kStdChi2TPCCls35){
        trkQualityCut->SetTPCmaxChi2(3.5);
    }

    // trkQualityCut->SetPtRange(1.0, 50.0);

    trkQualityCut->SetPtRange(0.15, 30.0);
    trkQualityCut->SetEtaRange(-0.8, 0.8);

    Printf(Form("::::: SetCustomQualityCut:: using custom track quality cuts #%i",customQualityCutsID));
    trkQualityCut->Print();
    return kTRUE;
}



















