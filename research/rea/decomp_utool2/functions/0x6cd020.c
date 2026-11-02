// rea decompile_all
// name: FUN_006cd020
// address: 0x6cd020
// body: available
// range: 0x6cd020-0x6cd1e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cd020(int param_1,float param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *in_ECX;
  float local_64;
  float local_60;
  undefined4 local_5c;
  undefined4 local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  float local_30;
  float local_2c;
  undefined2 local_28;
  double local_24;
  double local_1c;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  iVar2 = DAT_00c8a67c;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726735;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    local_8 = iVar2;
    DAT_00c8a67c = FUN_006cb960();
  }
  local_8 = 0xffffffff;
  piVar5 = (int *)FUN_006cecc0(uVar4);
  piVar1 = in_ECX;
  if (piVar5 != (int *)0x0) {
    for (; piVar5 != piVar1; piVar1 = (int *)piVar1[3]) {
      if (piVar1 == (int *)0x0) {
        cVar3 = (**(code **)(*piVar5 + 0x9c))();
        if (cVar3 == '\0') {
          FUN_006cade0();
          ExceptionList = local_10;
          return;
        }
        break;
      }
    }
  }
  if (in_ECX == (int *)0x0) {
    local_14 = (undefined4 *)0x0;
  }
  else {
    local_14 = (undefined4 *)FUN_0040de70(in_ECX);
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    local_14[1] = local_14[1] + 1;
    UNLOCK();
  }
  local_8 = 1;
  local_54 = *(uint *)(param_1 + 0x20) | DAT_00c8a9c8 & 0xffffff8f;
  local_50 = 0;
  local_64 = param_2;
  local_1c = (double)param_2 + 6755399441055744.0;
  local_44 = param_4;
  local_3c = param_4;
  local_60 = param_3;
  local_5c = local_1c._0_4_;
  local_34 = param_1;
  local_28 = 0;
  local_30 = param_2;
  local_24 = (double)param_3 + 6755399441055744.0;
  local_2c = param_3;
  local_58 = local_24._0_4_;
  local_40 = param_5;
  local_38 = param_5;
  (**(code **)(*in_ECX + 4))(&local_64);
  if (local_14 != (undefined4 *)0x0) {
    if (local_14[2] != 0) {
      FUN_006cb130();
      FUN_004b0b00(&local_14,FUN_00410536,&local_64);
      FUN_0048cfe0(FUN_00410536,&local_64);
    }
    if (local_14 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = local_14 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*local_14)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

