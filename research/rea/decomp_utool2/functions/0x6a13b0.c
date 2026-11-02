// rea decompile_all
// name: FUN_006a13b0
// address: 0x6a13b0
// body: available
// range: 0x6a13b0-0x6a1572 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a13b0(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 local_bc [40];
  undefined1 local_94 [40];
  undefined1 local_6c [40];
  undefined1 local_44 [16];
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  void *local_24 [3];
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722c86;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 != *(uint *)(in_ECX + 0xb0)) {
    FUN_006a00c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    (**(code **)(*(int *)(in_ECX + 0x70) + 4))(0);
    FUN_006a15d0(param_1);
    if (*(uint *)(in_ECX + 0xac) != param_1) {
      FUN_006a16e0(*(uint *)(in_ECX + 0xac));
      *(uint *)(in_ECX + 0xac) = param_1;
      FUN_006a16e0(param_1);
    }
    if (-1 < (int)param_1) {
      uVar2 = *(uint *)(in_ECX + 0xac);
      if (uVar2 < *(uint *)(in_ECX + 0x94)) {
        ppuVar6 = (undefined **)(*(int *)(in_ECX + 0x8c) + uVar2 * 4);
      }
      else {
        ppuVar6 = &PTR_DAT_00c7ed68;
      }
      (**(code **)(**(int **)(in_ECX + 0x88) + 0xc))(local_24,uVar2,ppuVar6);
      local_8 = 0;
      if ((local_18 == (undefined4 *)0x0) || (local_18[2] == 0)) {
        uVar3 = FUN_006e9580();
        FUN_006a0020(uVar3);
      }
      local_28 = *(undefined4 *)(in_ECX + 0x1c);
      if (param_1 + 1 < *(uint *)(in_ECX + 0xa0)) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x98) + (param_1 + 1) * 4);
      }
      else {
        iVar7 = 0;
      }
      if (param_1 < *(uint *)(in_ECX + 0xa0)) {
        iVar5 = *(int *)(*(int *)(in_ECX + 0x98) + param_1 * 4);
      }
      else {
        iVar5 = 0;
      }
      if (param_1 < *(uint *)(in_ECX + 0xa0)) {
        local_34 = *(undefined4 *)(*(int *)(in_ECX + 0x98) + param_1 * 4);
      }
      else {
        local_34 = 0;
      }
      iVar7 = iVar7 - iVar5;
      local_30 = 0;
      local_2c = iVar7;
      uVar3 = FUN_004b1be0(param_1);
      puVar10 = local_6c;
      uVar4 = FUN_006cf8b0(local_44,&local_34);
      puVar9 = local_94;
      puVar8 = local_bc;
      FUN_006d1110(puVar8);
      FUN_006d1070(puVar8,in_ECX);
      FUN_006a0450(puVar9,uVar4);
      uVar4 = FUN_006a0400(puVar10,iVar7);
      FUN_006a0120(uVar4,uVar3,0);
      if (local_18 != (undefined4 *)0x0) {
        LOCK();
        piVar1 = local_18 + 1;
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)*local_18)(1);
        }
      }
      FUN_004b00e0();
      FID_conflict__free(local_24[0]);
    }
  }
  ExceptionList = local_10;
  return;
}

