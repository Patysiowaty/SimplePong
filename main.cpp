#include "Application.h"

//Created by Patryk Kołodziejczyk

int main(int argc, char* argv[]) {
  Application app{"Pong"};

  app.InitializeComponents();
  app.Run();
  app.OnQuit();

  return 0;
}