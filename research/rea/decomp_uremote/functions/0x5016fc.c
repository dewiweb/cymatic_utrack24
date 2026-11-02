// rea decompile_all
// name: FUN_005016fc
// address: 0x5016fc
// body: available
// range: 0x5016fc-0x501746 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005016fc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int unaff_ESI;
  int iVar2;
  
  uVar1 = *(uint *)(unaff_ESI + 4);
  iVar2 = in_ECX + 1;
  FUN_004fb67f(param_2,((uVar1 & 0xff00ff) * iVar2 >> 8 ^ (uVar1 >> 8 & 0xffff00ff) * iVar2) &
                       0xff00ff ^ (uVar1 >> 8 & 0xff00ff) * iVar2);
  return;
}

