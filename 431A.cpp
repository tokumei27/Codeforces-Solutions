/*
 * 431A.cpp
 * 
 * Copyright 2020 Tom Edwards <tom.vk2ftom@gmail.com>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
	int a[4];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> a[i];
	}
	string s; cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '1') {
			sum += a[0];
		}
		else if (s[i] == '2') {
			sum += a[1];
		}
		else if (s[i] == '3') {
			sum += a[2];
		}
		else {
			sum += a[3];
		}
	}
	cout << sum << endl;
	return  0;
}

