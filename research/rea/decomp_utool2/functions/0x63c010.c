// rea decompile_all
// name: FUN_0063c010
// address: 0x63c010
// body: available
// range: 0x63c010-0x63c0b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c010(void)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f58f;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  OleInitialize((LPVOID)0x0);
  operator_new(8);
  local_8 = 0;
  puVar3 = (ushort *)FUN_00427120(L"JUCEWindow",FUN_0063c3a0);
  puVar2 = DAT_00c8a91c;
  if (DAT_00c8a91c == puVar3) {
    DAT_00c8a650 = *(undefined4 *)(DAT_00c8a91c + 2);
  }
  else {
    if (DAT_00c8a91c != (ushort *)0x0) {
      puVar1 = DAT_00c8a91c + 2;
      DAT_00c8a91c = puVar3;
      DestroyWindow(*(HWND *)puVar1);
      UnregisterClassW((LPCWSTR)(uint)*puVar2,(HINSTANCE)0x0);
      FUN_004bfe14(puVar2,8);
      puVar3 = DAT_00c8a91c;
    }
    DAT_00c8a91c = puVar3;
    DAT_00c8a650 = *(undefined4 *)(DAT_00c8a91c + 2);
  }
  ExceptionList = local_10;
  return;
}

