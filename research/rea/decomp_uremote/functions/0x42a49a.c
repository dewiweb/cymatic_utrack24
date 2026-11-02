// rea decompile_all
// name: FUN_0042a49a
// address: 0x42a49a
// body: available
// range: 0x42a49a-0x42a55a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a49a(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int unaff_ESI;
  
  uVar1 = param_1[1];
  uVar4 = *(int *)(unaff_ESI + 0x1a4) + 1;
  if (uVar1 < uVar4) {
    uVar3 = *(uint *)(unaff_ESI + 0x194);
    uVar2 = uVar1 * 0x14 + uVar3;
    if ((uVar4 != *(uint *)(unaff_ESI + 0x18c)) || (*(uint *)(uVar2 + 0xc) != uVar1)) {
      uVar4 = *(uint *)(unaff_ESI + 0x18c) * 0x14 + uVar3;
      for (; (uVar3 < uVar4 && (*(uint *)(uVar3 + 0xc) != uVar1)); uVar3 = uVar3 + 0x14) {
      }
      uVar2 = uVar3;
      if (uVar3 == uVar4) goto LAB_0042a4ec;
    }
    if (*(char *)(uVar2 + 0x10) != '\0') {
      if (*(int *)(unaff_ESI + 0x1b0) <= *(int *)(unaff_ESI + 0x1ac)) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x82;
        return;
      }
      if (*param_1 < 1) {
        return;
      }
      puVar5 = (undefined4 *)(*(int *)(unaff_ESI + 0x1ac) * 0x14 + *(int *)(unaff_ESI + 0x1b4));
      *puVar5 = *(undefined4 *)(unaff_ESI + 0x160);
      puVar5[1] = *(int *)(unaff_ESI + 0x168) + 1;
      puVar5[2] = *param_1;
      puVar5[3] = *(undefined4 *)(uVar2 + 4);
      puVar5[4] = *(undefined4 *)(uVar2 + 8);
      *(int *)(unaff_ESI + 0x1ac) = *(int *)(unaff_ESI + 0x1ac) + 1;
      FUN_004299cf();
      *(undefined1 *)(unaff_ESI + 0x178) = 0;
      return;
    }
  }
LAB_0042a4ec:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  return;
}

