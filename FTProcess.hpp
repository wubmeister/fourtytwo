//
//  FTProcess.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTProcess_hpp
#define FTProcess_hpp

#include "FTRender/FTRenderStrategyInterface.hpp"

class FTProcess
{
public:
    FTProcess(FTRenderStrategyInterface *rs);
    void draw();
    
private:
    FTRenderStrategyInterface *m_pRenderStrategy;
};

#endif /* FTProcess_hpp */
