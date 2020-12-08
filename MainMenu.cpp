#include "MainMenu.h"

#include <fstream>
#include <iostream>

Model::MainMenu::MainMenu() {}

void Model::MainMenu::LoadScene() try {
  LoadSurfaces();
  LoadObjects();
} catch (std::exception& e) {
  std::cerr << e.what() << "\n";
}

void Model::MainMenu::UpdateScene() {}

void Model::MainMenu::DestroyScene() {}

void Model::MainMenu::LoadObjects() {}

void Model::MainMenu::LoadSurfaces() {}
