/* This is to make sure everything is in place for userspace voltage control*/
#define FREQCOUNT 14
#define FREQ_SIZE

int cpuuvoffset[FREQCOUNT] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

unsigned int freq_uv_table[FREQ_SIZE][3] = {
	//freq,         stock,  current
	{384000      ,1350     ,1350},
	{486000      ,1300     ,1300},
	{594000      ,1250     ,1250},
	{702000      ,1200     ,1200},
	{810000      ,1150     ,1150},
	{918000      ,1100     ,1100},
	{1026000      ,1050     ,1050},
	{1134000      ,1000     ,1000},
	{1242000      ,950     ,950},
	{1350000      ,900     ,900},
	{1458000      ,850     ,850},
	{1566000      ,800     ,800},
	{1674000      ,750     ,750},
	{1728000      ,700     ,700},
};

