//
//  CubismUP_2D
//  Copyright (c) 2018 CSE-Lab, ETH Zurich, Switzerland.
//  Distributed under the terms of the MIT license.
//
//  Created by Guido Novati (novatig@ethz.ch).
//


#pragma once

#include "../Operator.h"

class advDiffGrav : public Operator
{
 public:
  advDiffGrav(SimulationData& s) : Operator(s) { }

  void operator()(const double dt);

  std::string getName()
  {
    return "advDiffGrav";
  }
};
