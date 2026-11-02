// rea decompile_all
// name: FUN_006eae30
// address: 0x6eae30
// body: available
// range: 0x6eae30-0x6eaeeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eae30(void)

{
  int in_ECX;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00728f21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0061d4e0(*(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),
               *(undefined8 *)(in_ECX + 0x28),DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_00633420();
  if ((local_18 <= local_20) && ((local_18 < local_20 || (local_1c <= local_24)))) {
    if (DAT_00c8a67c == 0) {
      operator_new(0xd0);
      local_8 = 0;
      DAT_00c8a67c = FUN_006cb960();
    }
    if (*(int *)(DAT_00c8a67c + 0x60) <= *(int *)(in_ECX + 0x30)) {
      ExceptionList = local_10;
      return;
    }
  }
  if ((undefined4 *)(in_ECX + -0x70) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(in_ECX + -0x70))();
  }
  ExceptionList = local_10;
  return;
}

