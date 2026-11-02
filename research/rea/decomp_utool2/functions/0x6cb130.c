// rea decompile_all
// name: FUN_006cb130
// address: 0x6cb130
// body: available
// range: 0x6cb130-0x6cb23f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006cb130(void)

{
  int in_ECX;
  undefined1 local_1c [4];
  undefined4 local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00726338;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x2c) == 0) {
    FUN_0063eab0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
    if (*(int *)(in_ECX + 0xc) == 0) {
      *(undefined4 *)(in_ECX + 8) = 100;
      *(undefined4 *)(in_ECX + 0xc) = 100;
      local_8 = 0;
      if (DAT_00c8a668 == 0) {
        operator_new(0x54);
        DAT_00c8a668 = FUN_004635f0();
      }
      FUN_00463c00(in_ECX + 4);
      local_8 = 0xffffffff;
    }
    else {
      FUN_00463b90();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  }
  if (DAT_00c8a67c == 0) {
    local_14 = operator_new(0xd0);
    local_8 = 1;
    DAT_00c8a67c = FUN_006cb960();
  }
  FUN_006cb390(local_1c);
  FUN_0048e190(&local_18);
  *(undefined4 *)(in_ECX + 0x58) = local_18;
  *(void **)(in_ECX + 0x5c) = local_14;
  ExceptionList = local_10;
  return;
}

