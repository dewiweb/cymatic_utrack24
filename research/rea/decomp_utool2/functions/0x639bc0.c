// rea decompile_all
// name: FUN_00639bc0
// address: 0x639bc0
// body: available
// range: 0x639bc0-0x639d4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00639bc0(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int local_44;
  int local_40;
  int *local_3c;
  void *local_38;
  int local_30;
  uint local_28;
  byte local_1c;
  undefined1 local_1b [7];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f27b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar3 = *(int **)(iVar1 + 0x18);
    for (piVar4 = piVar3; piVar4 != piVar3 + *(int *)(iVar1 + 0x20); piVar4 = piVar4 + 1) {
      if (*param_2 == *piVar4) {
        uVar5 = (int)piVar4 - (int)piVar3 >> 2;
        goto LAB_00639c22;
      }
    }
  }
  uVar5 = 0xffffffff;
LAB_00639c22:
  local_14 = uVar2;
  FUN_0062cb00(0x100);
  local_8 = 0;
  iVar1 = *param_1;
  if (iVar1 != 0) {
    LOCK();
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    UNLOCK();
  }
  FUN_00639f50(3,iVar1,0,0,0,uVar2);
  iVar1 = 0;
  for (uVar2 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f); uVar2 != 0; uVar2 = uVar2 >> 8)
  {
    local_1b[iVar1] = (char)uVar2;
    iVar1 = iVar1 + 1;
  }
  local_1c = (byte)iVar1;
  if ((int)uVar5 < 0) {
    local_1c = local_1c | 0x80;
  }
  (**(code **)(local_44 + 0x10))(&local_1c,iVar1 + 1);
  FUN_00461da0();
  if (local_3c != (int *)0x0) {
    if (local_28 < (uint)local_3c[1]) {
      *(undefined1 *)(local_28 + *local_3c) = 0;
    }
    local_30 = *local_3c;
  }
  (**(code **)(*in_ECX + 0x1c))(local_30,local_28);
  FUN_00622b80();
  FID_conflict__free(local_38);
  piVar3 = (int *)(local_40 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

