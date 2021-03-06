################################################################################
#                    7 TeV                                                      
################################################################################

# (m_a, m_h) : (acceptance)
CmsNmssmAcceptance_2011_7TeV = {
(0.25,85): (0.256),
(0.50,85): (0.133),
(0.75,85): (0.117),
(1.00,85): (0.114),
(2.00,85): (0.108),
(3.00,85): (0.107),
(4.00,85): (0.105),
(0.25,90): (0.287),
(0.50,90): (0.149),
(0.75,90): (0.131),
(1.00,90): (0.128),
(2.00,90): (0.121),
(3.00,90): (0.119),
(4.00,90): (0.118),
(0.25,100): (0.349),
(0.50,100): (0.181),
(0.75,100): (0.159),
(1.00,100): (0.155),
(2.00,100): (0.147),
(3.00,100): (0.145),
(4.00,100): (0.143),
(0.25,110): (0.406),
(0.50,110): (0.211),
(0.75,110): (0.185),
(1.00,110): (0.180),
(2.00,110): (0.171),
(3.00,110): (0.169),
(4.00,110): (0.166),
(0.25,125): (0.475),
(0.50,125): (0.246),
(0.75,125): (0.216),
(1.00,125): (0.211),
(2.00,125): (0.200),
(3.00,125): (0.197),
(4.00,125): (0.195),
(0.25,150): (0.570),
(0.50,150): (0.296),
(0.75,150): (0.260),
(1.00,150): (0.253),
(2.00,150): (0.240),
(3.00,150): (0.237),
(4.00,150): (0.233),
}

def fCmsNmssmAcceptance_2011_7TeV(ma, mh):
    if ma < 0.25 or ma > 4.: raise Exception, "ma = %g" % ma
    if mh < 85. or mh > 150.: raise Exception, "mh = %g" % mh

    for alow, ahigh in [(0.25,0.5),(0.5,0.75),(0.75,1.0),(1.0,2.0),(2.0,3.0),(3.0,4.0)]:
        for hlow, hhigh in [(85.,90.),(90.,100.),(100.,110.),(110.,125.),(125.,150.)]:
            if alow <= ma <= ahigh and hlow <= mh <= hhigh:
                break
        if alow <= ma <= ahigh and hlow <= mh <= hhigh:
            break

    ainc = (ma - alow)/(ahigh - alow)
    hinc = (mh - hlow)/(hhigh - hlow)

    return (1. - ainc)*(1. - hinc)*CmsNmssmAcceptance_2011_7TeV[alow, hlow] + (ainc)*(1. - hinc)*CmsNmssmAcceptance_2011_7TeV[ahigh, hlow] + (ainc)*(hinc)*CmsNmssmAcceptance_2011_7TeV[ahigh, hhigh] + (1. - ainc)*(hinc)*CmsNmssmAcceptance_2011_7TeV[alow, hhigh]

################################################################################
#                    8 TeV                                                      
################################################################################

# (m_a, m_h) : (acceptance)
CmsNmssmAcceptance_2012_8TeV = {
(0.25,85): (0.197),
(0.50,85): (0.127),
(0.75,85): (0.111),
(1.00,85): (0.106),
(2.00,85): (0.102),
(3.55,85): (0.099),
(0.25,90): (0.220),
(0.50,90): (0.142),
(0.75,90): (0.124),
(1.00,90): (0.118),
(2.00,90): (0.114),
(3.55,90): (0.110),
(0.25,100): (0.266),
(0.50,100): (0.171),
(0.75,100): (0.150),
(1.00,100): (0.143),
(2.00,100): (0.138),
(3.55,100): (0.133),
(0.25,110): (0.301),
(0.50,110): (0.194),
(0.75,110): (0.170),
(1.00,110): (0.162),
(2.00,110): (0.156),
(3.55,110): (0.151),
(0.25,125): (0.351),
(0.50,125): (0.226),
(0.75,125): (0.198),
(1.00,125): (0.189),
(2.00,125): (0.182),
(3.55,125): (0.176),
(0.25,150): (0.415),
(0.50,150): (0.267),
(0.75,150): (0.234),
(1.00,150): (0.223),
(2.00,150): (0.215),
(3.55,150): (0.208),
}

def fCmsNmssmAcceptance_2012_8TeV(ma, mh):
    if ma < 0.25 or ma > 3.55: raise Exception, "ma = %g" % ma
    if mh < 85. or mh > 150.: raise Exception, "mh = %g" % mh
    for alow, ahigh in [(0.25,0.5),(0.5,0.75),(0.75,1.0),(1.0,2.0),(2.0,3.55)]:
        for hlow, hhigh in [(85.,90.),(90.,100.),(100.,110.),(110.,125.),(125.,150.)]:
            if alow <= ma <= ahigh and hlow <= mh <= hhigh:
                break
        if alow <= ma <= ahigh and hlow <= mh <= hhigh:
            break
    ainc = (ma - alow)/(ahigh - alow)
    hinc = (mh - hlow)/(hhigh - hlow)

    return (1. - ainc)*(1. - hinc)*CmsNmssmAcceptance_2012_8TeV[alow, hlow] + (ainc)*(1. - hinc)*CmsNmssmAcceptance_2012_8TeV[ahigh, hlow] + (ainc)*(hinc)*CmsNmssmAcceptance_2012_8TeV[ahigh, hhigh] + (1. - ainc)*(hinc)*CmsNmssmAcceptance_2012_8TeV[alow, hhigh]

################################################################################
#                    13 TeV - 2015 year                                         
################################################################################
# (m_a, m_h) : (acceptance)
CmsNmssmAcceptance_2015_13TeV = {
(0.25,85): (0.116),
(0.50,85): (0.107),
(0.75,85): (0.097),
(1.00,85): (0.090),
(2.00,85): (0.085),
(3.55,85): (0.084),
(0.25,90): (0.128),
(0.50,90): (0.117),
(0.75,90): (0.106),
(1.00,90): (0.099),
(2.00,90): (0.094),
(3.55,90): (0.093),
(0.25,100): (0.152),
(0.50,100): (0.137),
(0.75,100): (0.123),
(1.00,100): (0.117),
(2.00,100): (0.113),
(3.55,100): (0.110),
(0.25,110): (0.174),
(0.50,110): (0.158),
(0.75,110): (0.142),
(1.00,110): (0.135),
(2.00,110): (0.128),
(3.55,110): (0.125),
(0.25,125): (0.203),
(0.50,125): (0.183),
(0.75,125): (0.163),
(1.00,125): (0.156),
(2.00,125): (0.149),
(3.55,125): (0.143),
(0.25,150): (0.241),
(0.50,150): (0.217),
(0.75,150): (0.194),
(1.00,150): (0.185),
(2.00,150): (0.177),
(3.55,150): (0.175),
}

def fCmsNmssmAcceptance_2015_13TeV(ma, mh):
    if ma < 0.25 or ma > 3.55: raise Exception, "ma = %g" % ma
    if mh < 85. or mh > 150.: raise Exception, "mh = %g" % mh
    for alow, ahigh in [(0.25,0.5),(0.5,0.75),(0.75,1.0),(1.0,2.0),(2.0,3.55)]:
        for hlow, hhigh in [(85.,90.),(90.,100.),(100.,110.),(110.,125.),(125.,150.)]:
            if alow <= ma <= ahigh and hlow <= mh <= hhigh:
                break
        if alow <= ma <= ahigh and hlow <= mh <= hhigh:
            break
    ainc = (ma - alow)/(ahigh - alow)
    hinc = (mh - hlow)/(hhigh - hlow)

    return (1. - ainc)*(1. - hinc)*CmsNmssmAcceptance_2015_13TeV[alow, hlow] + (ainc)*(1. - hinc)*CmsNmssmAcceptance_2015_13TeV[ahigh, hlow] + (ainc)*(hinc)*CmsNmssmAcceptance_2015_13TeV[ahigh, hhigh] + (1. - ainc)*(hinc)*CmsNmssmAcceptance_2015_13TeV[alow, hhigh]

################################################################################
#                    13 TeV - 2016 year                                         
################################################################################
# (m_a, m_h) : (acceptance)
CmsNmssmAcceptance_2016_13TeV = {
(0.25,90): (0.226),
(0.50,90): (0.109),
(0.75,90): (0.097),
(1.00,90): (0.093),
(2.00,90): (0.088),
(3.00,90): (0.087),
(3.55, 90 ): ( 0.08645 ),
(0.25,100): (0.249),
(0.50,100): (0.132),
(0.75,100): (0.116),
(1.00,100): (0.111),
(2.00,100): (0.106),
(3.00,100): (0.105),
(3.55, 100 ): ( 0.10445 ),
(0.25,110): (0.266),
(0.50,110): (0.206),
(0.75,110): (0.132),
(1.00,110): (0.127),
(2.00,110): (0.122),
(3.00,110): (0.120),
(3.55, 110 ): ( 0.1189 ),
(0.25,125): (0.280),
(0.50,125): (0.171),
(0.75,125): (0.154),
(1.00,125): (0.147),
(2.00,125): (0.141),
(3.00,125): (0.138),
(3.55, 125 ): ( 0.13635 ),
(0.25,150): (0.291),
(0.50,150): (0.206),
(0.75,150): (0.185),
(1.00,150): (0.176),
(2.00,150): (0.168),
(3.00,150): (0.165),
(3.55, 150 ): ( 0.16335 ),
}

def fCmsNmssmAcceptance_2016_13TeV(ma, mh):
    if ma < 0.25 or ma > 3.55: raise Exception, "ma = %g" % ma
    if mh < 90. or mh > 150.: raise Exception, "mh = %g" % mh
    for alow, ahigh in [(0.25,0.5),(0.5,0.75),(0.75,1.0),(1.0,2.0),(2.0,3.0),(3.0,3.55)]:
        for hlow, hhigh in [(90.,100.),(100.,110.),(110.,125.),(125.,150.)]:
            if alow <= ma <= ahigh and hlow <= mh <= hhigh:
                break
        if alow <= ma <= ahigh and hlow <= mh <= hhigh:
            break
    ainc = (ma - alow)/(ahigh - alow)
    hinc = (mh - hlow)/(hhigh - hlow)

    return (1. - ainc)*(1. - hinc)*CmsNmssmAcceptance_2016_13TeV[alow, hlow] + (ainc)*(1. - hinc)*CmsNmssmAcceptance_2016_13TeV[ahigh, hlow] + (ainc)*(hinc)*CmsNmssmAcceptance_2016_13TeV[ahigh, hhigh] + (1. - ainc)*(hinc)*CmsNmssmAcceptance_2016_13TeV[alow, hhigh]
