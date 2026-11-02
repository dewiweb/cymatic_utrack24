// rea decompile_all
// name: FUN_0062b1b0
// address: 0x62b1b0
// body: available
// range: 0x62b1b0-0x62b3d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0062b1b0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *in_ECX;
  char *in_EDX;
  int iVar4;
  int iVar5;
  int local_2c;
  undefined1 *local_24;
  uint local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = local_2c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071de98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_1 < 1) || (in_EDX == (char *)0x0)) {
    *in_ECX = (int)&DAT_00bfe12c;
  }
  else {
    if (param_1 == 1) {
      FUN_00622070();
      ExceptionList = local_10;
      return in_ECX;
    }
    if (((*in_EDX != -2) || (in_EDX[1] != -1)) && ((*in_EDX != -1 || (in_EDX[1] != -2)))) {
      if ((2 < param_1) && (cVar3 = FUN_0044ed50(), cVar3 != '\0')) {
        in_EDX = in_EDX + 3;
      }
      cVar3 = FUN_00426fd0();
      if (cVar3 != '\0') {
        FUN_0062cd70(in_EDX);
        ExceptionList = local_10;
        return in_ECX;
      }
      FUN_006207d0();
      ExceptionList = local_10;
      return in_ECX;
    }
    iVar5 = param_1 / 2 + -1;
    FUN_00455ba0();
    local_8 = 0;
    if ((*in_EDX == -2) && (in_EDX[1] == -1)) {
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          FUN_00455c30();
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
    }
    else {
      iVar4 = 0;
      if (0 < iVar5) {
        do {
          FUN_00455c30();
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar5);
      }
    }
    if (local_20 < local_1c + 1U) {
      FUN_00455850();
      local_2c = param_1;
      local_24 = local_24 + (param_1 - iVar2);
    }
    *local_24 = 0;
    *in_ECX = local_2c;
    piVar1 = (int *)(local_2c + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    piVar1 = (int *)(local_2c + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar1);
        ExceptionList = local_10;
        return in_ECX;
      }
    }
  }
  ExceptionList = local_10;
  return in_ECX;
}

