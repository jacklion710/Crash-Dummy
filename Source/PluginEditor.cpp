#include "PluginEditor.h"

//==============================================================================
CrashDummyAudioProcessorEditor::CrashDummyAudioProcessorEditor (CrashDummyAudioProcessor& p)
    : AudioProcessorEditor (&p), audioProcessor (p)
{
    // Title
    titleLabel.setText ("Crash Dummy Plugin", juce::dontSendNotification);
    titleLabel.setFont (juce::Font (24.0f, juce::Font::bold));
    titleLabel.setJustificationType (juce::Justification::centred);
    addAndMakeVisible (titleLabel);

    // Instructions
    instructionLabel.setText ("Press the button below to deliberately crash the host...",
                              juce::dontSendNotification);
    instructionLabel.setFont (juce::Font (16.0f));
    instructionLabel.setJustificationType (juce::Justification::centred);
    addAndMakeVisible (instructionLabel);

    // Crash button
    crashButton.setButtonText ("CRASH NOW");
    crashButton.setColour (juce::TextButton::buttonColourId, juce::Colours::red);
    crashButton.setColour (juce::TextButton::textColourOffId, juce::Colours::white);
    crashButton.addListener (this);
    addAndMakeVisible (crashButton);

    // Set our plugin window size
    setSize (400, 300);
}

CrashDummyAudioProcessorEditor::~CrashDummyAudioProcessorEditor()
{
    crashButton.removeListener (this);
}

//==============================================================================
void CrashDummyAudioProcessorEditor::paint (juce::Graphics& g)
{
    // Dark grey background
    g.fillAll (juce::Colour (40, 40, 40));

    // (Optional) custom drawing...
}

void CrashDummyAudioProcessorEditor::resized()
{
    auto area = getLocalBounds().reduced (20);

    titleLabel.setBounds (area.removeFromTop (40));
    area.removeFromTop (20);

    instructionLabel.setBounds (area.removeFromTop (40));
    area.removeFromTop (30);

    crashButton.setBounds (area.removeFromTop (80).withSizeKeepingCentre (200, 80));
}

//==============================================================================
void CrashDummyAudioProcessorEditor::buttonClicked (juce::Button* button)
{
    if (button == &crashButton)
    {
        forceCrash();
    }
}

//==============================================================================
void CrashDummyAudioProcessorEditor::forceCrash()
{
    // Method 1: Null pointer dereference
    int* ptr = nullptr;
    *ptr = 42; // Boom: crash
}
