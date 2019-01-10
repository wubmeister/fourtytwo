//
//  FTProcess.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTProcess_hpp
#define FTProcess_hpp

#include "FTRender/IFTRenderStrategy.hpp"

class FTProcess
{
public:
    FTProcess(IFTRenderStrategy *rs);
    void draw();

private:
    IFTRenderStrategy *m_pRenderStrategy;
};

#endif /* FTProcess_hpp */
