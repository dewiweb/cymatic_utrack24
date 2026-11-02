// rea decompile_all
// name: FUN_00426640
// address: 0x426640
// body: available
// range: 0x426640-0x426764 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00426640(void *param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 in_EDX;
  undefined4 in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined4 local_24;
  
  if (in_stack_00000018 * 2 <= in_stack_0000001c) {
    do {
      iVar1 = in_stack_00000018 * 4 + in_ECX;
      in_ECX = in_stack_00000018 * 4 + iVar1;
      iVar1 = FUN_00426c90(iVar1,iVar1,in_ECX,0,0,0,0,in_stack_00000014);
      in_stack_00000014 = *(undefined4 *)(iVar1 + 0x10);
      if (local_24 != (void *)0x0) {
        FID_conflict__free(local_24);
      }
      in_stack_0000001c = in_stack_0000001c + in_stack_00000018 * -2;
    } while (in_stack_00000018 * 2 <= in_stack_0000001c);
  }
  if (in_stack_00000018 < in_stack_0000001c) {
    iVar1 = in_ECX + in_stack_00000018 * 4;
    FUN_00426c90(iVar1,iVar1,in_EDX,0,0,0,0,in_stack_00000014);
  }
  else {
    FUN_00426800(in_EDX,0,0,0,0,in_stack_00000014);
  }
  if (local_24 != (void *)0x0) {
    FID_conflict__free(local_24);
  }
  if (param_1 != (void *)0x0) {
    FID_conflict__free(param_1);
  }
  return;
}

