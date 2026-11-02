// rea decompile_all
// name: __getfpstatusword
// address: 0x4e2d61
// body: available
// range: 0x4e2d61-0x4e2e08 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __getfpstatusword
   
   Library: Visual Studio 2015 Release */

uint __getfpstatusword(void)

{
  uint uVar1;
  uint uVar2;
  ushort in_FPUStatusWord;
  undefined4 local_c;
  
  uVar2 = 0;
  local_c = 0;
  if (0 < DAT_00c89e14) {
    local_c = MXCSR;
  }
  uVar1 = 0;
  if ((in_FPUStatusWord & 0x3d) != 0) {
    if ((in_FPUStatusWord & 1) != 0) {
      uVar1 = 0x100010;
    }
    if ((in_FPUStatusWord & 4) != 0) {
      uVar1 = uVar1 | 0x80008;
    }
    if ((in_FPUStatusWord & 8) != 0) {
      uVar1 = uVar1 | 0x40004;
    }
    if ((in_FPUStatusWord & 0x10) != 0) {
      uVar1 = uVar1 | 0x20002;
    }
    if ((in_FPUStatusWord & 0x20) != 0) {
      uVar1 = uVar1 | 0x10001;
    }
  }
  if ((local_c & 0x3d) != 0) {
    if ((local_c & 1) != 0) {
      uVar2 = 0x10000010;
    }
    if ((local_c & 4) != 0) {
      uVar2 = uVar2 | 0x8000008;
    }
    if ((local_c & 8) != 0) {
      uVar2 = uVar2 | 0x4000004;
    }
    if ((local_c & 0x10) != 0) {
      uVar2 = uVar2 | 0x2000002;
    }
    if ((local_c & 0x20) != 0) {
      uVar2 = uVar2 | 0x1000001;
    }
  }
  return uVar1 | uVar2;
}

