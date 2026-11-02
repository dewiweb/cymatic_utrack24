// rea decompile_all
// name: FUN_0040cdb0
// address: 0x40cdb0
// body: available
// range: 0x40cdb0-0x40d025 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040cdb0(uint param_1,undefined4 param_2,int param_3,int param_4,char param_5)

{
  int iVar1;
  undefined **ppuVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined1 uVar5;
  undefined1 *puVar6;
  int *local_c0;
  int *local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined1 *local_b0;
  undefined *local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined1 *local_3c;
  undefined1 local_38 [20];
  int local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc790;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_78 = param_2;
  if (*(uint *)(in_ECX + 0x20) <= param_1) goto LAB_0040d008;
  if (param_5 != '\0') {
    local_b0 = &stack0xffffff54;
    uStack_b4 = 0;
    uStack_b8 = 0x1000202;
    local_bc = &local_7c;
    local_c0 = (int *)0x40ce10;
    FUN_006e8e70();
    uStack_b4 = 0x40ce1f;
    FUN_00684d10();
    local_b0 = (undefined1 *)0x40ce26;
    FUN_00684a80();
  }
  if (param_1 < *(uint *)(in_ECX + 0x20)) {
    ppuVar2 = (undefined **)(*(int *)(in_ECX + 0x18) + param_1 * 4);
  }
  else {
    ppuVar2 = &PTR_DAT_00c7ed68;
  }
  local_84 = *ppuVar2;
  piVar3 = (int *)(local_84 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_005ced70();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_b0 = (undefined1 *)0x40ce69;
  FUN_0040da30();
  iVar1 = param_1 * 2;
  if ((local_24 < iVar1) || (iVar1 < 0)) {
LAB_0040cea2:
    iVar1 = iVar1 + 1;
    if ((iVar1 <= local_24) && (-1 < iVar1)) {
      puVar6 = local_38;
      if (local_3c != (undefined1 *)0x0) {
        puVar6 = local_3c;
      }
      if ((*(uint *)(puVar6 + (iVar1 >> 5) * 4) & 1 << ((byte)iVar1 & 0x1f)) != 0)
      goto LAB_0040cece;
    }
    uVar5 = 0;
  }
  else {
    puVar6 = local_38;
    if (local_3c != (undefined1 *)0x0) {
      puVar6 = local_3c;
    }
    if ((*(uint *)(puVar6 + (iVar1 >> 5) * 4) & 1 << ((byte)iVar1 & 0x1f)) == 0) goto LAB_0040cea2;
LAB_0040cece:
    uVar5 = 1;
  }
  local_7c = *(int *)(in_ECX + -0x20) + 5;
  local_80 = CONCAT31(local_80._1_3_,uVar5);
  piVar3 = (int *)((float)param_4 * 0.75);
  iVar4 = FUN_006e9580();
  iVar1 = local_7c;
  local_b0 = (undefined1 *)0x1;
  uStack_b4 = 1;
  uStack_b8 = local_80;
  local_c0 = piVar3;
  local_bc = piVar3;
  (**(code **)(*(int *)(iVar4 + 4) + 0x1c))
            (local_78,in_ECX + -0xac,(float)local_7c - (float)piVar3,
             ((float)param_4 - (float)piVar3) * 0.5);
  FUN_00684bc0();
  local_b0 = &stack0xffffff54;
  uStack_b4 = 0x40cf98;
  FUN_00684d10();
  local_b0 = (undefined1 *)0x40cf9f;
  FUN_00684c50();
  local_b0 = (undefined1 *)((param_3 - iVar1) + -2);
  uStack_b4 = 0;
  uStack_b8 = 0x40cfba;
  FUN_00472d90();
  local_b0 = (undefined1 *)0x21;
  FUN_0040e4d0(&local_c0);
  FUN_006830c0(&local_84);
  FUN_0040d9d0();
  piVar3 = (int *)(local_84 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      local_b0 = (undefined1 *)0x40d005;
      FID_conflict__free(piVar3);
    }
  }
LAB_0040d008:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

