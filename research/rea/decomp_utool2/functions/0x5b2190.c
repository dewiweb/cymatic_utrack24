// rea decompile_all
// name: FUN_005b2190
// address: 0x5b2190
// body: available
// range: 0x5b2190-0x5b23a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_005b2190(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *in_EDX;
  char *local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00718de7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005b2a40();
  local_8 = 0;
  FUN_005b4070();
  local_8 = CONCAT31(local_8._1_3_,2);
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_1c = "SongLib";
  FUN_0044ec90();
  iVar3 = FUN_0045e120(local_14);
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_00637a90(&local_1c);
    iVar3 = *piVar4;
    *piVar4 = local_14;
    piVar4 = (int *)(local_1c + -8);
    local_14 = iVar3;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  local_1c = (char *)&DAT_00748a18;
  FUN_0044ec90();
  iVar3 = FUN_0045e120(local_14);
  if (iVar3 == 0) {
    *in_EDX = 1;
  }
  else {
    local_1c = "LR16";
    FUN_0044ec90();
    iVar3 = FUN_0045e120(local_14);
    if (iVar3 == 0) {
      *in_EDX = 2;
    }
    else {
      local_1c = "uTrack24";
      FUN_0044ec90();
      iVar3 = FUN_0045e120(local_14);
      if (iVar3 == 0) {
        *in_EDX = 3;
      }
      else {
        local_1c = "uTrackX32";
        FUN_0044ec90();
        iVar3 = FUN_0045e120(local_14);
        if (iVar3 == 0) {
          *in_EDX = 4;
        }
        else {
          cVar2 = FUN_00633e80();
          iVar3 = 0;
          if (cVar2 != '\0') {
            iVar3 = 5;
          }
          *in_EDX = iVar3;
        }
      }
    }
  }
  iVar3 = *in_EDX;
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
  ExceptionList = local_10;
  return iVar3 != 0;
}

