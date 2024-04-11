#pragma once

#include <string.h>
#include "student.h"
#include "utils.h"

int compareByName(Student a, Student b);

int compareById(Student a, Student b);

void bubbleSort(Student *students, int length, int (*compare)(Student, Student));
