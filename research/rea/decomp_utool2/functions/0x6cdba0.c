// rea decompile_all
// name: FUN_006cdba0
// address: 0x6cdba0
// body: available
// range: 0x6cdba0-0x6cdd94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cdba0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 **ppuStack_90;
  code *pcStack_8c;
  undefined4 *local_18 [2];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726859;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar4 = (int *)FUN_006cecc0();
  piVar1 = in_ECX;
  if (piVar4 != (int *)0x0) {
    for (; piVar4 != piVar1; piVar1 = (int *)piVar1[3]) {
      if (piVar1 == (int *)0x0) {
        cVar3 = (**(code **)(*piVar4 + 0x9c))();
        if (cVar3 == '\0') {
          local_8 = 0;
          pcStack_8c = (code *)0x6cdc1d;
          FUN_0048f620();
          ExceptionList = local_10;
          return;
        }
        break;
      }
    }
  }
  if ((*(byte *)((int)in_ECX + 0x69) & 8) != 0) {
    FUN_006e6400(&ppuStack_90);
    FUN_006ce9f0(1);
  }
  local_18[0] = (undefined4 *)FUN_0040de70();
  if (local_18[0] != (undefined4 *)0x0) {
    LOCK();
    local_18[0][1] = local_18[0][1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  (**(code **)(*in_ECX + 8))();
  if (local_18[0] != (undefined4 *)0x0) {
    if (local_18[0][2] != 0) {
      if (DAT_00c8a67c == 0) {
        pcStack_8c = (code *)0x6cdd1b;
        operator_new(0xd0);
        local_8._0_1_ = 2;
        DAT_00c8a67c = FUN_006cb960();
        local_8 = CONCAT31(local_8._1_3_,1);
      }
      FUN_006cb130();
      pcStack_8c = FUN_00410543;
      ppuStack_90 = local_18;
      FUN_004b0b00();
      pcStack_8c = FUN_00410543;
      ppuStack_90 = (undefined4 **)0x6cdd67;
      FUN_0048cfe0();
    }
    if (local_18[0] != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_18[0] + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        pcStack_8c = (code *)0x6cdd82;
        (**(code **)*local_18[0])();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

