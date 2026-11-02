// rea decompile_all
// name: FUN_006b58e0
// address: 0x6b58e0
// body: available
// range: 0x6b58e0-0x6b5a63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b58e0(int param_1,undefined4 *param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 *puStack_38;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723e42;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((char)param_5 != '\0') {
    puStack_3c = &stack0xffffffd0;
    puStack_38 = (undefined4 *)0x1000202;
    uStack_40 = 0x6b5925;
    FUN_006e8e70();
    FUN_00684a80();
  }
  puStack_3c = &stack0xffffffd0;
  puStack_38 = (undefined4 *)0x1002820;
  uStack_40 = 0x6b593f;
  FUN_006e8e70();
  FUN_00684c50();
  param_2 = (undefined4 *)((float)param_4 * 0.7);
  operator_new(0x28);
  param_5 = (undefined4 *)FUN_00468a40();
  if (param_5 != (undefined4 *)0x0) {
    LOCK();
    param_5[1] = param_5[1] + 1;
    UNLOCK();
  }
  local_8 = 0;
  FUN_00643b30();
  if (*(char *)(puVar2 + 2) != '\0') {
    *(undefined1 *)(puVar2 + 2) = 0;
    (**(code **)(*(int *)*puVar2 + 0x34))();
  }
  (**(code **)(*(int *)*puVar2 + 0x68))();
  puStack_38 = &param_1;
  puStack_3c = (undefined1 *)0x6b59d9;
  uVar3 = FUN_0062a1b0();
  puStack_38 = (undefined4 *)(param_3 + -6);
  local_8 = CONCAT31(local_8._1_3_,1);
  puStack_3c = (undefined1 *)0x0;
  uStack_40 = 0x6b59f8;
  FUN_00472d90();
  puStack_38 = (undefined4 *)0x21;
  FUN_0040e4d0(auStack_48);
  FUN_006830c0(uVar3);
  piVar4 = (int *)(param_1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      puStack_38 = (undefined4 *)0x6b5a39;
      FID_conflict__free(piVar4);
    }
  }
  if (param_5 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_5 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      puStack_38 = (undefined4 *)0x6b5a51;
      (**(code **)*param_5)();
    }
  }
  ExceptionList = local_10;
  return;
}

