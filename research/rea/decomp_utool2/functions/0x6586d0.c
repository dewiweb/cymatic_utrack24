// rea decompile_all
// name: FUN_006586d0
// address: 0x6586d0
// body: available
// range: 0x6586d0-0x658a14 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_006586d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_EDX;
  int local_14;
  int local_10;
  int local_8;
  
  iVar1 = *in_EDX;
  if (iVar1 < 0) {
    return true;
  }
  if (100000 < iVar1) {
    return true;
  }
  iVar2 = in_EDX[1];
  if (iVar2 < 0) {
    return true;
  }
  if (100000 - iVar1 < iVar2) {
    return true;
  }
  iVar1 = in_EDX[2];
  if (iVar1 < 0) {
    return true;
  }
  if (100000 < iVar1) {
    return true;
  }
  if (in_EDX[3] < 0) {
    return true;
  }
  if (100000 - iVar1 < in_EDX[3]) {
    return true;
  }
  iVar1 = in_EDX[4];
  if (iVar1 < 0) {
    return true;
  }
  if (100000 < iVar1) {
    return true;
  }
  if (in_EDX[5] < 0) {
    return true;
  }
  if (100000 - iVar1 < in_EDX[5]) {
    return true;
  }
  if (in_EDX[6] < 0) {
    return true;
  }
  if (100000 < in_EDX[6]) {
    return true;
  }
  if (in_EDX[7] < 0) {
    return true;
  }
  if (in_EDX[7] <= 100000 - in_EDX[6]) {
    iVar1 = FUN_006571e0(iVar2 - in_EDX[5],7);
    if ((iVar1 != 0) && (iVar1 = FUN_006571e0(*in_EDX - in_EDX[4],7), iVar1 != 0)) {
      iVar1 = FUN_006571e0(in_EDX[7] - in_EDX[5],7);
      if ((iVar1 != 0) && (iVar1 = FUN_006571e0(in_EDX[6] - in_EDX[4],7), iVar1 != 0)) {
        if (((local_8 - local_10 == 0) ||
            (iVar1 = FUN_006571e0(local_8 - local_10,local_8 - local_10), iVar1 == 0)) ||
           (local_14 <= in_EDX[7])) {
          return true;
        }
        iVar1 = FUN_006571e0(in_EDX[6] - in_EDX[4],7);
        if (iVar1 == 0) {
          return 2;
        }
        iVar1 = FUN_006571e0(in_EDX[7] - in_EDX[5],7);
        if (iVar1 == 0) {
          return 2;
        }
        if (local_8 - local_10 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(local_8 - local_10,local_8 - local_10);
        if (iVar1 == 0) {
          return true;
        }
        if (local_10 <= in_EDX[7]) {
          return true;
        }
        iVar1 = FUN_00657170();
        iVar2 = FUN_00657170();
        iVar3 = FUN_00657170();
        iVar3 = (iVar1 - iVar2) - iVar3;
        if (iVar3 < 1) {
          return true;
        }
        if (local_14 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(100000,local_14);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(100000,local_14);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(100000,local_14);
        if (iVar1 == 0) {
          return true;
        }
        if (local_10 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(100000,local_10);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(100000,local_10);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(100000,local_10);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(iVar3,100000);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(iVar3,100000);
        if (iVar1 == 0) {
          return true;
        }
        iVar1 = FUN_006571e0(iVar3,100000);
        return iVar1 == 0;
      }
    }
    return 2;
  }
  return true;
}

