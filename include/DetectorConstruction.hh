//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
/**********************************************************************
     Version :  Geant4.10.02.p02
     Author  :  Ercan Pilicer	 
     Syncrotron Radiation Test with GDML Geometry
**********************************************************************/

#ifndef _DETECTORCONSTRUCTION_H_
#define _DETECTORCONSTRUCTION_H_

#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"
#include "G4Cache.hh"


class G4GDMLParser;
class G4GlobalMagFieldMessenger;

/// Detector construction for laoding GDML geometry

class DetectorConstruction : public G4VUserDetectorConstruction
{
  public: 
    DetectorConstruction(const G4GDMLParser& parser);

    virtual G4VPhysicalVolume *Construct();  
    virtual void ConstructSDandField();
  
  private:
    const G4GDMLParser& fParser;
    G4Cache<G4GlobalMagFieldMessenger*> fFieldMessenger;
};

#endif
