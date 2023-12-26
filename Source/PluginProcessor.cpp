#include "PluginProcessor.h"
#include "PluginEditor.h"

String AudioPluginAudioProcessor::paramID_OSC_0_FP0("O0F0");
String AudioPluginAudioProcessor::paramID_OSC_0_FP1("O0F1");
String AudioPluginAudioProcessor::paramID_OSC_0_FP2("O0F2");
String AudioPluginAudioProcessor::paramID_OSC_0_FP3("O0F3");
String AudioPluginAudioProcessor::paramID_OSC_0_FP4("O0F4");
String AudioPluginAudioProcessor::paramID_OSC_0_FP5("O0F5");
String AudioPluginAudioProcessor::paramID_OSC_0_FP6("O0F6");
String AudioPluginAudioProcessor::paramID_OSC_0_FP7("O0F7");
String AudioPluginAudioProcessor::paramID_OSC_0_FP8("O0F8");
String AudioPluginAudioProcessor::paramID_OSC_0_FP9("O0F9");
String AudioPluginAudioProcessor::paramID_OSC_1_FP0("O1F0");
String AudioPluginAudioProcessor::paramID_OSC_1_FP1("O1F1");
String AudioPluginAudioProcessor::paramID_OSC_1_FP2("O1F2");
String AudioPluginAudioProcessor::paramID_OSC_1_FP3("O1F3");
String AudioPluginAudioProcessor::paramID_OSC_1_FP4("O1F4");
String AudioPluginAudioProcessor::paramID_OSC_1_FP5("O1F5");
String AudioPluginAudioProcessor::paramID_OSC_1_FP6("O1F6");
String AudioPluginAudioProcessor::paramID_OSC_1_FP7("O1F7");
String AudioPluginAudioProcessor::paramID_OSC_1_FP8("O1F8");
String AudioPluginAudioProcessor::paramID_OSC_1_FP9("O1F9");
String AudioPluginAudioProcessor::paramID_OSC_2_FP0("O2F0");
String AudioPluginAudioProcessor::paramID_OSC_2_FP1("O2F1");
String AudioPluginAudioProcessor::paramID_OSC_2_FP2("O2F2");
String AudioPluginAudioProcessor::paramID_OSC_2_FP3("O2F3");
String AudioPluginAudioProcessor::paramID_OSC_2_FP4("O2F4");
String AudioPluginAudioProcessor::paramID_OSC_2_FP5("O2F5");
String AudioPluginAudioProcessor::paramID_OSC_2_FP6("O2F6");
String AudioPluginAudioProcessor::paramID_OSC_2_FP7("O2F7");
String AudioPluginAudioProcessor::paramID_OSC_2_FP8("O2F8");
String AudioPluginAudioProcessor::paramID_OSC_2_FP9("O2F9");
String AudioPluginAudioProcessor::paramID_OSC_3_FP0("O3F0");
String AudioPluginAudioProcessor::paramID_OSC_3_FP1("O3F1");
String AudioPluginAudioProcessor::paramID_OSC_3_FP2("O3F2");
String AudioPluginAudioProcessor::paramID_OSC_3_FP3("O3F3");
String AudioPluginAudioProcessor::paramID_OSC_3_FP4("O3F4");
String AudioPluginAudioProcessor::paramID_OSC_3_FP5("O3F5");
String AudioPluginAudioProcessor::paramID_OSC_3_FP6("O3F6");
String AudioPluginAudioProcessor::paramID_OSC_3_FP7("O3F7");
String AudioPluginAudioProcessor::paramID_OSC_3_FP8("O3F8");
String AudioPluginAudioProcessor::paramID_OSC_3_FP9("O3F9");
String AudioPluginAudioProcessor::paramID_OSC_4_FP0("O4F0");
String AudioPluginAudioProcessor::paramID_OSC_4_FP1("O4F1");
String AudioPluginAudioProcessor::paramID_OSC_4_FP2("O4F2");
String AudioPluginAudioProcessor::paramID_OSC_4_FP3("O4F3");
String AudioPluginAudioProcessor::paramID_OSC_4_FP4("O4F4");
String AudioPluginAudioProcessor::paramID_OSC_4_FP5("O4F5");
String AudioPluginAudioProcessor::paramID_OSC_4_FP6("O4F6");
String AudioPluginAudioProcessor::paramID_OSC_4_FP7("O4F7");
String AudioPluginAudioProcessor::paramID_OSC_4_FP8("O4F8");
String AudioPluginAudioProcessor::paramID_OSC_4_FP9("O4F9");
String AudioPluginAudioProcessor::paramID_OSC_5_FP0("O5F0");
String AudioPluginAudioProcessor::paramID_OSC_5_FP1("O5F1");
String AudioPluginAudioProcessor::paramID_OSC_5_FP2("O5F2");
String AudioPluginAudioProcessor::paramID_OSC_5_FP3("O5F3");
String AudioPluginAudioProcessor::paramID_OSC_5_FP4("O5F4");
String AudioPluginAudioProcessor::paramID_OSC_5_FP5("O5F5");
String AudioPluginAudioProcessor::paramID_OSC_5_FP6("O5F6");
String AudioPluginAudioProcessor::paramID_OSC_5_FP7("O5F7");
String AudioPluginAudioProcessor::paramID_OSC_5_FP8("O5F8");
String AudioPluginAudioProcessor::paramID_OSC_5_FP9("O5F9");

//==============================================================================
AudioPluginAudioProcessor::AudioPluginAudioProcessor()
    : AudioProcessor(BusesProperties()
#if !JucePlugin_IsMidiEffect
#if !JucePlugin_IsSynth
                         .withInput("Input", juce::AudioChannelSet::stereo(), true)
#endif
                         .withOutput("Output", juce::AudioChannelSet::stereo(), true)
#endif
      )
{
    apvts = new AudioProcessorValueTreeState(*this, nullptr, "Parameters", createParameters());
}

AudioPluginAudioProcessor::~AudioPluginAudioProcessor()
{
}

//==============================================================================
const juce::String AudioPluginAudioProcessor::getName() const
{
    return JucePlugin_Name;
}

bool AudioPluginAudioProcessor::acceptsMidi() const
{
#if JucePlugin_WantsMidiInput
    return true;
#else
    return false;
#endif
}

bool AudioPluginAudioProcessor::producesMidi() const
{
#if JucePlugin_ProducesMidiOutput
    return true;
#else
    return false;
#endif
}

bool AudioPluginAudioProcessor::isMidiEffect() const
{
#if JucePlugin_IsMidiEffect
    return true;
#else
    return false;
#endif
}

double AudioPluginAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

void AudioPluginAudioProcessor::parameterChanged(const String &parameterID, float newValue)
{
}

int AudioPluginAudioProcessor::getNumPrograms()
{
    return 1; // NB: some hosts don't cope very well if you tell them there are 0 programs,
              // so this should be at least 1, even if you're not really implementing programs.
}

int AudioPluginAudioProcessor::getCurrentProgram()
{
    return 0;
}

void AudioPluginAudioProcessor::setCurrentProgram(int index)
{
    juce::ignoreUnused(index);
}

const juce::String AudioPluginAudioProcessor::getProgramName(int index)
{
    juce::ignoreUnused(index);
    return {};
}

void AudioPluginAudioProcessor::changeProgramName(int index, const juce::String &newName)
{
    juce::ignoreUnused(index, newName);
}

//==============================================================================
void AudioPluginAudioProcessor::prepareToPlay(double sampleRate, int samplesPerBlock)
{
    // Use this method as the place to do any pre-playback
    // initialisation that you need..
    juce::ignoreUnused(sampleRate, samplesPerBlock);
}

void AudioPluginAudioProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

bool AudioPluginAudioProcessor::isBusesLayoutSupported(const BusesLayout &layouts) const
{
#if JucePlugin_IsMidiEffect
    juce::ignoreUnused(layouts);
    return true;
#else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    // Some plugin hosts, such as certain GarageBand versions, will only
    // load plugins that support stereo bus layouts.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono() && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

        // This checks if the input layout matches the output layout
#if !JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
#endif

    return true;
#endif
}

void AudioPluginAudioProcessor::processBlock(juce::AudioBuffer<float> &buffer,
                                             juce::MidiBuffer &midiMessages)
{
    juce::ignoreUnused(midiMessages);

    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    // In case we have more outputs than inputs, this code clears any output
    // channels that didn't contain input data, (because these aren't
    // guaranteed to be empty - they may contain garbage).
    // This is here to avoid people getting screaming feedback
    // when they first compile a plugin, but obviously you don't need to keep
    // this code if your algorithm always overwrites all the output channels.
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear(i, 0, buffer.getNumSamples());

    // This is the place where you'd normally do the guts of your plugin's
    // audio processing...
    // Make sure to reset the state if your inner loop is processing
    // the samples and the outer loop is handling the channels.
    // Alternatively, you can process the samples with the channels
    // interleaved by keeping the same state.
    for (int channel = 0; channel < totalNumInputChannels; ++channel)
    {
        auto *channelData = buffer.getWritePointer(channel);
        juce::ignoreUnused(channelData);
        // ..do something to the data...
    }
}

//==============================================================================
bool AudioPluginAudioProcessor::hasEditor() const
{
    return true; // (change this to false if you choose to not supply an editor)
}

juce::AudioProcessorEditor *AudioPluginAudioProcessor::createEditor()
{
    return new AudioPluginAudioProcessorEditor(*this);
}

//==============================================================================
void AudioPluginAudioProcessor::getStateInformation(juce::MemoryBlock &destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
    juce::ignoreUnused(destData);
}

void AudioPluginAudioProcessor::setStateInformation(const void *data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
    juce::ignoreUnused(data, sizeInBytes);
}

//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor *JUCE_CALLTYPE createPluginFilter()
{
    return new AudioPluginAudioProcessor();
}

juce::AudioProcessorValueTreeState::ParameterLayout AudioPluginAudioProcessor::createParameters()
{
    std::vector<std::unique_ptr<juce::RangedAudioParameter>> params;

    std::unique_ptr<AudioParameterFloat> p;
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP0, paramID_OSC_0_FP0, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP1, paramID_OSC_0_FP1, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP2, paramID_OSC_0_FP2, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP3, paramID_OSC_0_FP3, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP4, paramID_OSC_0_FP4, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP5, paramID_OSC_0_FP5, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP6, paramID_OSC_0_FP6, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP7, paramID_OSC_0_FP7, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP8, paramID_OSC_0_FP8, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_0_FP9, paramID_OSC_0_FP9, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));

    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP0, paramID_OSC_1_FP0, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP1, paramID_OSC_1_FP1, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP2, paramID_OSC_1_FP2, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP3, paramID_OSC_1_FP3, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP4, paramID_OSC_1_FP4, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP5, paramID_OSC_1_FP5, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP6, paramID_OSC_1_FP6, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP7, paramID_OSC_1_FP7, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP8, paramID_OSC_1_FP8, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_1_FP9, paramID_OSC_1_FP9, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));

    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP0, paramID_OSC_2_FP0, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP1, paramID_OSC_2_FP1, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP2, paramID_OSC_2_FP2, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP3, paramID_OSC_2_FP3, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP4, paramID_OSC_2_FP4, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP5, paramID_OSC_2_FP5, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP6, paramID_OSC_2_FP6, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP7, paramID_OSC_2_FP7, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP8, paramID_OSC_2_FP8, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_2_FP9, paramID_OSC_2_FP9, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));

    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP0, paramID_OSC_3_FP0, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP1, paramID_OSC_3_FP1, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP2, paramID_OSC_3_FP2, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP3, paramID_OSC_3_FP3, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP4, paramID_OSC_3_FP4, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP5, paramID_OSC_3_FP5, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP6, paramID_OSC_3_FP6, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP7, paramID_OSC_3_FP7, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP8, paramID_OSC_3_FP8, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_3_FP9, paramID_OSC_3_FP9, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));

    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP0, paramID_OSC_4_FP0, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP1, paramID_OSC_4_FP1, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP2, paramID_OSC_4_FP2, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP3, paramID_OSC_4_FP3, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP4, paramID_OSC_4_FP4, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP5, paramID_OSC_4_FP5, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP6, paramID_OSC_4_FP6, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP7, paramID_OSC_4_FP7, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP8, paramID_OSC_4_FP8, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_4_FP9, paramID_OSC_4_FP9, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));

    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP0, paramID_OSC_5_FP0, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP1, paramID_OSC_5_FP1, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP2, paramID_OSC_5_FP2, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP3, paramID_OSC_5_FP3, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP4, paramID_OSC_5_FP4, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP5, paramID_OSC_5_FP5, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP6, paramID_OSC_5_FP6, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP7, paramID_OSC_5_FP7, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP8, paramID_OSC_5_FP8, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));
    p = std::make_unique<AudioParameterFloat>(paramID_OSC_5_FP9, paramID_OSC_5_FP9, 0.0f, 1.0f, 0.5f);
    params.push_back(std::move(p));

    params.push_back(std::move(p));

    return {params.begin(), params.end()};
}