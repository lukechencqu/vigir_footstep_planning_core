#include <vigir_footstep_planner/customvalidstatesampler.h>

namespace vigir_footstep_planning
{
ompl::RNG rng_;

//customValidStateSampler::customValidStateSampler(const ompl::base::ProblemDefinitionPtr &probDefn, const GetCurrentCostFunc &costFunc, const ompl::base::InformedSamplerPtr &infSampler) : ompl::base::InformedStateSampler(&probDefn, &costFunc, &infSampler)
//{
//}
//customValidStateSampler::customValidStateSampler(const ompl::base::ProblemDefinitionPtr &probDefn, unsigned int maxNumberCalls, const GetCurrentCostFunc &costFunc) : ompl::base::InformedStateSampler(&probDefn, maxNumberCalls, &costFunc)
//{
//}

//void customValidStateSampler::sampleUniform(ompl::base::State *statePtr)
//{
////  auto footLeftSpace(std::make_shared<ompl::base::SE3StateSpace>());
////  auto footRightSpace(std::make_shared<ompl::base::SE3StateSpace>());

////  ompl::base::RealVectorBounds bounds(3);
////  bounds.setLow(-100);
////  bounds.setHigh(100);
////  bounds.check();
////  footLeftSpace->setBounds(bounds);
////  footRightSpace->setBounds(bounds);

////  ompl::base::StateSpacePtr space = footLeftSpace + footRightSpace;
////  ompl::base::ScopedState<> current(space);
////  current = state;
////  ompl::base::ScopedState<ompl::base::SE3StateSpace> currentFootLeft(space->as<ompl::base::SE3StateSpace>()->getSubspace(0));
////  ompl::base::ScopedState<ompl::base::SE3StateSpace> currentFootRight(space->as<ompl::base::SE3StateSpace>()->getSubspace(1));
////  current >> currentFootLeft;
////  current >> currentFootRight;
//////  double max_distance = 10.0;
//////  double left_distance = currentFootLeft.distance(nextFootLeft);
//////  double right_distance = currentFootRight.distance(nextFootRight);
//////  ROS_INFO("left_distance = %f", left_distance);
//////  ROS_INFO("right_distance = %f", right_distance);

//////  current.print(std::cout);

//////  double* val = static_cast<ob::RealVectorStateSpace::StateType*>(state)->values;
////  double x,y,z;
////  switch(rng_.uniformInt(0,1))
////  {
////  case 0://move left foot
////    x = currentFootLeft->getX();
////    y = currentFootLeft->getY();
////    z = currentFootLeft->getZ();
////    currentFootLeft->setX(x + rng_.uniformReal(-1.0,1.0));
////    currentFootLeft->setY(y + rng_.uniformReal(-1.0,1.0));
//////    currentFootLeft->setZ(z + rng_.uniformReal(-1.0,1.0));

////    break;
////  case 1://move right foot
////    x = currentFootRight->getX();
////    y = currentFootRight->getY();
////    z = currentFootRight->getZ();
////    currentFootRight->setX(x + rng_.uniformReal(-1.0,1.0));
////    currentFootRight->setY(y + rng_.uniformReal(-1.0,1.0));
//////    currentFootRight->setZ(z + rng_.uniformReal(-1.0,1.0));
////    break;
////  }
////  current << currentFootLeft;
////  current << currentFootRight;
//  state = current->as<ompl::base::State>();



////  double* val = static_cast<ob::RealVectorStateSpace::StateType*>(state)->values;
////  double z = rng_.uniformReal(-1,1);
////  if (z>.25 && z<.5)
////  {
////    double x = rng_.uniformReal(0,1.8), y = rng_.uniformReal(0,.2);
////    switch(rng_.uniformInt(0,3))
////    {
////    case 0: val[0]=x-1;  val[1]=y-1;
////    case 1: val[0]=x-.8; val[1]=y+.8;
////    case 2: val[0]=y-1;  val[1]=x-1;
////    case 3: val[0]=y+.8; val[1]=x-.8;
////    }
////  }
////  else
////  {
////    val[0] = rng_.uniformReal(-1,1);
////    val[1] = rng_.uniformReal(-1,1);
////  }
////  val[2] = z;
//////  assert(si_->isValid(state));
////  return true;

//}


//void customValidStateSampler::sampleUniformNear(State *statePtr, const State *near, const double distance) override
//{
//auto footLeftSpace(std::make_shared<ompl::base::SE3StateSpace>());
//auto footRightSpace(std::make_shared<ompl::base::SE3StateSpace>());

//ompl::base::RealVectorBounds bounds(3);
//bounds.setLow(-100);
//bounds.setHigh(100);
//bounds.check();
//footLeftSpace->setBounds(bounds);
//footRightSpace->setBounds(bounds);

//ompl::base::StateSpacePtr space = footLeftSpace + footRightSpace;
//ompl::base::ScopedState<> current(space);
//ompl::base::ScopedState<> next(space);
//current = near;
//next = state;
//current.print();
//ompl::base::ScopedState<ompl::base::SE3StateSpace> currentFootLeft(space->as<ompl::base::SE3StateSpace>()->getSubspace(0));
//ompl::base::ScopedState<ompl::base::SE3StateSpace> currentFootRight(space->as<ompl::base::SE3StateSpace>()->getSubspace(1));
//ompl::base::ScopedState<ompl::base::SE3StateSpace> nextFootLeft(space->as<ompl::base::SE3StateSpace>()->getSubspace(0));
//ompl::base::ScopedState<ompl::base::SE3StateSpace> nextFootRight(space->as<ompl::base::SE3StateSpace>()->getSubspace(1));
//current >> currentFootLeft;
//current >> currentFootRight;
////  double max_distance = 10.0;
////  double left_distance = currentFootLeft.distance(nextFootLeft);
////  double right_distance = currentFootRight.distance(nextFootRight);
////  ROS_INFO("left_distance = %f", left_distance);
////  ROS_INFO("right_distance = %f", right_distance);

////  current.print(std::cout);

////  double* val = static_cast<ob::RealVectorStateSpace::StateType*>(state)->values;
//double x,y,z;
//switch(rng_.uniformInt(0,1))
//{
//case 0://move left foot
//  x = currentFootLeft->getX();
//  y = currentFootLeft->getY();
////    z = currentFootLeft->getZ();
//  nextFootLeft->setX(x + rng_.uniformReal(-1.0,1.0));
//  nextFootLeft->setY(y + rng_.uniformReal(-1.0,1.0));
////    nextFootLeft->setZ(z + rng_.uniformReal(-1.0,1.0));

//  break;
//case 1://move right foot
//  x = currentFootRight->getX();
//  y = currentFootRight->getY();
////    z = currentFootRight->getZ();
//  nextFootRight->setX(x + rng_.uniformReal(-1.0,1.0));
//  nextFootRight->setY(y + rng_.uniformReal(-1.0,1.0));
////    nextFootRight->setZ(z + rng_.uniformReal(-1.0,1.0));
//  break;
//}
//next << nextFootLeft;
//next << nextFootRight;
//next.print();
//state = next->as<ompl::base::State>();
//return true;

//}

//void customValidStateSampler::sampleGaussian(State *statePtr, const State *mean, const double stdDev) override
//{

//}



customValidStateSampler::customValidStateSampler(const ompl::base::SpaceInformation *si) : ompl::base::ValidStateSampler(si)
{
  ROS_INFO("Initiating Sampler");
  auto footLeftSpace(std::make_shared<ompl::base::SE3StateSpace>());
  auto footRightSpace(std::make_shared<ompl::base::SE3StateSpace>());

  ompl::base::RealVectorBounds bounds(3);
  bounds.setLow(-100);
  bounds.setHigh(100);
  footLeftSpace->setBounds(bounds);
  footRightSpace->setBounds(bounds);
  space = footLeftSpace + footRightSpace;
  auto sampleSpace(std::make_shared<ompl::base::SE2StateSpace>());
//  ompl::base::StateSpace *sampleSpace(ompl::base::SE2StateSpace);

  ompl::base::RealVectorBounds boundsSample(2);
  boundsSample.setLow(-100);
  boundsSample.setHigh(100);
  sampleSpace->setBounds(boundsSample);
  ompl::geometric::SimpleSetup ss(sampleSpace);
  sampleSpacePtr = sampleSpace;
//  auto si2D(std::make_shared<ompl::base::SpaceInformation>(samplespace.get()));


//  ompl_base::SpaceInformation si2D(sampleSpacePtr);


//  auto uniformSampler(std::make_shared<ompl::base::UniformValidStateSampler>(ss.getSpaceInformation()));
//  ompl::base::UniformValidStateSampler uniformSampler(ss.getSpaceInformation().get());
//  uniform2DSampler = std::make_shared<ompl::base::UniformValidStateSampler>(ss.getSpaceInformation().get());
//  uniform2DSampler = &uniformSampler;
  lastZVal = 0.0;
}

bool customValidStateSampler::sample(ob::State *state)
{
  ompl_base::ScopedState<ompl_base::SE2StateSpace> sample2DRight(sampleSpacePtr);
  ompl_base::ScopedState<ompl_base::SE2StateSpace> sample2DLeft(sampleSpacePtr);
//  uniform2DSampler->sample(sample2DRight);
//  uniform2DSampler->sample(sample2DLeft);
  sample2DLeft->setXY(rng_.uniformReal(-10.0,10.0),rng_.uniformReal(-10.0,10.0));
  sample2DLeft->setYaw(rng_.uniformReal(-M_PI,M_PI));
  sample2DRight->setXY(rng_.uniformReal(-10.0,10.0),rng_.uniformReal(-10.0,10.0));
  sample2DRight->setYaw(rng_.uniformReal(-M_PI,M_PI));
  ompl_base::ScopedState<ompl_base::SE3StateSpace> sampleLeft(space->as<ompl_base::SE3StateSpace>()->getSubspace(0));
  ompl_base::ScopedState<ompl_base::SE3StateSpace> sampleRight(space->as<ompl_base::SE3StateSpace>()->getSubspace(1));
  sampleSpacePtr->printState(sample2DRight.get(), std::cout);

//  if(vigir_footstep_planning::WorldModel::instance().isTerrainModelAvailable())
  if(false)
  {
    State s(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, LEFT);
    double x, y, z, w;

    sampleLeft->setXYZ(sample2DLeft->getX(),sample2DLeft->getY(),lastZVal);
    ompl_helper::radianToQuat(0.0, 0.0, sample2DLeft->getYaw(), &x, &y, &z, &w);
    ompl_helper::setOrientation(sampleLeft->as<ompl_base::SO3StateSpace::StateType>(1), x, y, z, w);
    ompl_helper::getOmplState(&sampleLeft, &s, LEFT);
    vigir_footstep_planning::WorldModel::instance().update3DData(s);
    lastZVal = s.getZ();
    ompl_helper::setOmplState(&sampleLeft, &s);

    sampleRight->setXYZ(sample2DRight->getX(),sample2DRight->getY(),lastZVal);
    ompl_helper::radianToQuat(0.0, 0.0, sample2DRight->getYaw(), &x, &y, &z, &w);
    ompl_helper::setOrientation(sampleRight->as<ompl_base::SO3StateSpace::StateType>(1), x, y, z, w);
    ompl_helper::getOmplState(&sampleRight, &s, RIGHT);
    vigir_footstep_planning::WorldModel::instance().update3DData(s);
    lastZVal = s.getZ();
    ompl_helper::setOmplState(&sampleRight, &s);
  }
  else {
    sampleLeft->setXYZ(sample2DLeft->getX(),sample2DLeft->getY(),0.0);
    sampleRight->setXYZ(sample2DRight->getX(),sample2DLeft->getY(),0.0);
  }

  ompl_base::ScopedState<> converterState(space);
  sampleLeft >> converterState;
  sampleRight >> converterState;
  space->copyState(state, converterState.get());
  return true;
}

bool customValidStateSampler::sampleNear(ob::State* state, const ob::State* near, const double distance)
{
  ompl::base::ScopedState<> scopedState(space);
  space->copyState(scopedState->as<ompl::base::State>(), near);
  ompl::base::ScopedState<ompl::base::SE3StateSpace> footLeft(space->as<ompl::base::SE3StateSpace>()->getSubspace(0));
  ompl::base::ScopedState<ompl::base::SE3StateSpace> footRight(space->as<ompl::base::SE3StateSpace>()->getSubspace(1));
  footLeft << scopedState;
  footRight << scopedState;
  ompl_base::ScopedState<ompl_base::SE2StateSpace> sample2DRight(sampleSpacePtr);
  ompl_base::ScopedState<ompl_base::SE2StateSpace> sample2DLeft(sampleSpacePtr);
//  uniform2DSampler->sample(sample2DRight);
//  uniform2DSampler->sample(sample2DLeft);
  double distancePerDim = distance / 2;
  lastZVal = footLeft.get()->getZ();
  sample2DLeft->setXY(rng_.uniformReal(footLeft.get()->getX() - distancePerDim, footLeft.get()->getX() + distancePerDim),rng_.uniformReal(footLeft.get()->getY() - distancePerDim, footLeft.get()->getY() + distancePerDim));
  sample2DLeft->setYaw(rng_.uniformReal(-M_PI,M_PI));
  sample2DRight->setXY(rng_.uniformReal(footRight.get()->getX() - distancePerDim, footRight.get()->getX() + distancePerDim),rng_.uniformReal(footRight.get()->getY() - distancePerDim, footRight.get()->getY() + distancePerDim));
  sample2DRight->setYaw(rng_.uniformReal(-M_PI,M_PI));
  ompl_base::ScopedState<ompl_base::SE3StateSpace> sampleLeft(space->as<ompl_base::SE3StateSpace>()->getSubspace(0));
  ompl_base::ScopedState<ompl_base::SE3StateSpace> sampleRight(space->as<ompl_base::SE3StateSpace>()->getSubspace(1));
  sampleSpacePtr->printState(sample2DRight.get(), std::cout);

//  if(vigir_footstep_planning::WorldModel::instance().isTerrainModelAvailable())
  if(false)
  {
    State s(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, LEFT);
    double x, y, z, w;

    sampleLeft->setXYZ(sample2DLeft->getX(),sample2DLeft->getY(),lastZVal);
    ompl_helper::radianToQuat(0.0, 0.0, sample2DLeft->getYaw(), &x, &y, &z, &w);
    ompl_helper::setOrientation(sampleLeft->as<ompl_base::SO3StateSpace::StateType>(1), x, y, z, w);
    ompl_helper::getOmplState(&sampleLeft, &s, LEFT);
    vigir_footstep_planning::WorldModel::instance().update3DData(s);
    lastZVal = s.getZ();
    ompl_helper::setOmplState(&sampleLeft, &s);

    sampleRight->setXYZ(sample2DRight->getX(),sample2DRight->getY(),lastZVal);
    ompl_helper::radianToQuat(0.0, 0.0, sample2DRight->getYaw(), &x, &y, &z, &w);
    ompl_helper::setOrientation(sampleRight->as<ompl_base::SO3StateSpace::StateType>(1), x, y, z, w);
    ompl_helper::getOmplState(&sampleRight, &s, RIGHT);
    vigir_footstep_planning::WorldModel::instance().update3DData(s);
    lastZVal = s.getZ();
    ompl_helper::setOmplState(&sampleRight, &s);
  }
  else {
    sampleLeft->setXYZ(sample2DLeft->getX(),sample2DLeft->getY(),0.0);
    sampleRight->setXYZ(sample2DRight->getX(),sample2DLeft->getY(),0.0);
  }

  ompl_base::ScopedState<> converterState(space);
  sampleLeft >> converterState;
  sampleRight >> converterState;
  space->copyState(state, converterState.get());
  return true;

}
}