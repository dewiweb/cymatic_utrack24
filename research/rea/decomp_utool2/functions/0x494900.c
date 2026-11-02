// rea decompile_all
// name: FUN_00494900
// address: 0x494900
// body: available
// range: 0x494900-0x494a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00494900(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  int *_Memory;
  int local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702338;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_1c = (undefined4 *)(in_ECX + 0x54);
  local_14 = in_ECX;
  if (*(undefined1 **)(in_ECX + 0x54) != &DAT_00bfe12c) {
    iVar3 = FUN_0045c1e0(*local_1c,&DAT_00bfe12c,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (iVar3 != 0) {
      FUN_00494ad0(1);
      if (*(int *)(in_ECX + 0x74) == 0) {
        FUN_00632170(in_ECX + 0x38,extraout_ECX);
      }
    }
  }
  iVar3 = *(int *)(in_ECX + 0x58);
  iVar4 = FUN_006e9580();
  uVar2 = *(undefined4 *)(in_ECX + 0x60);
  local_18 = (int *)(iVar4 + 0x10);
  bVar1 = *(byte *)(in_ECX + 0x30);
  local_20 = CONCAT31((int3)((uint)local_14 >> 8),*(undefined1 *)(local_14 + 0x6c));
  uVar5 = FUN_00636a10(&local_24);
  local_8 = 0;
  local_1c = (undefined4 *)*local_18;
  (**(code **)((int)local_1c + 0x10))
            (param_1,param_2,param_3,uVar5,local_14 + 0x74,local_14 + 0x78,local_14 + 0x7c,local_20,
             bVar1 & 1,uVar2,-(uint)(iVar3 != 0) & iVar3 + 0xb4U);
  _Memory = (int *)(local_24 + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar3 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  ExceptionList = local_10;
  return;
}

