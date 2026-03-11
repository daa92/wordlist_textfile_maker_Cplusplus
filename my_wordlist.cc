#include <iostream>
#include <string>
#include <fstream>


using namespace std;

// ascii characters
string char_list_func () {
	string result = "";

	for (int i = 33; i < 128; ++i)  result += char (i);

	return result;
}


int main () {
	string list = char_list_func (); //characters list
	int len = list.length ();
	
	for (int a = 0; a < len; ++a) {
		for (int b = 0; b < len; ++b){
			for (int c = 0; c < len; ++c) {
				for (int d = 0; d < len; ++d) {
					for (int e = 0; e < len; ++e) {
						for (int f = 0; f < len; ++f) {
							for (int g = 0; g < len; ++g) {
								for (int h = 0; h < len; ++h) {
									for (int i = 0; i < len; ++i) {
										for (int j = 0; j < len; ++j) {
											for (int k = 0; k < len; ++k) {
												for (int l = 0; l < len; ++l) {
													for (int m = 0; m < len; ++m) {
														for (int n = 0; n < len; ++n) {
															for (int o = 0; o < len; ++o) {
																for (int p = 0; p < len; ++p) {
																	for (int q = 0; q < len; ++q) {
																		for (int r = 0; r < len; ++r) {
																			for (int s = 0; s < len; ++s) {
																				for (int t = 0; t < len; ++t) {
																					for (int u = 0; u < len; ++u) {
																						for (int v = 0; v < len; ++v) {
																							for (int w = 0; w < len; ++w) {
																								for (int x = 0; x < len; ++x) {
																									for (int y = 0; y < len; ++y) {
																										for (int z = 0; z < len; ++z) {
																											string result = "";
																											result += list [a];
																											result += list [b];
																											result += list [c];
																											result += list [d];
																											result += list [e];
																											result += list [f];
																											result += list [g];
																											result += list [h];
																											result += list [i];
																											result += list [j];
																											result += list [k];
																											result += list [l];
																											result += list [m];
																											result += list [n];
																											result += list [o];
																											result += list [p];
																											result += list [q];
																											result += list [r];
																											result += list [s];
																											result += list [t];
																											result += list [u];
																											result += list [v];
																											result += list [w];
																											result += list [x];
																											result += list [y];
																											result += list [z];
																											ofstream outfile ("mywordlist.txt", std::ios::app);
																											outfile << result << endl;
																											outfile.close ();
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	

	return 0;
}
