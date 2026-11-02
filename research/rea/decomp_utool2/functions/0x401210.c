// rea decompile_all
// name: FUN_00401210
// address: 0x401210
// body: available
// range: 0x401210-0x4013c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00401210(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fccd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990("Warning: The Audio File Library is located on a network drive. This might cause performance issues or errors during import/export operations."
               ,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0045c990(
              "Warning: The Project Library and the Audio File Library should be located within the same folder for ease of copying between computers."
              );
  local_8._0_1_ = 1;
  FUN_0045c990(
              "Importing SYNC group content:\nYou are not adding songs to an existing session.\n\nAre you sure to import into a new session?"
              );
  local_8._0_1_ = 2;
  FUN_0045c990(
              "Warning:\nThis is an export to synchronized units. Make sure you clearly label the hard disks and plug them into the proper uTrack24 unit.\nPlease note that export batch uses \'Force Overwrite\' mode."
              );
  local_8._0_1_ = 3;
  FUN_0045c990(
              "This Auto-Playlist is exported to the #Playlist root folder and requires uTrack24 firmware 3427 or higher to work properly."
              );
  local_8._0_1_ = 4;
  FUN_0045c990(
              "Warning: Multiple files will be deleted without confirmation for every item. Playlists with reference to deleted songs will turn invalid."
              );
  local_8._0_1_ = 5;
  FUN_0045c990("Are you sure you want to close the editor without saving?");
  local_8._0_1_ = 6;
  FUN_0045c990(&DAT_00738bed);
  local_8._0_1_ = 7;
  FUN_0045c990("");
  local_8._0_1_ = 8;
  FUN_0045c990(
              "Note: The uTrack-X32 doesn\'t implement a mixer. This window is only for monitoring at the computer."
              );
  local_8._0_1_ = 9;
  FUN_0045c990(
              "The source wave file is not in the Audio Library. For easy copying between computers use [Copy audio files to Audio Library]."
              );
  local_8._0_1_ = 10;
  FUN_0045c990(
              "Export all audio content, song settings and playlists, overwriting existing content in the target location."
              );
  local_8._0_1_ = 0xb;
  FUN_0045c990("Export only new content and any modified song settings and playlist files.");
  local_8._0_1_ = 0xc;
  FUN_0045c990(
              "Stacked mode: Tracks of multiple synchronized units are copied into one single Song."
              );
  local_8._0_1_ = 0xd;
  FUN_0045c990("Redundant mode: One separate song is created for every synchronized unit.");
  local_8._0_1_ = 0xe;
  FUN_0045c990("Should be selected, unless you are only interested in the wave files.");
  local_8 = CONCAT31(local_8._1_3_,0xf);
  FUN_0045c990(
              "The song project is not compatible with the existing content in the target disk due to parameter change or audio file change. This project will be exported in \'Force Overwrite\' mode."
              );
  _atexit((_func_4879 *)&LAB_00729e90);
  ExceptionList = local_10;
  return;
}

