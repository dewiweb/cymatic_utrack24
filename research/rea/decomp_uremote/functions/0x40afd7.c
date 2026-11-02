// rea decompile_all
// name: FUN_0040afd7
// address: 0x40afd7
// body: available
// range: 0x40afd7-0x40b00a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0040afd7(void)

{
  short sVar1;
  uint in_EAX;
  uint uVar2;
  int in_ECX;
  int extraout_ECX;
  short *psVar3;
  
  psVar3 = *(short **)(in_ECX + 0x488);
  if ((psVar3 != (short *)0x0) && (in_EAX < 0x100)) {
    sVar1 = FUN_00408adc();
    uVar2 = 0;
    if (*(uint *)(extraout_ECX + 0xc) != 0) {
      do {
        if (*psVar3 == sVar1) {
          return uVar2;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (uVar2 < *(uint *)(extraout_ECX + 0xc));
    }
  }
  return 0xffffffff;
}

