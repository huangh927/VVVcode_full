import FWCore.ParameterSet.Config as cms

maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
readFiles = cms.untracked.vstring()
secFiles = cms.untracked.vstring()
source = cms.Source ("PoolSource",fileNames = readFiles, secondaryFileNames = secFiles)
readFiles.extend( [
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_1.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_10.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_100.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_101.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_102.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_103.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_104.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_105.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_106.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_107.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_108.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_109.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_11.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_110.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_111.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_112.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_113.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_114.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_115.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_116.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_117.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_118.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_119.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_12.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_120.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_121.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_122.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_123.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_124.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_125.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_126.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_127.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_128.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_129.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_13.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_130.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_131.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_132.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_133.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_134.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_135.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_136.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_137.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_138.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_139.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_14.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_140.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_141.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_142.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_143.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_144.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_145.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_146.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_147.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_148.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_15.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_150.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_151.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_152.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_153.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_154.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_155.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_156.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_157.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_158.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_159.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_16.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_160.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_161.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_162.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_163.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_164.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_165.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_166.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_17.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_18.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_19.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_2.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_20.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_21.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_22.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_23.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_24.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_25.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_26.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_27.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_28.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_29.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_3.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_30.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_31.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_32.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_33.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_34.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_35.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_36.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_37.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_38.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_39.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_4.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_40.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_41.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_42.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_43.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_44.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_45.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_46.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_47.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_48.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_49.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_5.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_50.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_51.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_52.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_53.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_54.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_55.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_56.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_57.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_58.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_59.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_6.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_60.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_61.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_62.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_63.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_64.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_65.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_66.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_67.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_68.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_69.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_7.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_70.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_71.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_72.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_73.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_74.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_75.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_76.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_77.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_78.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_79.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_8.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_80.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_81.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_82.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_83.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_84.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_85.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_86.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_87.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_88.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_89.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_9.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_90.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_91.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_92.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_93.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_94.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_95.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_96.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_97.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_98.root',
       '/store/user/tomei/DYJetsToLL_M-50_HT-100to200_Tune4C_13TeV-madgraph-tauola/Spring14dr-PU20bx25_POSTLS170_V7AN1-miniAOD706p1/140725_223458/0000/miniAOD-prod_PAT_99.root' ] );


secFiles.extend( [
               ] )
