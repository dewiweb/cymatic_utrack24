// rea decompile_all
// name: FUN_00419069
// address: 0x419069
// body: available
// range: 0x419069-0x4190c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00419069(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  undefined4 *unaff_ESI;
  
  pcVar2 = (char *)*unaff_ESI;
  pcVar1 = pcVar2 + 3;
  uVar3 = 0;
  if ((((pcVar1 < param_1) && (*pcVar2 == 't')) && (pcVar2[1] == 'r')) &&
     ((pcVar2[2] == 'u' && (*pcVar1 == 'e')))) {
    uVar3 = 1;
    pcVar2 = pcVar2 + 5;
  }
  else if ((((pcVar2 + 4 < param_1) && ((*pcVar2 == 'f' && (pcVar2[1] == 'a')))) &&
           (pcVar2[2] == 'l')) && ((*pcVar1 == 's' && (pcVar2[4] == 'e')))) {
    uVar3 = 0;
    pcVar2 = pcVar2 + 6;
  }
  *unaff_ESI = pcVar2;
  return uVar3;
}

