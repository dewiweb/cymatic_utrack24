// rea decompile_all
// name: FUN_0042c23d
// address: 0x42c23d
// body: available
// range: 0x42c23d-0x42c2d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042c23d(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_ESI;
  
  uVar4 = *(uint *)(unaff_ESI + 0x1a0);
  uVar2 = *(int *)(unaff_ESI + 0x198) * 0x14 + uVar4;
  if (uVar4 < uVar2) {
    do {
      if ((*(char *)(uVar4 + 0xc) == *(char *)(unaff_ESI + 0x170)) &&
         (*(char *)(uVar4 + 0x10) != '\0')) {
        iVar1 = *(int *)(unaff_ESI + 0x1ac);
        if (*(int *)(unaff_ESI + 0x1b0) <= iVar1) {
          *(undefined4 *)(unaff_ESI + 0xc) = 0x82;
          return;
        }
        puVar3 = (undefined4 *)(iVar1 * 0x14 + *(int *)(unaff_ESI + 0x1b4));
        *(int *)(unaff_ESI + 0x1ac) = iVar1 + 1;
        *puVar3 = *(undefined4 *)(unaff_ESI + 0x160);
        puVar3[1] = *(int *)(unaff_ESI + 0x168) + 1;
        puVar3[2] = 1;
        puVar3[3] = *(undefined4 *)(uVar4 + 4);
        puVar3[4] = *(undefined4 *)(uVar4 + 8);
        FUN_004299cf();
        *(undefined1 *)(unaff_ESI + 0x178) = 0;
        return;
      }
      uVar4 = uVar4 + 0x14;
    } while (uVar4 < uVar2);
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0x80;
  return;
}

