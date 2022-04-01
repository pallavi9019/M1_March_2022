/**
 * @file game.h
 * @author Pallavi M (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-04-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef __GAME_H
#define __GAME_H

/**
 * @brief shows the highest cash prize won by a particular user 
 * 
 * @return int 
 */
int show_record();
/**
 * @brief to reset the highest score/cash prize to defaul
 * 
 */
void reset_score();
/**
 * @brief help menu with game summary and rules
 * 
 */
void help();
/**
 * @brief adds the current cash prize won to the previous one upon giving the right answer to a question 
 * 
 */
void edit_score(float , char []);
#endif