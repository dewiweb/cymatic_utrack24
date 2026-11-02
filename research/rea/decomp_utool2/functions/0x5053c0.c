// rea decompile_all
// name: FUN_005053c0
// address: 0x5053c0
// body: available
// range: 0x5053c0-0x5055b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005053c0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *_Memory;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707a34;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = in_ECX;
  FUN_00411300(&local_14);
  local_8 = 0;
  uVar4 = FUN_005b4560(uVar3);
  local_8 = 0xffffffff;
  _Memory = (int *)(local_14 + -8);
  *(undefined4 *)(in_ECX + 0x94) = uVar4;
  if (_Memory != &DAT_00bfe124) {
    LOCK();
    iVar1 = *_Memory;
    *_Memory = *_Memory + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(_Memory);
    }
  }
  operator_new(0x30);
  local_8 = 1;
  iVar5 = FUN_0054a790(param_1);
  local_8 = 0xffffffff;
  iVar1 = *(int *)(in_ECX + 0x8c);
  if ((iVar1 != iVar5) && (*(int *)(in_ECX + 0x8c) = iVar5, iVar1 != 0)) {
    FUN_0054be70();
    FUN_004bfe14(iVar1,0x30);
  }
  operator_new(0x184);
  local_8 = 2;
  puVar6 = (undefined4 *)FUN_005192f0(1);
  local_8 = 0xffffffff;
  puVar2 = *(undefined4 **)(in_ECX + 0xab4);
  if ((puVar2 != puVar6) && (*(undefined4 **)(in_ECX + 0xab4) = puVar6, puVar2 != (undefined4 *)0x0)
     ) {
    (**(code **)*puVar2)(1);
  }
  FUN_004f9700(*(undefined4 *)(in_ECX + 0xab4),0,0,0xbff00000,0,0xbff00000);
  *(undefined4 *)(in_ECX + 0xf10) = 1;
  FUN_006e4900(&PTR_DAT_00c7ed68,0);
  FUN_006e6170(0x1000280,DAT_00c8a948);
  FUN_006e6170(0x1000281,DAT_00c8a948);
  FUN_00503b80();
  FUN_00504a40();
  *(undefined4 *)(in_ECX + 0xf10) = 1;
  FUN_006e4900(&PTR_DAT_00c7ed68,0);
  FUN_006e6170(0x1000280,DAT_00c8a948);
  FUN_006e6170(0x1000281,DAT_00c8a948);
  FUN_00503b80();
  if (*(int *)(in_ECX + 0xab4) != 0) {
    FUN_00518eb0();
  }
  if (*(int *)(in_ECX + 0xab8) != 0) {
    FUN_0052ddf0();
  }
  ExceptionList = local_10;
  return;
}

