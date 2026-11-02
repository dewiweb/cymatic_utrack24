// rea decompile_all
// name: FUN_00498936
// address: 0x498936
// body: available
// range: 0x498936-0x4989f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4989ee to 0x4988e9 FUN_004988e9 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498936(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int unaff_ESI;
  
  puVar1 = (uint *)(unaff_ESI + 0xcc);
  *puVar1 = *puVar1 + 1;
  if (*puVar1 < *(uint *)(unaff_ESI + 0xbc)) {
    return;
  }
  if (*(char *)(unaff_ESI + 0x108) != '\0') {
    *puVar1 = 0;
    _memset(*(void **)(unaff_ESI + 0xd4),0,*(int *)(unaff_ESI + 0xc4) + 1);
    do {
      *(char *)(unaff_ESI + 0x109) = *(char *)(unaff_ESI + 0x109) + '\x01';
      bVar2 = *(byte *)(unaff_ESI + 0x109);
      if (6 < bVar2) goto LAB_004989ea;
      uVar3 = ((*(int *)(unaff_ESI + 0xb4) - (uint)(byte)(&DAT_00919fe8)[bVar2]) + -1 +
              (uint)(byte)(&DAT_0091a74c)[bVar2]) / (uint)(byte)(&DAT_0091a74c)[bVar2];
      *(uint *)(unaff_ESI + 200) = uVar3;
    } while (((*(byte *)(unaff_ESI + 0x30) & 2) == 0) &&
            ((uVar4 = ((*(int *)(unaff_ESI + 0xb8) - (uint)(byte)(&UNK_00919ff0)[bVar2]) + -1 +
                      (uint)(byte)(&UNK_00919ff8)[bVar2]) / (uint)(byte)(&UNK_00919ff8)[bVar2],
             *(uint *)(unaff_ESI + 0xbc) = uVar4, uVar4 == 0 || (uVar3 == 0))));
    if (*(byte *)(unaff_ESI + 0x109) < 7) {
      return;
    }
  }
LAB_004989ea:
  FUN_004988e9();
  return;
}

