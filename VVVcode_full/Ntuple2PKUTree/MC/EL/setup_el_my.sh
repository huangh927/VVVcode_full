hadd -f el_PKUTree_SingleTop_xww.root el_out_ST_s-channel_4f_leptonDecays_13TeV-amcatnlo-pythia8_TuneCUETP8M1.root        el_out_ST_tW_antitop_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1.root el_out_ST_t-channel_top_4f_inclusiveDecays_13TeV-powhegV2-madspin-pythia8_TuneCUETP8M1.root  el_out_ST_tW_top_5f_inclusiveDecays_13TeV-powheg-pythia8_TuneCUETP8M1.root el_out_ST_t-channel_antitop_4f_inclusiveDecays_13TeV-powhegV2-madspin-pythia8_TuneCUETP8M1.root

#ln -s el_out_TT_TuneCUETP8M1_13TeV-powheg-pythia8.root el_PKUTree_TTBARpowheg_xww.root 
cp el_out_TT_TuneCUETP8M2T4_13TeV-powheg-pythia8.root el_PKUTree_TTBARpowheg_xww.root 

hadd -f el_PKUTree_VV_xww.root el_out_WWToLNuQQ_13TeV-powheg.root el_out_WZTo1L1Nu2Q_13TeV_amcatnloFXFX_madspin_pythia8.root el_out_ZZTo2L2Q_13TeV_amcatnloFXFX_madspin_pythia8.root

hadd -f  el_PKUTree_WJetsPt180_xww.root  el_out_WJetsToLNu_HT-100To200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root el_out_WJetsToLNu_HT-200To400_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root el_out_WJetsToLNu_HT-400To600_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root el_out_WJetsToLNu_HT-600To800_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root el_out_WJetsToLNu_HT-800To1200_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root el_out_WJetsToLNu_HT-1200To2500_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root el_out_WJetsToLNu_HT-2500ToInf_TuneCUETP8M1_13TeV-madgraphMLM-pythia8.root

hadd -f el_PKUTree_allBkg_xww.root  el_PKUTree_SingleTop_xww.root el_PKUTree_TTBARpowheg_xww.root el_PKUTree_VV_xww.root el_PKUTree_WJetsPt180_xww.root

#ln -s el_out_BulkGravWW600.root el_PKUTree_BulkGravWW600.root
#ln -s el_out_BulkGravWW700.root el_PKUTree_BulkGravWW700.root
#ln -s el_out_BulkGravWW750.root el_PKUTree_BulkGravWW750.root
#ln -s el_out_BulkGravWW800.root el_PKUTree_BulkGravWW800.root
#ln -s el_out_BulkGravWW900.root el_PKUTree_BulkGravWW900.root
#ln -s el_out_BulkGravWW1000.root el_PKUTree_BulkGravWW1000.root
cp el_out_BulkGravWW600.root el_PKUTree_BulkGravWW600.root
#cp el_out_BulkGravWW700.root el_PKUTree_BulkGravWW700.root
#cp el_out_BulkGravWW750.root el_PKUTree_BulkGravWW750.root
cp el_out_BulkGravWW800.root el_PKUTree_BulkGravWW800.root
#cp el_out_BulkGravWW900.root el_PKUTree_BulkGravWW900.root
cp el_out_BulkGravWW1000.root el_PKUTree_BulkGravWW1000.root
cp el_out_BulkGravWW1200.root el_PKUTree_BulkGravWW1200.root
cp el_out_BulkGravWW1400.root el_PKUTree_BulkGravWW1400.root
cp el_out_BulkGravWW1600.root el_PKUTree_BulkGravWW1600.root
cp el_out_BulkGravWW1800.root el_PKUTree_BulkGravWW1800.root
cp el_out_BulkGravWW2000.root el_PKUTree_BulkGravWW2000.root
cp el_out_BulkGravWW2500.root el_PKUTree_BulkGravWW2500.root
cp el_out_BulkGravWW3000.root el_PKUTree_BulkGravWW3000.root
cp el_out_BulkGravWW3500.root el_PKUTree_BulkGravWW3500.root
cp el_out_BulkGravWW4000.root el_PKUTree_BulkGravWW4000.root
cp el_out_BulkGravWW4500.root el_PKUTree_BulkGravWW4500.root

#cp el_out_WprimeToWZToWlepZhad_narrow_M-800_13TeV-madgraph.root el_PKUTree_WprimeWZ800.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-1000_13TeV-madgraph.root el_PKUTree_WprimeWZ1000.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-1200_13TeV-madgraph.root el_PKUTree_WprimeWZ1200.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-1400_13TeV-madgraph.root el_PKUTree_WprimeWZ1400.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-1600_13TeV-madgraph.root el_PKUTree_WprimeWZ1600.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-1800_13TeV-madgraph.root el_PKUTree_WprimeWZ1800.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-2000_13TeV-madgraph.root el_PKUTree_WprimeWZ2000.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-2500_13TeV-madgraph.root el_PKUTree_WprimeWZ2500.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-3000_13TeV-madgraph.root el_PKUTree_WprimeWZ3000.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-3500_13TeV-madgraph.root el_PKUTree_WprimeWZ3500.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-4000_13TeV-madgraph.root el_PKUTree_WprimeWZ4000.root
#cp el_out_WprimeToWZToWlepZhad_narrow_M-4500_13TeV-madgraph.root el_PKUTree_WprimeWZ4500.root



#root MakePseudoData.C\(\"el\"\) -q

#root MakePseudoData_WJets.C\(\"el\"\) -q
#root MakePseudoData_TTbar.C\(\"el\"\) -q
#root MakePseudoData_ST.C\(\"el\"\) -q
#root MakePseudoData_VV.C\(\"el\"\) -q

#hadd el_PKUTree_pdata_SF.root el_PKUTree_pdata_WJets.root el_PKUTree_pdata_TTbar.root el_PKUTree_pdata_ST.root el_PKUTree_pdata_VV.root

#hadd -f el_PKUTree_16B.root el_out_singleElon16BMay-v2_0723.root el_out_singleElon16CMay-v2_0723.root el_out_singleElon16DMay-v2_0723.root

#hadd -f el_PKUTree_16E.root el_out_singleElon16EMay-v2_0920.root el_out_singleElon16FMay-v1_0920.root el_out_singleElon16GMay-v1_0920.root el_out_singleElon16HMay-v1_0920.root

#hadd -f el_PKUTree_16BE.root el_PKUTree_16B.root el_PKUTree_16E.root

