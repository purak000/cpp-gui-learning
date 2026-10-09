#!/bin/bash

g++ app.cpp MainFrame.cpp $(wx-config --cxxflags --libs) -o app

if [ $? -eq 0 ]; then
  echo "Build successful."
  ./app
else
  echo "Build failed."
fi
