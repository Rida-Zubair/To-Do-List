#pragma once
#include <iostream>
#include <vector>

struct Task
{
	std::string description;
	bool done;
};

void SaveTaskToFile(const std::vector<Task>& tasks, const std::string& fileName);
std::vector<Task> LoadTasksFromFile(const std::string& fileName);