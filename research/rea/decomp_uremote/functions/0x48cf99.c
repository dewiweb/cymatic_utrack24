// rea decompile_all
// name: FUN_0048cf99
// address: 0x48cf99
// body: available
// range: 0x48cf99-0x48cffa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0048cf99(void)

{
  byte *pbVar1;
  int in_EAX;
  int *piVar2;
  int in_ECX;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  
  piVar2 = (int *)(*(code *)**(undefined4 **)(in_EAX + 4))();
  puVar4 = &DAT_005ff398;
  piVar5 = piVar2;
  do {
    iVar3 = 0;
    do {
      pbVar1 = puVar4 + iVar3;
      iVar3 = iVar3 + 1;
      *piVar5 = (int)((uint)*pbVar1 * -0x1fe + 0xfe01) / (in_ECX * 0x200 + -0x200);
      piVar5 = piVar5 + 1;
    } while (iVar3 < 0x10);
    puVar4 = puVar4 + 0x10;
  } while ((int)puVar4 < 0x5ff498);
  return piVar2;
}

