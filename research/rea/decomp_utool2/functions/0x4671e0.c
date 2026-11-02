// rea decompile_all
// name: FUN_004671e0
// address: 0x4671e0
// body: available
// range: 0x4671e0-0x4673aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004671e0(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int *local_3c [2];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int local_1c;
  int *local_18;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007010e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = in_ECX;
  iVar2 = (**(code **)(*(int *)in_ECX[1] + 0xc))(&local_11,1,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (iVar2 != 1) {
    ExceptionList = local_10;
    return 0;
  }
  FUN_00466d90(local_11);
  if (-1 < (int)param_2) {
    in_ECX[(int)param_2 + 0x43] = 0;
  }
  iVar5 = 0;
  local_1c = 0;
  iVar4 = 0;
  iVar2 = 8;
  piVar1 = (int *)*local_18;
  if (piVar1 == (int *)0x0) {
    local_2c = 0;
    local_28 = 0;
  }
  else {
    local_2c = piVar1[3];
    local_28 = piVar1[4];
  }
  local_24 = (undefined4 *)0x0;
  local_8 = 0;
  (**(code **)(*piVar1 + 0x10))(local_3c,0,0,1);
  param_2 = local_3c[0];
  local_8 = 1;
  if (*local_18 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = *(int *)(*local_18 + 8);
  }
  iVar3 = FUN_00466e10();
  while (-1 < iVar3) {
    if (local_20 == 1) {
      *(char *)param_2 = (char)local_18[iVar3 + 0x43];
      *(undefined1 *)((int)param_2 + 1) = *(undefined1 *)((int)local_18 + iVar3 * 4 + 0x10d);
      *(undefined1 *)((int)param_2 + 2) = *(undefined1 *)((int)local_18 + iVar3 * 4 + 0x10e);
    }
    else {
      *param_2 = local_18[iVar3 + 0x43];
    }
    param_2 = (int *)((int)param_2 + local_30);
    local_1c = local_1c + 1;
    if (local_1c == local_2c) {
      local_1c = 0;
      if (param_1 == 0) {
        iVar5 = iVar5 + 1;
        if (local_28 <= iVar5) break;
      }
      else {
        iVar5 = iVar5 + iVar2;
        iVar3 = iVar4;
        while (iVar4 = iVar3, local_28 <= iVar5) {
          iVar3 = iVar4 + 1;
          if (iVar4 == 0) {
            iVar5 = 4;
            iVar2 = 8;
          }
          else {
            iVar5 = iVar4 + -1;
            if (iVar5 == 0) {
              iVar5 = 2;
              iVar2 = 4;
            }
            else {
              iVar2 = iVar4;
              if (iVar4 != 2) goto LAB_00467388;
            }
          }
        }
      }
      param_2 = (int *)(local_34 * iVar5 + (int)local_3c[0]);
    }
    iVar3 = FUN_00466e10();
  }
LAB_00467388:
  if (local_24 != (undefined4 *)0x0) {
    (**(code **)*local_24)(1);
  }
  ExceptionList = local_10;
  return 1;
}

