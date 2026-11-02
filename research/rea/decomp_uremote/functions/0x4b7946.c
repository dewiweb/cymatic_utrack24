// rea decompile_all
// name: FUN_004b7946
// address: 0x4b7946
// body: available
// range: 0x4b7946-0x4b79e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b7946(void)

{
  int iVar1;
  int iVar2;
  size_t _Size;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int in_EAX;
  int iVar6;
  undefined1 *_Dst;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *unaff_EDI;
  undefined1 uStack_15;
  size_t local_c;
  
  piVar9 = *(int **)(in_EAX + 8);
  piVar7 = piVar9 + *(int *)(in_EAX + 0x10) * 4;
  for (; piVar9 != piVar7; piVar9 = piVar9 + 4) {
    iVar1 = *piVar9;
    iVar2 = piVar9[1];
    _Size = piVar9[2];
    iVar6 = piVar9[3] + iVar2;
    for (; iVar2 < iVar6; iVar2 = iVar2 + 1) {
      piVar3 = (int *)*unaff_EDI;
      uVar4 = unaff_EDI[2];
      iVar8 = piVar3[2] * iVar2 + *piVar3;
      unaff_EDI[1] = iVar8;
      iVar5 = piVar3[3];
      _Dst = (undefined1 *)(iVar5 * iVar1 + iVar8);
      local_c = _Size;
      if (iVar5 == 1) {
        _memset(_Dst,uVar4 >> 0x18,_Size);
      }
      else {
        do {
          uStack_15 = (undefined1)(uVar4 >> 0x18);
          *_Dst = uStack_15;
          _Dst = _Dst + iVar5;
          local_c = local_c - 1;
        } while (0 < (int)local_c);
      }
    }
  }
  return;
}

