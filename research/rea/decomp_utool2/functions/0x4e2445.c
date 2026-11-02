// rea decompile_all
// name: decode_open_create_flags
// address: 0x4e2445
// body: available
// range: 0x4e2445-0x4e24b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    unsigned long __cdecl decode_open_create_flags(int)
   
   Library: Visual Studio 2015 Release */

ulong __cdecl decode_open_create_flags(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = param_1 & 0x700;
  if (uVar1 < 0x401) {
    if ((uVar1 == 0x400) || (uVar1 == 0)) {
      return 3;
    }
    if (uVar1 == 0x100) {
      return 4;
    }
    if (uVar1 != 0x200) {
      if (uVar1 == 0x300) {
        return 2;
      }
LAB_004e2497:
      piVar2 = __errno();
      *piVar2 = 0x16;
      FUN_004d0d1c();
      return 0xffffffff;
    }
  }
  else {
    if (uVar1 == 0x500) {
      return 1;
    }
    if (uVar1 != 0x600) {
      if (uVar1 == 0x700) {
        return 1;
      }
      goto LAB_004e2497;
    }
  }
  return 5;
}

