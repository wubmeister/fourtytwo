//
//  FTCocoa.cpp
//  Browsery
//
//  Created by Wubbo Bos on 06/01/2019.
//  Copyright © 2019 Apstery. All rights reserved.
//

#include "FTCocoa.hpp"
#include "FTCGRenderStrategy.hpp"

FTProcess **g_pProcesses;
int g_nNumProcesses = 0;

extern "C" FTProcessRef FTCocoaCreateProcess(void *ctx, float height)
{
    CGContextRef context = (CGContextRef)ctx;
    FTCGRenderStrategy *strategy = new FTCGRenderStrategy(context, height);
    g_pProcesses = (FTProcess **)malloc(sizeof(FTProcess*));
    g_pProcesses[0] = new FTProcess(strategy);
    return 0;
}

extern "C" void FTCocoaDraw(FTProcessRef process)
{
    if (process < g_nNumProcesses) {
        printf("%X is not a valid process reference\n", process);
    } else {
        g_pProcesses[process]->draw();
    }
}
