//This file holds the 2 dimensional location of a particular object.
//// ----------------------------------------------------------------------*80*1
#include <iostream>
#include "common.h"
#include "Location.h"
using namespace std;

boolean isLocationValid(int boardLength,pieceLocation location) {
  if((location.getXValue() >= 0 && location.getXValue() < boardLength) &&
    (location.getYValue() >= 0 && location.getYValue() < boardLength)) {
      return TRUE;
    } else {
      return FALSE;
    }
}

boolean areLocationsSame(pieceLocation a, pieceLocation b){
  if (a.getXValue() == b.getXValue() && a.getYValue() == b.getYValue() ) return TRUE;
  return FALSE;
}