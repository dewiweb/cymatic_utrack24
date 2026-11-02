// rea decompile_all
// name: FUN_0063c6b0
// address: 0x63c6b0
// body: available
// range: 0x63c6b0-0x63c79b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0063c6b0(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined8 *_Memory;
  undefined4 *in_ECX;
  undefined8 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_0071f622;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = juce::ChildProcessMaster::vftable;
  if (in_ECX[2] != 0) {
    local_14 = 8;
    FID_conflict__free((void *)0x0);
    _Memory = (undefined8 *)FUN_004c554b(8);
    *_Memory = 0x5f6b5f6370695f5f;
    local_18 = _Memory;
    if (in_ECX[2] != 0) {
      FUN_0063cfd0(&local_18);
    }
    FID_conflict__free(_Memory);
    FUN_0063d140();
    puVar1 = (undefined4 *)in_ECX[2];
    if (puVar1 != (undefined4 *)0x0) {
      in_ECX[2] = 0;
      (**(code **)*puVar1)(1);
    }
  }
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1,uVar3);
  }
  pcVar2 = (char *)in_ECX[1];
  if (pcVar2 != (char *)0x0) {
    if (*pcVar2 != '\0') {
      CloseHandle(*(HANDLE *)(pcVar2 + 0x10));
      CloseHandle(*(HANDLE *)(pcVar2 + 0xc));
    }
    if (*(HANDLE *)(pcVar2 + 4) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(pcVar2 + 4));
    }
    if (*(HANDLE *)(pcVar2 + 8) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(pcVar2 + 8));
    }
    FUN_004bfe14(pcVar2,0x1c);
  }
  ExceptionList = local_10;
  return;
}

