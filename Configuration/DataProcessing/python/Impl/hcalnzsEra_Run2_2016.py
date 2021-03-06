#!/usr/bin/env python
"""
_hcalnzsEra_Run2_2016_

Scenario supporting proton collisions

"""

import os
import sys

from Configuration.DataProcessing.Impl.hcalnzs import hcalnzs
import Configuration.StandardSequences.Eras as eras

class hcalnzsEra_Run2_2016(hcalnzs):
    def __init__(self):
        hcalnzs.__init__(self)
        self.recoSeq=':reconstruction_HcalNZS'
        self.cbSc='pp'
        self.eras = eras.eras.Run2_2016
        self.promptCustoms += [ 'Configuration/DataProcessing/RecoTLR.customisePostEra_Run2_2016' ]
        self.expressCustoms += [ 'Configuration/DataProcessing/RecoTLR.customisePostEra_Run2_2016' ]
        self.visCustoms += [ 'Configuration/DataProcessing/RecoTLR.customisePostEra_Run2_2016' ]
    """
    _hcalnzsEra_Run2_2016_

    Implement configuration building for data processing for proton
    collision data taking

    """
