//
//  FTCocoaRenderStrategy.hpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#ifndef FTGDIRenderStrategy_hpp
#define FTGDIRenderStrategy_hpp

#include "../FTRender/IFTRenderStrategy.hpp"
#include <Windows.h>

class FTGDIRenderStrategy : public IFTRenderStrategy
{
public:
	FTGDIRenderStrategy(HDC hdc);

	virtual void drawBox(float x, float y, float width, float height);
private:
	HDC m_hdc;
};

#endif /* FTGDIRenderStrategy_hpp */
