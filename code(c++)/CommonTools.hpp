#ifndef COMMON_TOOLS
#define COMMON_TOOLS

#define PI 3.14

// red cyan black super
#define RED_LOADED_ID 0
#define CYAN_LOADED_ID 1
#define BLACK_LOADED_ID 2
#define ID_SUPER_LOADED 3
extern int loaded_objects[4];

#include "CospaceSettings.hpp"
#include "LogErrorTools.hpp"
#include "JudgeAngleTools.hpp"
#include "JudgeColorTools.hpp"

int getRepeatedNum(void);
void addRepeatedNum(void);
void resetRepeatedNum(void);
void motor(int left, int right);
void motor_no_action_change(int left, int right);
int obstacle(int left, int front, int right);

void commonSetup0(void);
void commonSetup1(void);
void commonLoop0(void);
void commonLoop1(void);

class ProcessingTime
{
public:
	void start(void);
	double end(void);

private:
	std::chrono::system_clock::time_point start_time, end_time;
};

void setAction(Action pushed_action);
Action getAction(void);
Mode getDefaultRunMode();
void setDefaultRunMode(Mode pushed_mode);
void setRunMode(Mode pushed_mode);
Mode getRunMode(void);

#endif // !COMMON_TOOLS
