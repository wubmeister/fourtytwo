//
//  FTProcess.cpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#include "FTProcess.hpp"

FTProcess::FTProcess(IFTRenderStrategy *rs) : m_pRenderStrategy(rs) {}

void FTProcess::draw()
{
    m_pRenderStrategy->drawBox(10.0, 10.0, 100.0, 40.0);
}
