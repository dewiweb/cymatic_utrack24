// rea decompile_all
// name: thunk_FUN_00548700
// address: 0x5443f0
// body: available
// range: 0x5443f0-0x5443f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_00548700(void)

{
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0070f6b7;
  pvStack_10 = ExceptionList;
  ExceptionList = &pvStack_10;
  FUN_005b66b0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  iVar1 = DAT_00c8a5c4;
  iVar2 = DAT_00c8a5c4 + 8;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  if (*(int *)(iVar1 + 0x10) == 0) {
    *(undefined4 *)(iVar1 + 0xc) = 200;
    *(undefined4 *)(iVar1 + 0x10) = 200;
    uStack_8 = 0;
    if (DAT_00c8a668 == 0) {
      operator_new(0x54);
      DAT_00c8a668 = FUN_004635f0();
    }
    FUN_00463c00(iVar2);
  }
  else {
    FUN_00463b90();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a930);
  ExceptionList = pvStack_10;
  return;
}

