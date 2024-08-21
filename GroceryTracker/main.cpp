#include "GroceryTracker.h"

int main() {
	GroceryTracker tracker;
	tracker.LoadData();
	tracker.SaveData();
	tracker.Menu();
	return 0;
}