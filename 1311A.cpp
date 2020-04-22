/*
 * 1311A.cpp
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
using namespace std;
typedef long long ll;

int main(int argc, char **argv)
{
	int t; cin >> t;
	ll a, b;
	
	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		if (a == b) {
			cout << 0;
		}
		else if (a > b && abs(a-b) % 2 != 0) {
			cout << 2;
		}
		else if (a < b && abs(a-b) % 2 == 0) {
			cout << 2;
		}
		else {
			cout << 1;
		}
		cout << endl;
	}
	return 0;
}

