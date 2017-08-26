//resizeRegion() Modified by Mathew Boston
//findBestFit(), bestFitAllocRegion() Written by Mathew Boston
void *firstFitAllocRegion(size_t s);
void *bestFitAllocRegion(size_t s);
void freeRegion(void *r);
void *resizeRegion(void *r, size_t newSize);
