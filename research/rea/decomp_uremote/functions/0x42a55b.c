// rea decompile_all
// name: FUN_0042a55b
// address: 0x42a55b
// body: available
// range: 0x42a55b-0x42a605 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a55b(void)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *in_EDX;
  int unaff_ESI;
  
  puVar3 = *(undefined4 **)(unaff_ESI + 0x1a0);
  uVar1 = *(uint *)(unaff_ESI + 0x198);
  puVar4 = puVar3 + uVar1 * 5;
  if (puVar3 < puVar4) {
    do {
      if (puVar3[3] == *in_EDX) break;
      puVar3 = puVar3 + 5;
    } while (puVar3 < puVar4);
  }
  if (puVar3 == puVar4) {
    if (*(uint *)(unaff_ESI + 0x19c) <= uVar1) goto LAB_0042a5fd;
    *(uint *)(unaff_ESI + 0x198) = uVar1 + 1;
  }
  uVar1 = *in_EDX;
  if ((-1 < (int)uVar1) && ((int)uVar1 < 0x100)) {
    puVar3[3] = uVar1 & 0xff;
    puVar3[1] = *(int *)(unaff_ESI + 0x168) + 1;
    *puVar3 = *(undefined4 *)(unaff_ESI + 0x160);
    *(undefined1 *)(puVar3 + 4) = 1;
    if (*(uint *)(unaff_ESI + 0x1a8) < *in_EDX) {
      *(uint *)(unaff_ESI + 0x1a8) = *in_EDX & 0xff;
    }
    do {
      cVar2 = FUN_0042a209();
      if (cVar2 != '\0') {
        return;
      }
      cVar2 = *(char *)(unaff_ESI + 0x170);
      if (cVar2 == ',') break;
      if (cVar2 == '-') {
        return;
      }
    } while (cVar2 != -0x77);
    *(undefined4 *)(unaff_ESI + 0xc) = 0x89;
    return;
  }
LAB_0042a5fd:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x8d;
  return;
}

