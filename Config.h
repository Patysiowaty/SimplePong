#pragma once
#include <SDL.h>
#include <SDL_ttf.h>

#include <string>

namespace Config {
// Names
constexpr auto kGameName = "Pong";

// Icons path
constexpr auto kPlayerIconPath = "Assets/Player.png";
constexpr auto kEnemyIconPath = "Assets/Enemy.png";
constexpr auto kBallIconPath = "Assets/Ball.png";
constexpr auto kWindowIconPath = "Assets/icon.png";

// Sizes
constexpr auto kMainWindowSizeNone =
    SDL_Rect{SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 0, 0};
constexpr auto kMainWindow1280x720 =
    SDL_Rect{SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720};
constexpr auto kMainWindow1366x768 =
    SDL_Rect{SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1366, 768};
constexpr auto kMainWindow1600x900 =
    SDL_Rect{SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1600, 900};
constexpr auto kMainWindow1920x1080 =
    SDL_Rect{SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1920, 1080};

constexpr auto kPlayerIconSize = SDL_FRect{0, 0, 50, 150};
constexpr auto kEnemyIconSize = SDL_FRect{0, 0, 50, 150};
constexpr auto kBallIconSize = SDL_FRect{0, 0, 50, 50};

// Positions
constexpr auto kPlayerStartPos = SDL_FPoint{10.f, 720.f / 2.f};
constexpr auto kEnemyStartPos = SDL_FPoint{1280.f - 40.f, 720 / 2.f};
constexpr auto kBallStartPos = SDL_FPoint{2.f, 720 / 2.f};

// Time
constexpr int kFramePerSeconds = {60};
constexpr double kSecondsMultiplier = {1000.0};
constexpr double kFrameRate = {1.f / kFramePerSeconds};

}  // namespace Config