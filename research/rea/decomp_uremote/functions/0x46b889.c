// rea decompile_all
// name: FUN_0046b889
// address: 0x46b889
// body: available
// range: 0x46b889-0x46b938 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046b889(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  int iVar7;
  int unaff_EDI;
  bool bVar8;
  
  iVar3 = *(int *)(in_EAX + 0xb5c + param_1 * 4);
  iVar7 = *(int *)(in_EAX + 0x1450);
  iVar6 = param_1 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar6 <= iVar7) {
    do {
      iVar7 = iVar6;
      if (bVar8 != iVar5 < 0) {
        iVar5 = *(int *)(in_EAX + 0xb60 + iVar6 * 4);
        uVar1 = *(ushort *)(unaff_EDI + iVar5 * 4);
        uVar2 = *(ushort *)(unaff_EDI + *(int *)(in_EAX + 0xb5c + iVar6 * 4) * 4);
        if ((uVar1 < uVar2) ||
           ((uVar1 == uVar2 &&
            (*(byte *)(iVar5 + 0x1458 + in_EAX) <=
             *(byte *)(*(int *)(in_EAX + 0xb5c + iVar6 * 4) + 0x1458 + in_EAX))))) {
          iVar7 = iVar6 + 1;
        }
      }
      iVar5 = *(int *)(in_EAX + 0xb5c + iVar7 * 4);
      uVar1 = *(ushort *)(unaff_EDI + iVar3 * 4);
      uVar2 = *(ushort *)(unaff_EDI + iVar5 * 4);
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar3 + 0x1458 + in_EAX) <= *(byte *)(iVar5 + 0x1458 + in_EAX))))) break;
      *(int *)(in_EAX + 0xb5c + param_1 * 4) = iVar5;
      iVar4 = *(int *)(in_EAX + 0x1450);
      iVar6 = iVar7 * 2;
      bVar8 = SBORROW4(iVar6,iVar4);
      iVar5 = iVar6 - iVar4;
      param_1 = iVar7;
    } while (iVar6 <= iVar4);
  }
  *(int *)(in_EAX + 0xb5c + param_1 * 4) = iVar3;
  return;
}

