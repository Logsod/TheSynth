#ifndef _Params_H_
#define _Params_H_

#include <JuceHeader.h>


class PluginParams {
public:
    PluginParams();
    ~PluginParams();
    String paramID_OSC_0_FP0;
    String paramID_OSC_0_FP1;
    String paramID_OSC_0_FP2;
    String paramID_OSC_0_FP3;
    String paramID_OSC_0_FP4;
    String paramID_OSC_0_FP5;
    String paramID_OSC_0_FP6;
    String paramID_OSC_0_FP7;
    String paramID_OSC_0_FP8;
    String paramID_OSC_0_FP9;


    String paramID_OSC_1_FP0;
    String paramID_OSC_1_FP1;
    String paramID_OSC_1_FP2;
    String paramID_OSC_1_FP3;
    String paramID_OSC_1_FP4;
    String paramID_OSC_1_FP5;
    String paramID_OSC_1_FP6;
    String paramID_OSC_1_FP7;
    String paramID_OSC_1_FP8;
    String paramID_OSC_1_FP9;

    String paramID_OSC_2_FP0;
    String paramID_OSC_2_FP1;
    String paramID_OSC_2_FP2;
    String paramID_OSC_2_FP3;
    String paramID_OSC_2_FP4;
    String paramID_OSC_2_FP5;
    String paramID_OSC_2_FP6;
    String paramID_OSC_2_FP7;
    String paramID_OSC_2_FP8;
    String paramID_OSC_2_FP9;

    String paramID_OSC_3_FP0;
    String paramID_OSC_3_FP1;
    String paramID_OSC_3_FP2;
    String paramID_OSC_3_FP3;
    String paramID_OSC_3_FP4;
    String paramID_OSC_3_FP5;
    String paramID_OSC_3_FP6;
    String paramID_OSC_3_FP7;
    String paramID_OSC_3_FP8;
    String paramID_OSC_3_FP9;

    String paramID_OSC_4_FP0;
    String paramID_OSC_4_FP1;
    String paramID_OSC_4_FP2;
    String paramID_OSC_4_FP3;
    String paramID_OSC_4_FP4;
    String paramID_OSC_4_FP5;
    String paramID_OSC_4_FP6;
    String paramID_OSC_4_FP7;
    String paramID_OSC_4_FP8;
    String paramID_OSC_4_FP9;

    String paramID_OSC_5_FP0;
    String paramID_OSC_5_FP1;
    String paramID_OSC_5_FP2;
    String paramID_OSC_5_FP3;
    String paramID_OSC_5_FP4;
    String paramID_OSC_5_FP5;
    String paramID_OSC_5_FP6;
    String paramID_OSC_5_FP7;
    String paramID_OSC_5_FP8;
    String paramID_OSC_5_FP9;

    String paramID_OSC_0_TYPE;
    String paramID_OSC_1_TYPE;
    String paramID_OSC_2_TYPE;
    String paramID_OSC_3_TYPE;
    String paramID_OSC_4_TYPE;
    String paramID_OSC_5_TYPE;

    String paramID_OSC_0_INT0;
    String paramID_OSC_0_INT1;
    String paramID_OSC_0_INT2;
    String paramID_OSC_0_INT3;
    String paramID_OSC_0_INT4;

    String paramID_OSC_1_INT0;
    String paramID_OSC_1_INT1;
    String paramID_OSC_1_INT2;
    String paramID_OSC_1_INT3;
    String paramID_OSC_1_INT4;

    String paramID_OSC_2_INT0;
    String paramID_OSC_2_INT1;
    String paramID_OSC_2_INT2;
    String paramID_OSC_2_INT3;
    String paramID_OSC_2_INT4;

    String paramID_OSC_3_INT0;
    String paramID_OSC_3_INT1;
    String paramID_OSC_3_INT2;
    String paramID_OSC_3_INT3;
    String paramID_OSC_3_INT4;

    String paramID_OSC_4_INT0;
    String paramID_OSC_4_INT1;
    String paramID_OSC_4_INT2;
    String paramID_OSC_4_INT3;
    String paramID_OSC_4_INT4;

    String paramID_OSC_5_INT0;
    String paramID_OSC_5_INT1;
    String paramID_OSC_5_INT2;
    String paramID_OSC_5_INT3;
    String paramID_OSC_5_INT4;



    enum chooseNames
    {
        OSC_0_TYPE,
        OSC_1_TYPE,
        OSC_2_TYPE,
        OSC_3_TYPE,
        OSC_4_TYPE,
        OSC_5_TYPE,
    };
    struct sliderParam
    {
        String paramId;
        bool addListener;
        int parameterForOsc;
        int parameterId;
        StringArray dropStrings;
    };
    struct chooseParam
    {
        String paramId;
        String paramTitle;
        StringArray list;
        bool addListener;
        int parameterForOsc;
        int parameterId;
    };

    // struct for OSCILLATOR param id
    std::vector<sliderParam> sliderVector ;
    std::vector<sliderParam> chooseParamsMap;

    struct controlParam
    {
        String paramId;
        String dawTitle;
        StringArray dropStrings;
    };

    ////////////////////////////
    enum OSCTYPES
    {
        OSCTYPE_A,
        OSCTYPE_B,
    };
    controlParam OscSliderParams[2][10]{
        {
            {"SEMI", "semi"},
            {"TUNE", "tune"},
            {"GAIN", "gain"},
            {"PAN", "pan"},
            {"DETUNE", "detune"},
            {"MIX", "mix"},
            {"SPREAD", "spread"},
            {"d8", "8"},
            {"d9", "9"},
            {"d10", "10"},
        },
        {
            {"SEMI", "semi"},
            {"TUNE", "semi"},
            {"GAIN", "semi"},
            {"PAN", "semi"},
            {"SPREAD", "SPREAD"},
            {"d6", "6"},
            {"d7", "7"},
            {"d8", "8"},
            {"d9", "9"},
            {"d10", "10"},
        },
    };

   const juce::StringArray oscSlidersIndex[2] = {
        StringArray({"SEMI", "TUNE", "GAIN", "PAN", "DETUNE", "MIX", "SPREAD"}),
        StringArray({"SEMI", "TUNE", "GAIN", "PAN", "SPREAD"}),
    };

   const  juce::StringArray oscDropIndex[6] = {
        StringArray({"TYPE", "POWER", "UNISON", "GENERATOR"}),
        StringArray({"TYPE", "POWER", "UNISON", "GENERATOR"}),
        StringArray({"TYPE", "POWER", "UNISON", "GENERATOR"}),
        StringArray({"TYPE", "POWER", "UNISON", "GENERATOR"}),
        StringArray({"TYPE", "POWER", "UNISON", "GENERATOR"}),
        StringArray({"TYPE", "POWER", "UNISON", "GENERATOR"}),
    };


    controlParam OscDropParams[2][10]{
        {
            {"TYPE", "osc type", {"a", "b"}},
            {"POWER", "power", {"0", "1"}},
            {"UNISOSN", "Unison", {"0", "1"}},
            {"GENERATOR", "Generator", {"0", "1"}},
            {"D1", "d1", {"0", "1"}},
            {"D2", "d2", {"0", "1"}},
            {"D3", "d3", {"0", "1"}},
        },
        {
            {"TYPE", "osc type", {"a", "b"}},
            {"POWER", "power", {"0", "1"}},
            {"UNISOSN", "Unison", {"0", "1"}},
            {"GENERATOR", "Generator", {"0", "1"}},
            {"D1", "d1", {"0", "1"}},
            {"D2", "d2", {"0", "1"}},
            {"D3", "d3", {"0", "1"}},
        },
    };
    String dropStringMap[6][6] = {
        {
            paramID_OSC_0_INT0,
            paramID_OSC_0_INT1,
            paramID_OSC_0_INT2,
            paramID_OSC_0_INT3,
            paramID_OSC_0_INT4,
        },
        {
            paramID_OSC_1_INT0,
            paramID_OSC_1_INT1,
            paramID_OSC_1_INT2,
            paramID_OSC_1_INT3,
            paramID_OSC_1_INT4,
        },
        {
            paramID_OSC_2_INT0,
            paramID_OSC_2_INT1,
            paramID_OSC_2_INT2,
            paramID_OSC_2_INT3,
            paramID_OSC_2_INT4,
        },
        {
            paramID_OSC_3_INT0,
            paramID_OSC_3_INT1,
            paramID_OSC_3_INT2,
            paramID_OSC_3_INT3,
            paramID_OSC_3_INT4,
        },
        {
            paramID_OSC_4_INT0,
            paramID_OSC_4_INT1,
            paramID_OSC_4_INT2,
            paramID_OSC_4_INT3,
            paramID_OSC_4_INT4,
        },
        {
            paramID_OSC_5_INT0,
            paramID_OSC_5_INT1,
            paramID_OSC_5_INT2,
            paramID_OSC_5_INT3,
            paramID_OSC_5_INT4,
        },
    };
    String sliderStringMap[6][10] = {
        {
            paramID_OSC_0_FP0,
            paramID_OSC_0_FP1,
            paramID_OSC_0_FP2,
            paramID_OSC_0_FP3,
            paramID_OSC_0_FP4,
            paramID_OSC_0_FP5,
            paramID_OSC_0_FP6,
            paramID_OSC_0_FP7,
            paramID_OSC_0_FP8,
            paramID_OSC_0_FP9,
        },
        {
            paramID_OSC_1_FP0,
            paramID_OSC_1_FP1,
            paramID_OSC_1_FP2,
            paramID_OSC_1_FP3,
            paramID_OSC_1_FP4,
            paramID_OSC_1_FP5,
            paramID_OSC_1_FP6,
            paramID_OSC_1_FP7,
            paramID_OSC_1_FP8,
            paramID_OSC_1_FP9,
        },
        {
            paramID_OSC_2_FP0,
            paramID_OSC_2_FP1,
            paramID_OSC_2_FP2,
            paramID_OSC_2_FP3,
            paramID_OSC_2_FP4,
            paramID_OSC_2_FP5,
            paramID_OSC_2_FP6,
            paramID_OSC_2_FP7,
            paramID_OSC_2_FP8,
            paramID_OSC_2_FP9,
        },
        {
            paramID_OSC_3_FP0,
            paramID_OSC_3_FP1,
            paramID_OSC_3_FP2,
            paramID_OSC_3_FP3,
            paramID_OSC_3_FP4,
            paramID_OSC_3_FP5,
            paramID_OSC_3_FP6,
            paramID_OSC_3_FP7,
            paramID_OSC_3_FP8,
            paramID_OSC_3_FP9,
        },
        {
            paramID_OSC_4_FP0,
            paramID_OSC_4_FP1,
            paramID_OSC_4_FP2,
            paramID_OSC_4_FP3,
            paramID_OSC_4_FP4,
            paramID_OSC_4_FP5,
            paramID_OSC_4_FP6,
            paramID_OSC_4_FP7,
            paramID_OSC_4_FP8,
            paramID_OSC_4_FP9,
        },
        {
            paramID_OSC_5_FP0,
            paramID_OSC_5_FP1,
            paramID_OSC_5_FP2,
            paramID_OSC_5_FP3,
            paramID_OSC_5_FP4,
            paramID_OSC_5_FP5,
            paramID_OSC_5_FP6,
            paramID_OSC_5_FP7,
            paramID_OSC_5_FP8,
            paramID_OSC_5_FP9,
        },
    };
};
namespace Params
{
    // sliders
    

    

    

    

    

    

    

}
#define DROPX 6
#define DROPY 10
class PluginIntParameters
{
public:
    PluginIntParameters() : OSC_0_TYPE(0) {}

    Atomic<int> OSC_0_TYPE;
    void setParameterValue(int newValue)
    {
        std::cout << newValue;
    }
    juce::Atomic<int> oscDropValues[6][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };
};
#endif