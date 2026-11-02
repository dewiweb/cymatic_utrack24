// rea decompile_all
// name: FUN_005442e0
// address: 0x5442e0
// body: available
// range: 0x5442e0-0x5443d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005442e0(uint param_1)

{
  int in_ECX;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070ed9a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x18));
  local_8 = 0;
  if (param_1 == (-(uint)(in_ECX != -0x30) & in_ECX + 0x3cU)) {
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0xa0)) {
      do {
        FUN_00415fa0(&stack0xffffffd8);
        FUN_00542f10();
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0xa0));
    }
  }
  else if ((param_1 == (-(uint)(in_ECX != -100) & in_ECX + 0x70U)) &&
          (iVar1 = 0, 0 < *(int *)(in_ECX + 0xac))) {
    do {
      FUN_00415fa0(&stack0xffffffd8);
      FUN_00539700();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0xac));
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x18));
  ExceptionList = local_10;
  return;
}

