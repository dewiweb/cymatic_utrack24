// rea decompile_all
// name: copy_environ
// address: 0x5cb1fb
// body: available
// range: 0x5cb1fb-0x5cb254 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _copy_environ
   
   Library: Visual Studio 2008 Release */

undefined4 * __cdecl copy_environ(void)

{
  int iVar1;
  int *in_EAX;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)0x0;
  if (in_EAX != (int *)0x0) {
    iVar1 = *in_EAX;
    piVar4 = in_EAX;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
      iVar1 = *piVar4;
    }
    puVar2 = __calloc_crt((int)puVar2 + 1,4);
    puVar5 = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      __amsg_exit(9);
    }
    for (; (char *)*in_EAX != (char *)0x0; in_EAX = in_EAX + 1) {
      pcVar3 = __strdup((char *)*in_EAX);
      *puVar5 = pcVar3;
      puVar5 = puVar5 + 1;
    }
    *puVar5 = 0;
  }
  return puVar2;
}

