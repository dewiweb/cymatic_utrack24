// rea decompile_all
// name: ___get_machine_control_sse2
// address: 0x4e2bdc
// body: available
// range: 0x4e2bdc-0x4e2c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    ___get_machine_control_sse2
   
   Library: Visual Studio 2015 Release */

uint ___get_machine_control_sse2(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 799) != 0) {
    if ((param_1 & 0x10) != 0) {
      uVar1 = 0x80;
    }
    if ((param_1 & 8) != 0) {
      uVar1 = uVar1 | 0x200;
    }
    if ((param_1 & 4) != 0) {
      uVar1 = uVar1 | 0x400;
    }
    if ((param_1 & 2) != 0) {
      uVar1 = uVar1 | 0x800;
    }
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 | 0x1000;
    }
    if ((param_1 & 0x300) == 0x300) {
      uVar1 = uVar1 | 0x6000;
    }
    else if ((param_1 & 0x200) == 0) {
      if ((param_1 & 0x100) != 0) {
        uVar1 = uVar1 | 0x4000;
      }
    }
    else {
      uVar1 = uVar1 | 0x2000;
    }
  }
  return uVar1;
}

