// rea decompile_all
// name: FUN_0048a0f1
// address: 0x48a0f1
// body: available
// range: 0x48a0f1-0x48a14b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a0f1(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_ESI;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_ESI + 4))();
  *(undefined4 **)(unaff_ESI + 0x198) = puVar1;
  *puVar1 = FUN_00489621;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1 = (undefined4 *)(*(code *)**(undefined4 **)(unaff_ESI + 4))();
  iVar3 = 0;
  *(undefined4 **)(unaff_ESI + 0x8c) = puVar1;
  if (0 < *(int *)(unaff_ESI + 0x24)) {
    do {
      iVar3 = iVar3 + 1;
      puVar4 = puVar1;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = 0xffffffff;
        puVar4 = puVar4 + 1;
      }
      puVar1 = puVar1 + 0x40;
    } while (iVar3 < *(int *)(unaff_ESI + 0x24));
  }
  return;
}

