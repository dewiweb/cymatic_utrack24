// rea decompile_all
// name: FUN_006449e0
// address: 0x6449e0
// body: available
// range: 0x6449e0-0x644ad0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006449e0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int *in_ECX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void **ppvVar6;
  void *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined1 local_44 [16];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071ffd3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_64 = (void *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_48 = 1;
  local_8 = 0;
  cVar1 = (**(code **)(*in_ECX + 0x1c))(param_1,&local_64,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar1 != '\0') {
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      FUN_00644920(&local_64);
      operator_new(0x20);
      ppvVar6 = &local_64;
      uVar5 = 0;
      uVar4 = 1;
      puVar3 = local_24;
      puVar2 = local_34;
      FUN_0067c320(local_44,param_2);
      FUN_0046f710(puVar2);
      uVar4 = FUN_0040e510(puVar3,uVar4,uVar5);
      uVar4 = FUN_0067da10(uVar4,ppvVar6,param_2);
      goto LAB_00644ab2;
    }
  }
  uVar4 = 0;
LAB_00644ab2:
  FID_conflict__free(local_64);
  ExceptionList = local_10;
  return uVar4;
}

