// rea decompile_all
// name: FUN_00659060
// address: 0x659060
// body: available
// range: 0x659060-0x6590d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00659060(void)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  undefined4 in_EDX;
  int iVar3;
  
  iVar3 = CONCAT13((char)in_EDX,
                   CONCAT12((char)((uint)in_EDX >> 8),
                            CONCAT11((char)((uint)in_EDX >> 0x10),(char)((uint)in_EDX >> 0x18))));
  if ((in_ECX != 0) && (*(int *)(in_ECX + 0x20c) != 0)) {
    piVar1 = *(int **)(in_ECX + 0x210);
    piVar2 = (int *)((int)piVar1 + *(int *)(in_ECX + 0x20c) * 5);
    do {
      piVar2 = (int *)((int)piVar2 + -5);
      if (iVar3 == *piVar2) {
        __security_check_cookie
                  (DAT_00c76070 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc,piVar1,iVar3,0);
        return;
      }
    } while (piVar1 < piVar2);
  }
  __security_check_cookie(DAT_00c76070 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}

