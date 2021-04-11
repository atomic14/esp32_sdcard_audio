#pragma once

#include "Output.h"

/**
 * Base Class for both the ADC and I2S sampler
 **/
class DACOutput : public Output
{
public:
    void start(int sample_rate);
    virtual int16_t process_sample(int16_t sample)
    {
        // DAC needs unsigned 16 bit samples
        return sample + 32768;
    }
};
