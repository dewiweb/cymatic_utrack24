// rea decompile_all
// name: FUN_00455910
// address: 0x455910
// body: available
// range: 0x455910-0x4559d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00455910(undefined4 param_1)

{
  void *pvVar1;
  locale *plVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007002ba;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00459840(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  pvVar1 = ThreadLocalStoragePointer;
  local_8 = 0;
  *in_ECX = juce::NumberToStringConverters::StackArrayStream::vftable;
  if (*(int *)(*(int *)pvVar1 + 4) < DAT_00cfff30) {
    FUN_004c0391(&DAT_00cfff30);
    if (DAT_00cfff30 == -1) {
      local_8._0_1_ = 1;
      plVar2 = std::locale::classic();
      local_8 = CONCAT31(local_8._1_3_,2);
      DAT_00cfff2c = *(int **)(plVar2 + 4);
      (**(code **)(*DAT_00cfff2c + 4))();
      _atexit(FUN_0072a2f0);
      FUN_004c0352(&DAT_00cfff30);
    }
  }
  *(undefined4 *)in_ECX[4] = param_1;
  *(undefined4 *)in_ECX[8] = param_1;
  *(undefined4 *)in_ECX[0xc] = 0x30;
  ExceptionList = local_10;
  return;
}

