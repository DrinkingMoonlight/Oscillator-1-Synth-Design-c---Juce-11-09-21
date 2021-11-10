/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class BasicOscillatorsynth110921AudioProcessorEditor  : public juce::AudioProcessorEditor
{
public:
    BasicOscillatorsynth110921AudioProcessorEditor (BasicOscillatorsynth110921AudioProcessor&);
    ~BasicOscillatorsynth110921AudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    BasicOscillatorsynth110921AudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BasicOscillatorsynth110921AudioProcessorEditor)
};
