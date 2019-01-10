//
//  FTCocoaRenderStrategy.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTCGRenderStrategy_hpp
#define FTCGRenderStrategy_hpp

#include <ApplicationServices/ApplicationServices.h>
#include "../FTRender/IFTRenderStrategy.hpp"

class FTCGRenderStrategy : public IFTRenderStrategy
{
public:
    FTCGRenderStrategy(CGContextRef context, float height);
    
    virtual void drawBox(float x, float y, float width, float height);
private:
    CGContextRef m_refContext;
    CGColorRef m_refColor;
    float m_fHeight;
};

#endif /* FTCGRenderStrategy_hpp */
