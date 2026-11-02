// rea decompile_all
// name: FUN_00493846
// address: 0x493846
// body: available
// range: 0x493846-0x49397b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00493846(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int in_EAX;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int *unaff_EDI;
  
  bVar3 = *(byte *)((int)unaff_EDI + 9);
  iVar2 = *unaff_EDI;
  if ((7 < bVar3) && (bVar1 = *(byte *)(unaff_EDI + 2), (bVar1 & 2) == 0)) {
    if (bVar1 == 0) {
      if (bVar3 == 8) {
        puVar4 = (undefined1 *)(iVar2 + -1 + in_EAX);
        puVar7 = puVar4 + iVar2 * 2;
        for (iVar9 = iVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar7 = *puVar4;
          puVar7[-1] = *puVar4;
          puVar7[-2] = *puVar4;
          puVar7 = puVar7 + -3;
          puVar4 = puVar4 + -1;
        }
      }
      else {
        puVar4 = (undefined1 *)(in_EAX + -1 + iVar2 * 2);
        puVar7 = puVar4 + iVar2 * 4;
        for (iVar9 = iVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar7 = *puVar4;
          puVar5 = puVar4 + -1;
          puVar7[-1] = *puVar5;
          puVar7[-2] = *puVar4;
          puVar7[-3] = *puVar5;
          puVar7[-4] = *puVar4;
          puVar7[-5] = *puVar5;
          puVar7 = puVar7 + -6;
          puVar4 = puVar4 + -2;
        }
      }
    }
    else if (bVar1 == 4) {
      if (bVar3 == 8) {
        puVar4 = (undefined1 *)(in_EAX + -1 + iVar2 * 2);
        puVar7 = puVar4 + iVar2 * 2;
        for (iVar9 = iVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar7 = *puVar4;
          puVar5 = puVar4 + -1;
          puVar7[-1] = *puVar5;
          puVar7[-2] = *puVar5;
          puVar7[-3] = *puVar5;
          puVar7 = puVar7 + -4;
          puVar4 = puVar4 + -2;
        }
      }
      else {
        puVar4 = (undefined1 *)(in_EAX + -1 + iVar2 * 4);
        puVar7 = puVar4 + iVar2 * 4;
        for (iVar9 = iVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar7 = *puVar4;
          puVar7[-1] = puVar4[-1];
          puVar8 = puVar4 + -2;
          puVar7[-2] = *puVar8;
          puVar5 = puVar4 + -3;
          puVar7[-3] = *puVar5;
          puVar7[-4] = *puVar8;
          puVar7[-5] = *puVar5;
          puVar7[-6] = *puVar8;
          puVar7[-7] = *puVar5;
          puVar7 = puVar7 + -8;
          puVar4 = puVar4 + -4;
        }
      }
    }
    *(char *)((int)unaff_EDI + 10) = *(char *)((int)unaff_EDI + 10) + '\x02';
    *(byte *)(unaff_EDI + 2) = *(byte *)(unaff_EDI + 2) | 2;
    bVar3 = *(char *)((int)unaff_EDI + 9) * *(char *)((int)unaff_EDI + 10);
    *(byte *)((int)unaff_EDI + 0xb) = bVar3;
    if (bVar3 < 8) {
      uVar6 = (uint)bVar3 * iVar2 + 7 >> 3;
    }
    else {
      uVar6 = (uint)(bVar3 >> 3) * iVar2;
    }
    unaff_EDI[1] = uVar6;
  }
  return;
}

