// rea decompile_all
// name: FUN_00419080
// address: 0x419080
// body: available
// range: 0x419080-0x419295 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00419080(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006fcd49;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = 1;
  in_ECX[3] = 0;
  in_ECX[4] = juce::ApplicationCommandTarget::vftable;
  DAT_00c8a660 = in_ECX;
  in_ECX[5] = 0;
  in_ECX[6] = juce::ChangeListener::vftable;
  local_8 = 1;
  uStack_7 = 0;
  *in_ECX = PlaylistEditorApplication::vftable;
  in_ECX[4] = PlaylistEditorApplication::vftable;
  in_ECX[6] = PlaylistEditorApplication::vftable;
  FUN_0045c990("https://dl.dropboxusercontent.com/u/21532405/uToolNewsTest/wsreport.php",uVar2);
  local_8 = 2;
  FUN_0045c990("Cymatic Audio");
  local_8 = 3;
  FUN_00634690();
  local_8 = 4;
  FUN_00635a10(&local_24,"Cymatic Audio uTool2");
  local_8 = 5;
  FUN_00635a10(&local_20,"CrashLog");
  local_8 = 6;
  uVar3 = FUN_00635a10(&local_1c,"uTool2CrashReport.txt");
  _local_8 = CONCAT31(uStack_7,7);
  FUN_00588fc0(&local_14,uVar3,&local_18);
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_28 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  _local_8 = CONCAT31(uStack_7,9);
  FUN_0057d6a0();
  in_ECX[0x40] = 0;
  ExceptionList = local_10;
  return;
}

