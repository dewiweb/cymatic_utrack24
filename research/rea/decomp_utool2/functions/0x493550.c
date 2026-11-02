// rea decompile_all
// name: FUN_00493550
// address: 0x493550
// body: available
// range: 0x493550-0x493770 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493550(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *_Memory;
  undefined1 local_50 [16];
  undefined1 local_40 [12];
  int local_34;
  int local_30 [4];
  undefined1 local_20 [4];
  void *local_1c;
  double local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007022d8;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_006e6400(local_40);
  iVar2 = FUN_006e9580(uVar1);
  uVar3 = (**(code **)(*(int *)(iVar2 + 0x10) + 0xc))(local_30,in_ECX + 4,in_ECX + 0x314);
  local_8 = 0;
  FUN_00684960(uVar3);
  local_8 = 0xffffffff;
  FUN_00471bf0();
  FID_conflict__free(local_1c);
  _Memory = (int *)(local_30[0] + -8);
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar2 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  local_18 = (double)*(float *)(in_ECX + 0x328) + 6755399441055744.0;
  FUN_0040dd60(local_20,local_18._0_4_ + 10);
  puVar4 = (undefined4 *)FUN_0040dd60(local_20,local_34 + -0x2e);
  FUN_006e9790(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  FUN_00418f80(local_20,0x10,10);
  uVar3 = FUN_006c65e0(0x1a);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),uVar3,0x1a);
  puVar4 = (undefined4 *)FUN_0040dcd0(local_40,*(int *)(in_ECX + 0x8c) + 0x10);
  FUN_006e9790(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  FUN_0040dcd0(local_40,0x10);
  uVar3 = FUN_006c65e0(0x1a);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x164),*(undefined4 *)(in_ECX + 0x168),uVar3,0x1a);
  puVar4 = (undefined4 *)FUN_0040dcd0(local_40,*(undefined4 *)(in_ECX + 0x16c));
  FUN_006e9790(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  uVar3 = FUN_006c65e0(0x1a);
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x244),*(undefined4 *)(in_ECX + 0x248),uVar3,0x1a);
  puVar4 = (undefined4 *)FUN_0040dd10(local_50,*(undefined4 *)(in_ECX + 0x24c));
  FUN_006e9790(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  ExceptionList = local_10;
  return;
}

