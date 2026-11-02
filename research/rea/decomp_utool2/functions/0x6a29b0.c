// rea decompile_all
// name: FUN_006a29b0
// address: 0x6a29b0
// body: available
// range: 0x6a29b0-0x6a2bb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a29b0(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined1 *local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 *local_64;
  void *pvStack_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722e0b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_64 = (undefined4 *)0x6a29f4;
  iVar2 = FUN_00465820();
  local_70 = (undefined1 *)&uStack_6c;
  local_18 = *(undefined4 *)(iVar2 + 8);
  local_68 = 0;
  local_14 = (float)(param_1 >> 0x18) / 255.0;
  FUN_006841a0();
  FUN_00684210(&local_70);
  FUN_006840c0();
  local_8 = 0;
  local_64 = (undefined4 *)0x6a2a6c;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  local_64 = (undefined4 *)0x6a2a7b;
  FID_conflict__free(pvStack_38);
  cVar1 = (**(code **)(*(int *)*in_ECX + 0x30))();
  if (cVar1 == '\0') {
    cVar1 = FUN_00682580();
    if (cVar1 == '\0') {
      local_68 = 0x6a2abb;
      (**(code **)(*(int *)*in_ECX + 0x5c))();
    }
  }
  local_14 = local_14 * 0.4;
  local_64 = (undefined4 *)&stack0xffffffa0;
  local_68 = 0x6a2ae6;
  FUN_006842b0();
  local_64 = (undefined4 *)0x6a2aed;
  FUN_00684c50();
  local_64 = &local_2c;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  uStack_6c = 0x6a2b52;
  FUN_00682be0();
  local_64 = (undefined4 *)&stack0xffffffa0;
  local_68 = 0x6a2b63;
  FUN_006842b0();
  local_64 = (undefined4 *)0x6a2b6a;
  FUN_00684c50();
  local_64 = &local_2c;
  local_2c = 0x3f800000;
  local_28 = 0;
  local_24 = 0;
  uStack_6c = 0x6a2ba8;
  FUN_00682be0();
  ExceptionList = local_10;
  return;
}

