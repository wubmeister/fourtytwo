//
//  FTRenderStrategyInterface.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTRenderStrategyInterface_h
#define FTRenderStrategyInterface_h

class FTRenderStrategyInterface
{
public:
    virtual void drawBox(float x, float y, float width, float height) = 0;
};

#endif /* FTRenderStrategyInterface_h */
