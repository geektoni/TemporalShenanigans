#ifndef FAKEAMBIENT_H
#define FAKEAMBIENT_H

class FakeAmbient
{
	protected:
		char room[5][5];
		int room_IDs[5][5];
		int seed;
		static const int MAXPLAYERS = 19;
		int ID;
	public:
		FakeAmbient();
		int getID();
		void print();
		void spawnPlayer(int row, int column, int ID);
		void updateScreen();
};

#endif
