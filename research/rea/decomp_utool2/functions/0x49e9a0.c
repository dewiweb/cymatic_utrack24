// rea decompile_all
// name: FUN_0049e9a0
// address: 0x49e9a0
// body: available
// range: 0x49e9a0-0x49eb44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049e9a0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  float10 fVar6;
  int in_XMM0_Da;
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 8) {
    if ((((iVar1 == 4) || (iVar1 == 5)) || (iVar1 == 6)) || (iVar1 == 7)) {
      local_88 = *(undefined8 *)(in_ECX + 0x58);
      local_8c = 0x49ea84;
      fVar6 = (float10)(**(code **)(**(int **)(in_ECX + 0x14) + 200))();
      local_8c = *(int *)(in_ECX + 0x14);
      local_90 = *(int *)(in_ECX + 0xd8);
      local_94 = *(int *)(in_ECX + 0xd4);
      fStack_98 = (float)fVar6;
      uStack_9c = *(undefined4 *)(in_ECX + 0x114);
      uStack_a0 = *(undefined4 *)(in_ECX + 0x110);
      uStack_a4 = *(undefined4 *)(in_ECX + 0x10c);
      uStack_a8 = *(undefined4 *)(in_ECX + 0x108);
      uStack_ac = param_1;
      uStack_b0 = 0x49eae0;
      (**(code **)(*(int *)(param_2 + 0x2c) + 0x14))();
    }
    else {
      uVar2 = *(undefined4 *)(in_ECX + 0x108);
      fVar3 = *(float *)(in_ECX + 0x114);
      uVar4 = *(undefined4 *)(in_ECX + 0x110);
      uVar5 = *(undefined4 *)(in_ECX + 0x10c);
      local_88 = CONCAT44(*(undefined4 *)(in_ECX + 0x14),iVar1);
      iVar1 = *(int *)(param_2 + 0x2c);
      local_8c = 0x49ea1f;
      FUN_0049c350();
      local_90 = 0x49ea33;
      local_8c = in_XMM0_Da;
      FUN_0049c350();
      local_94 = 0x49ea49;
      local_90 = in_XMM0_Da;
      FUN_0049c350();
      uStack_a8 = param_1;
      uStack_ac = 0x49ea64;
      uStack_a4 = uVar2;
      uStack_a0 = uVar5;
      uStack_9c = uVar4;
      fStack_98 = fVar3;
      local_94 = in_XMM0_Da;
      (**(code **)(iVar1 + 4))();
      in_ECX = local_8c;
    }
    if (((*(int *)(in_ECX + 0x18) == 2) || (*(int *)(in_ECX + 0x18) == 3)) &&
       (*(int *)(in_ECX + 0x140) == 0)) {
      puStack_b8 = (undefined1 *)&uStack_ac;
      uStack_b0 = 0;
      uStack_b4 = 0x1001700;
      FUN_006e8e70();
      uStack_b0 = 0x49eb10;
      FUN_00684c50();
      uStack_ac = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x1c);
      uStack_b0 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x18);
      uStack_b4 = 0;
      puStack_b8 = (undefined1 *)0x49eb26;
      FUN_00472d90();
      FUN_0040e4d0(&puStack_b8);
      FUN_00677150();
    }
  }
  return;
}

