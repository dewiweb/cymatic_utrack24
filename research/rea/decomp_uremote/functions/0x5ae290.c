// rea decompile_all
// name: shortsort
// address: 0x5ae290
// body: available
// range: 0x5ae290-0x5ae2ac inclusive
// range: 0x5ae2b0-0x5ae2ec inclusive
// range: 0x5ae2f0-0x5ae312 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _shortsort
   
   Library: Visual Studio 2008 Release */

void __cdecl shortsort(undefined1 *param_1,int param_2,code *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *in_EAX;
  int iVar3;
  undefined1 *puVar4;
  
  for (; puVar2 = param_1, puVar4 = param_1, param_1 < in_EAX; in_EAX = in_EAX + -param_2) {
    while (puVar4 = puVar4 + param_2, puVar4 <= in_EAX) {
      iVar3 = (*param_3)(puVar4,puVar2);
      if (0 < iVar3) {
        puVar2 = puVar4;
      }
    }
    if ((puVar2 != in_EAX) && (param_2 != 0)) {
      puVar4 = in_EAX;
      iVar3 = param_2;
      do {
        uVar1 = puVar4[(int)puVar2 - (int)in_EAX];
        puVar4[(int)puVar2 - (int)in_EAX] = *puVar4;
        iVar3 = iVar3 + -1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (iVar3 != 0);
    }
  }
  return;
}

