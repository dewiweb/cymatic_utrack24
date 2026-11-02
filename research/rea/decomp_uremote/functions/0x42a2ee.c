// rea decompile_all
// name: FUN_0042a2ee
// address: 0x42a2ee
// body: available
// range: 0x42a2ee-0x42a394 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a2ee(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  uint *in_ECX;
  int unaff_ESI;
  undefined4 *puVar5;
  
  uVar1 = *(uint *)(unaff_ESI + 0x18c);
  uVar2 = *in_ECX;
  puVar5 = *(undefined4 **)(unaff_ESI + 0x194);
  puVar4 = puVar5 + uVar1 * 5;
  for (; (puVar5 < puVar4 && (puVar5[3] != uVar2)); puVar5 = puVar5 + 5) {
  }
  if (puVar5 == puVar4) {
    if (*(uint *)(unaff_ESI + 400) <= uVar1) goto LAB_0042a31e;
    *(uint *)(unaff_ESI + 0x18c) = uVar1 + 1;
  }
  if (uVar2 < 0x10000) {
    *puVar5 = *(undefined4 *)(unaff_ESI + 0x160);
    puVar5[3] = uVar2 & 0xffff;
    puVar5[1] = *(int *)(unaff_ESI + 0x168) + 1;
    *(undefined1 *)(puVar5 + 4) = 1;
    if (*(uint *)(unaff_ESI + 0x1a4) < uVar2) {
      *(uint *)(unaff_ESI + 0x1a4) = uVar2 & 0xffff;
    }
    do {
      cVar3 = FUN_0042a209();
      if (cVar3 != '\0') {
        return;
      }
      cVar3 = *(char *)(unaff_ESI + 0x170);
      if (cVar3 == ',') break;
      if (cVar3 == '-') {
        puVar5[2] = *(undefined4 *)(unaff_ESI + 0x168);
        return;
      }
    } while (cVar3 != -0x77);
    *(undefined4 *)(unaff_ESI + 0xc) = 0x89;
    return;
  }
LAB_0042a31e:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x8c;
  return;
}

