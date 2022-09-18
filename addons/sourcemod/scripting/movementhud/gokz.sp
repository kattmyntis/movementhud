
public void MHud_OnPreferenceValueSet(int client, char id[MHUD_MAX_ID], char value[MHUD_MAX_VALUE])
{
    if (StrEqual(id, "keys_mode"))
    {
        MHudEnumPreference preference = MHudEnumPreference.Find(id);

        int mode = preference.GetInt(client);
        if (mode != KeysMode_None)
        {
            GOKZ_SetOption(client, gC_HUDOptionNames[HUDOption_ShowKeys], ShowKeys_Disabled);
            PotentiallyDisableInfoPanel(client);
        }
    }

    if (StrEqual(id, "speed_mode"))
    {
        MHudEnumPreference preference = MHudEnumPreference.Find(id);

        int mode = preference.GetInt(client);
        if (mode != SpeedMode_None)
        {
            GOKZ_SetOption(client, gC_HUDOptionNames[HUDOption_SpeedText], SpeedText_Disabled);
            PotentiallyDisableInfoPanel(client);
        }
    }
}

static void PotentiallyDisableInfoPanel(int client)
{
    MHudEnumPreference keysMode = MHudEnumPreference.Find("keys_mode");
    MHudEnumPreference speedMode = MHudEnumPreference.Find("speed_mode");

    int keysModeVal = keysMode.GetInt(client);
    int speedModeVal = speedMode.GetInt(client);

    if (keysModeVal != KeysMode_None && speedModeVal != SpeedMode_None)
    {
        GOKZ_SetOption(client, gC_HUDOptionNames[HUDOption_TimerText], TimerText_TPMenu);
        GOKZ_SetOption(client, gC_HUDOptionNames[HUDOption_InfoPanel], InfoPanel_Disabled);
    }
}