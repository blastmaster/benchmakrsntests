#include <cstring>

#include <map>
#include <string>
#include <stdint.h>
#include <iostream>

using std::strcmp;


#include "Numbrhash.H"

std::map<std::string, int> global_map;

int huge_compare(const std::string& text)
{
    if (text == "1") return 1;
    else if (text == "2") return 2;
    else if (text == "3") return 3;
    else if (text == "4") return 4;
    else if (text == "5") return 5;
    else if (text == "6") return 6;
    else if (text == "7") return 7;
    else if (text == "8") return 8;
    else if (text == "9") return 9;
    else if (text ==  "10") return 10;
    else if (text ==  "11") return 11;
    else if (text ==  "12") return 12;
    else if (text ==  "13") return 13;
    else if (text ==  "14") return 14;
    else if (text ==  "15") return 15;
    else if (text ==  "16") return 16;
    else if (text ==  "17") return 17;
    else if (text ==  "18") return 18;
    else if (text ==  "19") return 19;
    else if (text ==  "20") return 20;
    else if (text ==  "21") return 21;
    else if (text ==  "22") return 22;
    else if (text ==  "23") return 23;
    else if (text ==  "24") return 24;
    else if (text ==  "25") return 25;
    else if (text ==  "26") return 26;
    else if (text ==  "27") return 27;
    else if (text ==  "28") return 28;
    else if (text ==  "29") return 29;
    else if (text ==  "30") return 30;
    else if (text ==  "31") return 31;
    else if (text ==  "32") return 32;
    else if (text ==  "33") return 33;
    else if (text ==  "34") return 34;
    else if (text ==  "35") return 35;
    else if (text ==  "36") return 36;
    else if (text ==  "37") return 37;
    else if (text ==  "38") return 38;
    else if (text ==  "39") return 39;
    else if (text ==  "40") return 40;
    else if (text ==  "41") return 41;
    else if (text ==  "42") return 42;
    else if (text ==  "43") return 43;
    else if (text ==  "44") return 44;
    else if (text ==  "45") return 45;
    else if (text ==  "46") return 46;
    else if (text ==  "47") return 47;
    else if (text ==  "48") return 48;
    else if (text ==  "49") return 49;
    else if (text ==  "50") return 50;
    else if (text ==  "51") return 51;
    else if (text ==  "52") return 52;
    else if (text ==  "53") return 53;
    else if (text ==  "54") return 54;
    else if (text ==  "55") return 55;
    else if (text ==  "56") return 56;
    else if (text ==  "57") return 57;
    else if (text ==  "58") return 58;
    else if (text ==  "59") return 59;
    else if (text ==  "60") return 60;
    else if (text ==  "61") return 61;
    else if (text ==  "62") return 62;
    else if (text ==  "63") return 63;
    else if (text ==  "64") return 64;
    else if (text ==  "65") return 65;
    else if (text ==  "66") return 66;
    else if (text ==  "67") return 67;
    else if (text ==  "68") return 68;
    else if (text ==  "69") return 69;
    else if (text ==  "70") return 70;
    else if (text ==  "71") return 71;
    else if (text ==  "72") return 72;
    else if (text ==  "73") return 73;
    else if (text ==  "74") return 74;
    else if (text ==  "75") return 75;
    else if (text ==  "76") return 76;
    else if (text ==  "77") return 77;
    else if (text ==  "78") return 78;
    else if (text ==  "79") return 79;
    else if (text ==  "80") return 80;
    else if (text ==  "81") return 81;
    else if (text ==  "82") return 82;
    else if (text ==  "83") return 83;
    else if (text ==  "84") return 84;
    else if (text ==  "85") return 85;
    else if (text ==  "86") return 86;
    else if (text ==  "87") return 87;
    else if (text ==  "88") return 88;
    else if (text ==  "89") return 89;
    else if (text ==  "90") return 90;
    else if (text ==  "91") return 91;
    else if (text ==  "92") return 92;
    else if (text ==  "93") return 93;
    else if (text ==  "94") return 94;
    else if (text ==  "95") return 95;
    else if (text ==  "96") return 96;
    else if (text ==  "97") return 97;
    else if (text ==  "98") return 98;
    else if (text ==  "99") return 99;
    else if (text == "100") return 100;
    else return -1;
}

int map_compare(const std::map<std::string, int>& map, const std::string& key)
{
    auto it =map.find(key);
    if (it == map.end()) return -1;
    else return (*it).second;
}



void rtime_gprf(const uint32_t loopz , const std::string & s)
{

	std::cout << s.c_str() << "size:" << (s.size()) << std::endl;
	Numbrhash nh;
	const NumberP *blub;
	for (uint32_t i = 0 ; i< loopz; ++i)
	{
		blub = nh.in_word_set(s.c_str(),s.size());
		if (i==100){
			if (blub)
				std::cout << "erg: "<< 	blub->op <<std::endl;
			else
				std::cout << "kein erg" << std::endl;
		}
	}
}

void rtime_hc(uint32_t loopz, const std::string & s)
{
    int j;
    for(uint32_t i = 0; i < loopz; ++i)
    {
       j= huge_compare(s);
       if (i==100){
	       std::cout << "fub" << j << std::endl;
       }
    }
}

void rtime_mc(uint32_t loopz , const std::string &s)
{
    int j;
    for(uint32_t i = 0; i < loopz; ++i)
    {
        j = map_compare(global_map, s);
	if (i==100){
		std::cout << "fub" << j << std::endl;
	}
    }
}

void mapsetup(void){
	global_map["1"] = 1;
	global_map["2"] = 2;
	global_map["3"] = 3;
	global_map["4"] = 4;
	global_map["5"] = 5;
	global_map["6"] = 6;
	global_map["7"] = 7;
	global_map["8"] = 8;
	global_map["9"] = 9;
	global_map[ "10"] = 10;
	global_map[ "11"] = 11;
	global_map[ "12"] = 12;
	global_map[ "13"] = 13;
	global_map[ "14"] = 14;
	global_map[ "15"] = 15;
	global_map[ "16"] = 16;
	global_map[ "17"] = 17;
	global_map[ "18"] = 18;
	global_map[ "19"] = 19;
	global_map[ "20"] = 20;
	global_map[ "21"] = 21;
	global_map[ "22"] = 22;
	global_map[ "23"] = 23;
	global_map[ "24"] = 24;
	global_map[ "25"] = 25;
	global_map[ "26"] = 26;
	global_map[ "27"] = 27;
	global_map[ "28"] = 28;
	global_map[ "29"] = 29;
	global_map[ "30"] = 30;
	global_map[ "31"] = 31;
	global_map[ "32"] = 32;
	global_map[ "33"] = 33;
	global_map[ "34"] = 34;
	global_map[ "35"] = 35;
	global_map[ "36"] = 36;
	global_map[ "37"] = 37;
	global_map[ "38"] = 38;
	global_map[ "39"] = 39;
	global_map[ "40"] = 40;
	global_map[ "41"] = 41;
	global_map[ "42"] = 42;
	global_map[ "43"] = 43;
	global_map[ "44"] = 44;
	global_map[ "45"] = 45;
	global_map[ "46"] = 46;
	global_map[ "47"] = 47;
	global_map[ "48"] = 48;
	global_map[ "49"] = 49;
	global_map[ "50"] = 50;
	global_map[ "51"] = 51;
	global_map[ "52"] = 52;
	global_map[ "53"] = 53;
	global_map[ "54"] = 54;
	global_map[ "55"] = 55;
	global_map[ "56"] = 56;
	global_map[ "57"] = 57;
	global_map[ "58"] = 58;
	global_map[ "59"] = 59;
	global_map[ "60"] = 60;
	global_map[ "61"] = 61;
	global_map[ "62"] = 62;
	global_map[ "63"] = 63;
	global_map[ "64"] = 64;
	global_map[ "65"] = 65;
	global_map[ "66"] = 66;
	global_map[ "67"] = 67;
	global_map[ "68"] = 68;
	global_map[ "69"] = 69;
	global_map[ "70"] = 70;
	global_map[ "71"] = 71;
	global_map[ "72"] = 72;
	global_map[ "73"] = 73;
	global_map[ "74"] = 74;
	global_map[ "75"] = 75;
	global_map[ "76"] = 76;
	global_map[ "77"] = 77;
	global_map[ "78"] = 78;
	global_map[ "79"] = 79;
	global_map[ "80"] = 80;
	global_map[ "81"] = 81;
	global_map[ "82"] = 82;
	global_map[ "83"] = 83;
	global_map[ "84"] = 84;
	global_map[ "85"] = 85;
	global_map[ "86"] = 86;
	global_map[ "87"] = 87;
	global_map[ "88"] = 88;
	global_map[ "89"] = 89;
	global_map[ "90"] = 90;
	global_map[ "91"] = 91;
	global_map[ "92"] = 92;
	global_map[ "93"] = 93;
	global_map[ "94"] = 94;
	global_map[ "95"] = 95;
	global_map[ "96"] = 96;
	global_map[ "97"] = 97;
	global_map[ "98"] = 98;
	global_map[ "99"] = 99;
	global_map["100"] = 100;
}


int main(int argc, const char *argv[] )
{

	std::string s;
	if (argc == 2){
		s = std::string(argv[1]);}
	else{
		s = std::string("99");
	}

#if defined  USE_MAP
	mapsetup();
	rtime_mc(2048000,s);

#elif defined USE_IF 
	rtime_hc(2048000,s);
#elif defined USE_GPERF
	rtime_gprf(2048000,s);
#endif

	return 0;
}
