#pragma once

#include <juce_audio_processors/juce_audio_processors.h>
#include "Params.h"

template <typename Parameter>
class Renameable : public Parameter
{
public:
    template <typename... Args>
    Renameable(Args &&...args) : Parameter(std::forward<Args>(args)...)
    {
        parameterForOsc = -1;
        parameterId = -1;
        automatable = true;
    }

    juce::String getName(int maximumStringLength) const override
    {
        return name.substring(0, maximumStringLength);
    }
    void setParameterForOsciilator(int newParameterForOsc, int newParamaterId)
    {
        parameterForOsc = newParameterForOsc;
        parameterId = newParamaterId;
    }
    bool isAutomatable() const override { return automatable; }
    void setAutomatable(bool Automatable) { automatable = Automatable; }
    void setName(const juce::String &newName)
    {
        name = newName;
    }

    void setNameNotifyingHost(const juce::String &newName, juce::AudioProcessor &p)
    {
        const auto details = AudioProcessorListener::ChangeDetails{}.withParameterInfoChanged(true);

        setName(newName);
        p.updateHostDisplay(details);
    }

    int parameterForOsc;
    int parameterId;

private:
    bool automatable;
    juce::String name;
};
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

    PluginParams *plugParams;
    juce::AudioProcessorValueTreeState *apvts;
    juce::AudioProcessorValueTreeState::ParameterLayout createParameters();

private:
    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(AudioPluginAudioProcessor)
};
