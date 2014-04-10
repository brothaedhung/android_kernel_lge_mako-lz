/* This is to make sure everything is in place for userspace voltage control*/
#define FREQCOUNT 14
#define FREQ_SIZE

int cpuuvoffset[FREQCOUNT] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

unsigned int freq_uv_table[FREQ_SIZE][3] = {
	//freq,         stock,  current
	{384000       ,700      ,700},
	{486000       ,750      ,750},
	{594000       ,800      ,800},
	{702000       ,850      ,850},
	{810000       ,900      ,900},
	{918000       ,950      ,950},
	{1026000      ,1000     ,1000},
	{1134000      ,1050     ,1050},
	{1242000      ,1100     ,1100},
	{1350000      ,1150     ,1150},
	{1458000      ,1200     ,1200},
	{1566000      ,1250     ,1250},
	{1674000      ,1300     ,1300},
	{1728000      ,1350     ,1350},
};

