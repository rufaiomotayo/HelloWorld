#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (juce::Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));

graphics-update
    g.setFont (juce::Font (32.0f));
    g.setColour (juce::Colours::green);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centeredLeft, true);

    g.setFont (juce::Font (16.0f));
    g.setColour (juce::Colours::red);
    g.drawText ("Hello World!", getLocalBounds(), juce::Justification::centerd, true);
main
}

void MainComponent::resized()
{
    // This is called when the MainComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
}
