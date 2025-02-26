#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"  // So we can refer to CrashDummyAudioProcessor

class CrashDummyAudioProcessorEditor : public juce::AudioProcessorEditor,
                                       public juce::Button::Listener
{
public:
    CrashDummyAudioProcessorEditor (CrashDummyAudioProcessor&);
    ~CrashDummyAudioProcessorEditor() override;

    void paint (juce::Graphics&) override;
    void resized() override;

    // From juce::Button::Listener
    void buttonClicked (juce::Button* button) override;

private:
    // Method that deliberately crashes the host
    void forceCrash();

    // UI Components
    juce::TextButton crashButton;
    juce::Label titleLabel;
    juce::Label instructionLabel;

    // Reference to the processor
    CrashDummyAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (CrashDummyAudioProcessorEditor)
};
