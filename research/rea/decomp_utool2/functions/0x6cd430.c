// rea decompile_all
// name: FUN_006cd430
// address: 0x6cd430
// body: available
// range: 0x6cd430-0x6cd695 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd430(undefined4 param_1,undefined4 param_2,undefined4 param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int *in_ECX;
  undefined4 **ppuStack_a4;
  code *local_a0;
  undefined4 local_34 [4];
  undefined4 local_24;
  void *local_20;
  int *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007267ac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  if ((0x7f < *(byte *)((int)in_ECX + 0x69)) && (cVar3 = FUN_006ceda0(), cVar3 != '\0')) {
    ExceptionList = local_10;
    return;
  }
  local_14 = (undefined4 *)FUN_0040de70();
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  if ((*(byte *)((int)in_ECX + 0x69) & 8) != 0) {
    FUN_006e6400(&ppuStack_a4);
    FUN_006ce9f0(1);
  }
  FUN_006cbdc0();
  local_a0 = (code *)&stack0xffffff64;
  local_8._0_1_ = 1;
  ppuStack_a4 = (undefined4 **)0x6cd4c9;
  FUN_0048f150();
  local_a0 = (code *)0x0;
  ppuStack_a4 = (undefined4 **)local_34;
  FUN_006e0ff0();
  local_24 = param_3;
  local_20 = param_4;
  FUN_0048f270();
  bVar4 = FUN_0048f180();
  local_8._0_1_ = 0;
  (**(code **)(*local_18 + 0x18))();
  if (local_14 != (undefined4 *)0x0) {
    if (local_14[2] != 0) {
      if (DAT_00c8a67c == 0) {
        local_a0 = (code *)0x6cd5c3;
        local_20 = operator_new(0xd0);
        local_8._0_1_ = 2;
        DAT_00c8a67c = FUN_006cb960();
        local_8._0_1_ = 0;
      }
      FUN_006cb130();
      local_a0 = (code *)&LAB_00426f22;
      ppuStack_a4 = &local_14;
      FUN_004b0b00();
      local_a0 = (code *)&LAB_00426f22;
      ppuStack_a4 = (undefined4 **)0x6cd60f;
      FUN_0048cfe0();
      if (local_14 == (undefined4 *)0x0) {
        ExceptionList = local_10;
        return;
      }
      if ((local_14[2] != 0) && (1 < bVar4)) {
        local_a0 = (code *)0x6cd631;
        (**(code **)(*local_18 + 0x1c))();
        if (local_14 == (undefined4 *)0x0) {
          ExceptionList = local_10;
          return;
        }
        if (local_14[2] != 0) {
          local_a0 = FUN_004b3e9a;
          ppuStack_a4 = &local_14;
          FUN_004b0b00();
          local_a0 = FUN_004b3e9a;
          ppuStack_a4 = (undefined4 **)0x6cd667;
          FUN_0048cfe0();
        }
      }
    }
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        local_a0 = (code *)0x6cd682;
        (**(code **)*local_14)();
      }
    }
  }
  ExceptionList = local_10;
  return;
}

