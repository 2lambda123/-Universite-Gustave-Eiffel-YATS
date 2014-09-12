  /* ----------------------------------------------------------------------
   * YATS (http://github.com/Ifsttar/YATS). This file is part of YATS.
   *
   * YATS (Yet Another Traffic Simulation) is a simple and efficient
   * Traffic Simulator used for reasearch purpose
   * Copyright (C) 2013-2014 - IFSTTAR - Julien Saunier and Julien Gagneux
 
   * YATS is free software; you can redistribute it and/or modify
   * it under the terms of the GNU General Public License as published by
   * the Free Software Foundation; either version 3 of the License, or
   * (at your option) any later version.
   * 
   * YATS is distributed in the hope that it will be useful,
   * but WITHOUT ANY WARRANTY; without even the implied warranty of
   * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   * GNU General Public License for more details.
   * 
   * You should have received a copy of the GNU General Public License
   * along with this program; if not, write to the Free Software Foundation,
   * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301  USA or 
   * see <http://ww.gnu.org/licenses/>
   *
   * For more information, please consult: <http://github.com/Ifsttar/YATS> or 
   * send an email to scientific.computing@ifsttar.fr
   *
   * To contact Ifsttar, write to Ifsttar, 14-20 Boulevard Newton
   * Cit� Descartes, Champs sur Marne F-77447 Marne la Vall�e Cedex 2 FRANCE
   * or write to scientific.computing@ifsttar.fr
   * ----------------------------------------------------------------------*/
   
   
#pragma once

/*******************************************************/
/** Programme de PERRUCHON Romain pour developpez.com **/
/**             Chapitre VIII : Timer                 **/
/*******************************************************/
// Custom by Eli Xirr(juliengagneuxpro@gmail.com) for YATS needs

class TimerSDL
{
public:
    //Initialise les variables
    TimerSDL(void);
	~TimerSDL(void);

    //Les diff�rentes actions du timer
    void start();
    void stop();
    void pause();
    void unpause();

    //recup�re le nombre de ticks depuis que le timer a �t� lanc�
    //ou r�cup�re le nombre de ticks depuis que le timer a �t� mis en pause
    int get_ticks();

    //Fonctions de v�rification du status du timer
    bool is_started();
    bool is_paused();

private:
    //Le temps quand le timer est lanc�
    int startTicks;

    //Les "ticks" enregistr� quand le Timer a �t� mit en pause
    int pausedTicks;

    //Le status du Timer
    bool paused;
    bool started;
};
