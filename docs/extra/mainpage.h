/** \mainpage DirectSim
*
* @authors Alexandra Abate, Reza Ansari, Christophe Magneville ...
*
* \tableofcontents
*
* <hr>
* @section intro Introduction
* [Describe things the codes are able to do]
* Please see the documentation in the "Related Pages" tab above on how to run 
* the programs and hopefully get what you want!
*
* <hr>
* @section install Installation
*
* For installation instructions, please see the file <CODE>install</CODE> in the main 
* repository directory, or see the install page under the "Related Pages" tab.
*
* <hr>
* @section dirs Directory Structure
* <CODE> $DIRECTSIM </CODE> refers to the root directory of DirectSim
* 
* The source code:
* - <B>classes</B> Contains all the definitions and source code for the classes
* - <B>progs</B> Contains the programs
*
* Compiled code:
* - <B>objs</B> Object files 
* - <B>exe</B> Executables
*
* Also note the existence of the following directories:
* - <B>filters</B>: Contains filter sets and filter transmissions.  Filter sets are in
*            files of the form: <CODE>[SETNAME-ALL-IN-CAPS].filters</CODE>.  Filter
*            transmissions are in files of the form: <CODE>[band]_[instrument]_[source].txt</CODE>.
*            If adding more filters sets please keep to this same convention.
* - <B>SEDs</B>: Contains SED libraries and spectra. SED libraries are in files of the 
*         form: <CODE>[LIBNAME-ALL-IN-CAPS].list</CODE>. Spectra are in other files
*         with extentions like <CODE>.txt</CODE>, <CODE>.sed</CODE> or <CODE>.spec</CODE>.
*         If adding more SED libraries please keep to this same convention.
* - <B>kCorrections</B>: If <CODE>calculateKcorrections</CODE> has been run, contains pre-calculated
*                 k-corrections for different SED-filter combinations.
* - <B>LFs</B>: Contains luminosity functions
*
*
* Try to keep to something like LSST coding standards:
* <A HREF="https://dev.lsstcorp.org/trac/wiki/CodingStandardsDesirable"> Coding Standards </A>
*
*
*
* <hr>
* @section notes Release notes
* Details about current release ...
* <hr>
* @section requirements Requirements
* @verbinclude requirements ...
* <hr> 
* @todo Click here for a list of updates to be made
*
*/
