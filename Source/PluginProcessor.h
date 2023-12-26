#pragma once

#include <juce_audio_processors/juce_audio_processors.h>
#include <JuceHeader.h>
//==============================================================================
class AudioPluginAudioProcessor : public juce::AudioProcessor, public AudioProcessorValueTreeState::Listener
{
public:
    //==============================================================================
    AudioPluginAudioProcessor();
    ~AudioPluginAudioProcessor() override;

    //==============================================================================
    void prepareToPlay(double sampleRate, int samplesPerBlock) override;
    void releaseResources() override;

    bool isBusesLayoutSupported(const BusesLayout &layouts) const override;

    void processBlock(juce::AudioBuffer<float> &, juce::MidiBuffer &) override;
    using AudioProcessor::processBlock;

    //==============================================================================
    juce::AudioProcessorEditor *createEditor() override;
    bool hasEditor() const override;

    //==============================================================================
    const juce::String getName() const override;

    bool acceptsMidi() const override;
    bool producesMidi() const override;
    bool isMidiEffect() const override;
    double getTailLengthSeconds() const override;
    void parameterChanged(const String &parameterID, float newValue) override;
    //==============================================================================
    int getNumPrograms() override;
    int getCurrentProgram() override;
    void setCurrentProgram(int index) override;
    const juce::String getProgramName(int index) override;
    void changeProgramName(int index, const juce::String &newName) override;

    //==============================================================================
    void getStateInformation(juce::MemoryBlock &destData) override;
    void setStateInformation(const void *data, int sizeInBytes) override;

    juce::AudioProcessorValueTreeState *apvts;
    juce::AudioProcessorValueTreeState::ParameterLayout createParameters();

private:
    static String paramID_OSC_0_FP0;
    static String paramID_OSC_0_FP1;
    static String paramID_OSC_0_FP2;
    static String paramID_OSC_0_FP3;
    static String paramID_OSC_0_FP4;
    static String paramID_OSC_0_FP5;
    static String paramID_OSC_0_FP6;
    static String paramID_OSC_0_FP7;
    static String paramID_OSC_0_FP8;
    static String paramID_OSC_0_FP9;

    static String paramID_OSC_1_FP0;
    static String paramID_OSC_1_FP1;
    static String paramID_OSC_1_FP2;
    static String paramID_OSC_1_FP3;
    static String paramID_OSC_1_FP4;
    static String paramID_OSC_1_FP5;
    static String paramID_OSC_1_FP6;
    static String paramID_OSC_1_FP7;
    static String paramID_OSC_1_FP8;
    static String paramID_OSC_1_FP9;

    static String paramID_OSC_2_FP0;
    static String paramID_OSC_2_FP1;
    static String paramID_OSC_2_FP2;
    static String paramID_OSC_2_FP3;
    static String paramID_OSC_2_FP4;
    static String paramID_OSC_2_FP5;
    static String paramID_OSC_2_FP6;
    static String paramID_OSC_2_FP7;
    static String paramID_OSC_2_FP8;
    static String paramID_OSC_2_FP9;

    static String paramID_OSC_3_FP0;
    static String paramID_OSC_3_FP1;
    static String paramID_OSC_3_FP2;
    static String paramID_OSC_3_FP3;
    static String paramID_OSC_3_FP4;
    static String paramID_OSC_3_FP5;
    static String paramID_OSC_3_FP6;
    static String paramID_OSC_3_FP7;
    static String paramID_OSC_3_FP8;
    static String paramID_OSC_3_FP9;

    static String paramID_OSC_4_FP0;
    static String paramID_OSC_4_FP1;
    static String paramID_OSC_4_FP2;
    static String paramID_OSC_4_FP3;
    static String paramID_OSC_4_FP4;
    static String paramID_OSC_4_FP5;
    static String paramID_OSC_4_FP6;
    static String paramID_OSC_4_FP7;
    static String paramID_OSC_4_FP8;
    static String paramID_OSC_4_FP9;

    static String paramID_OSC_5_FP0;
    static String paramID_OSC_5_FP1;
    static String paramID_OSC_5_FP2;
    static String paramID_OSC_5_FP3;
    static String paramID_OSC_5_FP4;
    static String paramID_OSC_5_FP5;
    static String paramID_OSC_5_FP6;
    static String paramID_OSC_5_FP7;
    static String paramID_OSC_5_FP8;
    static String paramID_OSC_5_FP9;

    static String paramID_OSC_0_TYPE;
    static String paramID_OSC_1_TYPE;
    static String paramID_OSC_2_TYPE;
    static String paramID_OSC_3_TYPE;
    static String paramID_OSC_4_TYPE;
    static String paramID_OSC_5_TYPE;

    static String paramID_OSC_0_INT0;
    static String paramID_OSC_0_INT1;
    static String paramID_OSC_0_INT2;
    static String paramID_OSC_0_INT3;
    static String paramID_OSC_0_INT4;

    static String paramID_OSC_1_INT0;
    static String paramID_OSC_1_INT1;
    static String paramID_OSC_1_INT2;
    static String paramID_OSC_1_INT3;
    static String paramID_OSC_1_INT4;

    static String paramID_OSC_2_INT0;
    static String paramID_OSC_2_INT1;
    static String paramID_OSC_2_INT2;
    static String paramID_OSC_2_INT3;
    static String paramID_OSC_2_INT4;

    static String paramID_OSC_3_INT0;
    static String paramID_OSC_3_INT1;
    static String paramID_OSC_3_INT2;
    static String paramID_OSC_3_INT3;
    static String paramID_OSC_3_INT4;

    static String paramID_OSC_4_INT0;
    static String paramID_OSC_4_INT1;
    static String paramID_OSC_4_INT2;
    static String paramID_OSC_4_INT3;
    static String paramID_OSC_4_INT4;

    static String paramID_OSC_5_INT0;
    static String paramID_OSC_5_INT1;
    static String paramID_OSC_5_INT2;
    static String paramID_OSC_5_INT3;
    static String paramID_OSC_5_INT4;
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioPluginAudioProcessor)
};
