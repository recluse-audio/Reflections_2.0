/*
  ==============================================================================

    MixFeel.h
    Created: 15 Dec 2020 12:26:27pm
    Author:  Billie (Govnah) Jean

  ==============================================================================
*/

#pragma once
/*
 ==============================================================================
 
 LookAndFeel.h
 Created: 12 Jul 2020 8:49:21am
 Author:  Billie (Govnah) Jean
 
 ==============================================================================
 */

#pragma once
#include <JuceHeader.h>

class  MixFeel : public juce::LookAndFeel_V4
{
public:
    MixFeel();
    ~MixFeel();
    
    void drawLinearSliderBackground (Graphics&,
                           int x, int y, int width, int height,
                           float sliderPos,
                           float minSliderPos,
                           float maxSliderPos,
                           const Slider::SliderStyle,
                           Slider&) override;
    
    juce::Slider::SliderLayout getSliderLayout(Slider&) override;
    Label* createSliderTextBox(Slider&) override;
    Font getLabelFont(Label&) override;
    
    
private:
    Font getFont()
    {
        return Font ("Consolas", "Regular", 11.f);
    }
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MixFeel)
};

