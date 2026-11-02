// rea decompile_all
// name: FUN_006ec650
// address: 0x6ec650
// body: available
// range: 0x6ec650-0x6ec855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006ec650(undefined4 *param_1)

{
  int iVar1;
  undefined *puVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729097;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00d00080) {
    FUN_004c0391(&DAT_00d00080,DAT_00c76070 ^ (uint)&stack0xfffffffc);
    if (DAT_00d00080 == -1) {
      FUN_0045c990("Error");
      DAT_00d00034 = 0xffcc0000;
      local_8 = 0;
      FUN_0045c990("Comment");
      DAT_00d0003c = 0xff3c3c3c;
      local_8._0_1_ = 1;
      FUN_0045c990("Keyword");
      _DAT_00d00044 = 0xff0000cc;
      local_8._0_1_ = 2;
      FUN_0045c990("Operator");
      _DAT_00d0004c = 0xff225500;
      local_8._0_1_ = 3;
      FUN_0045c990("Identifier");
      _DAT_00d00054 = 0xff000000;
      local_8._0_1_ = 4;
      FUN_0045c990("Integer");
      _DAT_00d0005c = 0xff880000;
      local_8._0_1_ = 5;
      FUN_0045c990("Float");
      _DAT_00d00064 = 0xff885500;
      local_8._0_1_ = 6;
      FUN_0045c990("String");
      _DAT_00d0006c = 0xff990099;
      local_8._0_1_ = 7;
      FUN_0045c990("Bracket");
      _DAT_00d00074 = 0xff000055;
      local_8 = CONCAT31(local_8._1_3_,8);
      FUN_0045c990("Punctuation");
      _DAT_00d0007c = 0xff004400;
      _atexit((_func_4879 *)&LAB_0072bc50);
      FUN_004c0352(&DAT_00d00080);
    }
  }
  puVar2 = &DAT_00d00030;
  iVar1 = 10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    FUN_006ed090(puVar2,*(undefined4 *)(puVar2 + 4));
    puVar2 = puVar2 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_10;
  return param_1;
}

