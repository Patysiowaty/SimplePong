#include "Application.h"

//Created by Patryk Ko�odziejczyk

int main(int argc, char* argv[]) {
  Application app{"Pong"};

  app.InitializeComponents();
  app.Run();
  app.OnQuit();

  return 0;
}