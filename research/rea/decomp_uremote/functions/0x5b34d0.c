// rea decompile_all
// name: __fpreset
// address: 0x5b34d0
// body: available
// range: 0x5b34d0-0x5b3507 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __fpreset
   
   Library: Visual Studio 2008 Release */

void __cdecl __fpreset(void)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  
  piVar3 = (int *)FUN_005c36d4();
  iVar1 = *piVar3;
  __setdefaultprecision();
  ___set_fpsr_sse2(0x1f80);
  if ((iVar1 != 0) && (puVar2 = *(uint **)(iVar1 + 4), (*puVar2 & 0x10008) != 0)) {
    puVar2[8] = 0;
    puVar2[9] = 0xffff;
  }
  return;
}

