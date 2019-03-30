#ifndef COMMON_TOOLS
#define COMMON_TOOLS

#include "CospaceSettings.h"
#include "LogErrorTools.h"
// #include "JudgeAngleTools.hpp"
#include "JudgeColorTools.h"
#include "CalculatePositionTools.h"

#define PI 3.14

// red cyan black super
#define RED_LOADED_ID 0
#define CYAN_LOADED_ID 1
#define BLACK_LOADED_ID 2
#define ID_SUPER_LOADED 3
extern int loaded_objects[4];

int getRepeatedNum(void);
void addRepeatedNum(void);
void resetRepeatedNum(void);
void motor(int left, int right);
void motor_no_action_change(int left, int right);
int obstacle(int left, int front, int right);

void commonSetup0(void);
void commonSetup1(void);
void commonSetup1(void);
void commonLoop0(void);
void commonLoop1(void);

void setAction(enum Action pushed_action);
enum Action getAction(void);
enum Mode getDefaultRunMode();
void setDefaultRunMode(enum Mode pushed_mode);
void setRunMode(enum Mode pushed_mode);
enum Mode getRunMode(void);

#endif // !COMMON_TOOLS
