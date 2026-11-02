// rea decompile_all
// name: FUN_00690b20
// address: 0x690b20
// body: available
// range: 0x690b20-0x690c57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00690b20(void)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072192c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0xad) != '\0') {
    *(undefined1 *)(in_ECX + 0xad) = 0;
    iStack_34 = 0x690b6e;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x84));
    local_8 = 0;
    if (*(int *)(in_ECX + 0x9c) != 0) {
      iStack_34 = 0x690b97;
      FUN_00690440();
    }
    iVar1 = *(int *)(*(int *)(in_ECX + 0x80) + 0x78);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 8);
    }
    if (iVar1 != 0) {
      FUN_004a3860();
    }
    FUN_006e6400(&uStack_3c);
    FUN_006ce9f0(1);
    if (*(int *)(in_ECX + 0x9c) == 0) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x80) + 0x78);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
      iStack_34 = 0;
    }
    else {
      iStack_34 = *(int *)(*(int *)(in_ECX + 0x80) + 0xb8);
      iVar1 = *(int *)(*(int *)(in_ECX + 0x80) + 0x78);
      iVar2 = *(int *)(*(int *)(in_ECX + 0x9c) + 0x28) + 0x32;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(iVar1 + 8);
      }
      if (iStack_34 < iVar2) {
        iStack_34 = iVar2;
      }
    }
    uStack_38 = *(undefined4 *)(iVar1 + 0x14);
    uStack_3c = *(undefined4 *)(iVar1 + 0x10);
    FUN_006e9790();
    iStack_34 = 0x690c46;
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x84));
  }
  ExceptionList = local_10;
  return;
}

