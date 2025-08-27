#pragma once

#include <vector>
#include <string>
#include <GUI/Button.hpp>
#include <GUI/GUISettings.hpp>
#include <Mods/MovementMods.hpp>
#include <Mods/GunMods.hpp>
#include <Mods/VisualMods.hpp>
#include <Mods/ComputerMods.hpp>
#include <Mods/OPMods.hpp>
#include <GUI/StatsGUI.hpp>
#include <Mods/InfoMods.hpp>

class Buttons {
private:
    inline static void ChangeCat(int i) {
        GUISettings::categoryIndex = i;
        GUISettings::pageIndex = 0;
        GUISettings::cursorIndex = 0;
    }

public:
    inline static std::vector<std::vector<Button>> buttons = {
            {
                Button{ .name = "<color=blue>SPM Discord</color>", .method = []() { ((void (*)(Mono::String*))GetExternMethod("UnityEngine.Application::OpenURL"))(CreateMonoString(BNM_OBFUSCATE("https://discord.gg/invite/ckPHUVCeYC"))); }, .type = "button", .tooltip = "Opens the discord" },
                Button{ .name = "Settings", .method = []() { ChangeCat(1); }, .type = "button", .tooltip = "Opens Settings" },
                Button{ .name = "Info", .method = []() { ChangeCat(6); }, .type = "button", .tooltip = "Opens Info" },
                Button{ .name = "Computer", .method = []() { ChangeCat(5); }, .type = "button", .tooltip = "Opens Computer" },
                Button{ .name = "Movement", .method = []() { ChangeCat(2); }, .type = "button", .tooltip = "Opens Movement" },
                Button{ .name = "Visuals", .method = []() { ChangeCat(3); }, .type = "button", .tooltip = "Opens Visuals" },
                Button{ .name = "OP", .method = []() { ChangeCat(4); }, .type = "button", .tooltip = "Opens Overpowered" }
            },
            {
                Button{ .name = "Back", .method = []() { ChangeCat(0); }, .type = "button", .tooltip = "Return Home" },
                Button{ .name = "Menu Theme", .type = "slider", .maxSlide = 6, .slideNames = std::vector<std::string>{ "default", "rainbow", "ii", "dark", "light", "cool", "warm" }, .tooltip = "Change Menu Theme" },
                Button{ .name = "Speed Mult", .type = "slider", .slide = 2, .maxSlide = 4, .slideNames = std::vector<std::string>{ "slow-", "slow", "mosa", "fast", "fast+" }, .tooltip = "Change Speedboost" },
                Button{ .name = "Long Arm Mult", .type = "slider", .slide = 2, .maxSlide = 4, .slideNames = std::vector<std::string>{ "small-", "small", "big", "big+", "big++" }, .tooltip = "Change Longarms" },
                Button{ .name = "Stats GUI", .enableMethod = []() { StatsGUI::SetEnabled(true); }, .disableMethod = []() { StatsGUI::SetEnabled(false); }, .enabled = true, .type = "toggle", .tooltip = "Toggle Stats GUI" }
            },
            {
                Button{ .name = "Back", .method = []() { ChangeCat(0); }, .type = "button", .tooltip = "Return Home" },
                Button{ .name = "Platforms", .method = MovementMods::Platforms, .tooltip = "Spawn Platforms (G)" },
                Button{ .name = "Noclip", .method = MovementMods::Noclip, .tooltip = "No Colliders (B)" },
                Button{ .name = "Excel Fly", .method = MovementMods::ExcelFly, .tooltip = "Exceleration Fly (Y)(B)" },
                Button{ .name = "Iron Monkey", .method = MovementMods::IronMonke, .tooltip = "Iron Man (X)(A)" },
                Button{ .name = "Speedboost", .method = MovementMods::Speedboost, .disableMethod = MovementMods::DisableSpeedboost, .tooltip = "Change Speed" },
                Button{ .name = "Fast PSA Forward", .method = MovementMods::FastForward, .tooltip = "Fast Play Space Abuse (A)" },
                Button{ .name = "Slow PSA Forward", .method = MovementMods::SlowForward, .tooltip = "Slow Play Space Abuse (A)" },
                Button{ .name = "No Tag Freeze", .method = MovementMods::NoTagFreeze, .tooltip = "Move When Tagged" },
                Button{ .name = "Force Tag Freeze", .method = MovementMods::ForceTagFreeze, .disableMethod = MovementMods::NoTagFreeze, .tooltip = "Always Frozen" },
                Button{ .name = "Long Arms", .method = MovementMods::LongArms, .disableMethod = MovementMods::DisableLongArms, .tooltip = "Be Taller" },
                Button{ .name = "Punch Mod", .method = MovementMods::PunchMod, .tooltip = "People Punch You" },
                Button{ .name = "Teleport Gun", .method = GunMods::TPGun, .tooltip = "Teleport To Point" }
            },
            {
                Button{ .name = "Back", .method = []() { ChangeCat(0); }, .type = "button", .tooltip = "Return Home" },
                Button{ .name = "Chams", .method = VisualMods::Chams, .tooltip = "See Everyone Through Walls" },
                Button{ .name = "Tracers", .method = VisualMods::Tracers, .tooltip = "Lines To Everyone" }
            },
            {
                Button{ .name = "Back", .method = []() { ChangeCat(0); }, .type = "button", .tooltip = "Return Home" },
                Button{ .name = "CosmetX", .method = VisualMods::CosmetX, .type = "button", .tooltip = "Unlock All Cosmetics" },
                Button{ .name = "End Round Spam", .method = OPMods::TagEndSpam, .tooltip = "End Round Sound Spammer (RT)" },
                Button{ .name = "Sound Spam", .method = OPMods::SoundSpam, .tooltip = "Sound Spam (G)" },
                Button{ .name = "Anti Report", .method = OPMods::AntiReport, .tooltip = "Leave Lobby When Reported" },
                Button{ .name = "Anti Moderator", .method = OPMods::AntiModerator, .tooltip = "Leave When Moderator In Lobby" },
                Button{ .name = "Loud Hand Taps", .method = OPMods::LoudHandTaps, .type = "button", .tooltip = "Louder Hand Taps" },
                Button{ .name = "No Hand Taps", .method = OPMods::NoHandTaps, .type = "button", .tooltip = "Silent Hand Taps" },
                Button{ .name = "Fix Hand Taps", .method = OPMods::FixHandTaps, .type = "button", .tooltip = "Fix Hand Tap Volume" },
                Button{ .name = "No Hand Tap Cooldown", .method = OPMods::NoHandTapCooldown, .type = "button", .tooltip = "Spam Hand Taps" },
                Button{ .name = "Fix Hand Tap Cooldown", .method = OPMods::FixHandTapCooldown, .type = "button", .tooltip = "Fix Hand Taps" },
                Button{ .name = "No Tag On Join", .method = OPMods::NoTagOnJoin, .tooltip = "Untagged When Joining Lobbies" },
                //Button{ .name = "Lag Gun", .method = GunMods::LagGun, .tooltip = "Lag Player Gun" },
                //Button{ .name = "Ban Gun (W?)", .method = GunMods::BanGun, .tooltip = "Ban Player Gun" },
            },
            {
                Button{ .name = "Back", .method = []() { ChangeCat(0); }, .type = "button", .tooltip = "Return Home" },
                Button{ .name = "Disconnect", .method = ComputerMods::Disconnect, .type = "button", .tooltip = "Disconnect From Lobby" },
                Button{ .name = "Join SPM", .method = ComputerMods::JoinSPM, .type = "button", .tooltip = "Join SPM Lobby" },
                Button{ .name = "Random Name", .method = ComputerMods::RandomName, .type = "button", .tooltip = "Randomize Name" },
                Button{ .name = "Join Forest Pub", .method = ComputerMods::JoinRandomForest, .type = "button", .tooltip = "Join A Forest" },
                Button{ .name = "Join City Pub", .method = ComputerMods::JoinRandomCity, .type = "button", .tooltip = "Join A City" },
                Button{ .name = "Join Caves Pub", .method = ComputerMods::JoinRandomCaves, .type = "button", .tooltip = "Join A Caves" },
                Button{ .name = "Join Canyons Pub", .method = ComputerMods::JoinRandomCanyons, .type = "button", .tooltip = "Join A Canyons" },
                Button{ .name = "Join Mountains Pub", .method = ComputerMods::JoinRandomMountains, .type = "button", .tooltip = "Join A Mountains" }
            },
            {
                Button{ .name = "Back", .method = []() { ChangeCat(0); }, .type = "button", .tooltip = "Return Home" },
                Button{ .name = "Copy Device Id", .method = InfoMods::CopyDeviceId, .type = "button", .tooltip = "Copy Your Device's ID" },
                Button{ .name = "Copy PlayFab Id", .method = InfoMods::CopyUserId, .type = "button", .tooltip = "Copy Your User ID" },
                Button{ .name = "Copy Title Id", .method = InfoMods::CopyTitleId, .type = "button", .tooltip = "Copy Game TitleID" },
                Button{ .name = "Copy Version", .method = InfoMods::CopyVersion, .type = "button", .tooltip = "Copy Game Version" },
                Button{ .name = "Copy Realtime Id", .method = InfoMods::CopyRealtime, .type = "button", .tooltip = "Copy Game Realtime ID" },
                Button{ .name = "Copy Voice Id", .method = InfoMods::CopyVoice, .type = "button", .tooltip = "Copy Game Voice ID" },
                Button{ .name = "Copy CustomId", .method = InfoMods::CopyCustomId, .type = "button", .tooltip = "Copy Account Custom ID" }
            }
    };
};
