// rea decompile_all
// name: FUN_004b79e8
// address: 0x4b79e8
// body: available
// range: 0x4b79e8-0x4b7a9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b79e8(void)

{
  int iVar1;
  size_t _Size;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int in_EAX;
  int iVar5;
  undefined1 *_Dst;
  int *piVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int *piVar9;
  undefined1 uStack_15;
  size_t local_8;
  
  piVar9 = *(int **)(in_EAX + 8);
  piVar6 = piVar9 + *(int *)(in_EAX + 0x10) * 4;
  for (; piVar9 != piVar6; piVar9 = piVar9 + 4) {
    iVar1 = *piVar9;
    iVar8 = piVar9[1];
    _Size = piVar9[2];
    iVar5 = piVar9[3] + iVar8;
    for (; iVar8 < iVar5; iVar8 = iVar8 + 1) {
      piVar2 = (int *)*unaff_ESI;
      iVar7 = piVar2[2] * iVar8 + *piVar2;
      unaff_ESI[1] = iVar7;
      iVar3 = piVar2[3];
      _Dst = (undefined1 *)(iVar3 * iVar1 + iVar7);
      if (*(char *)((int)unaff_ESI + 0xb) == -1) {
        uVar4 = unaff_ESI[2];
        local_8 = _Size;
        if (iVar3 == 1) {
          _memset(_Dst,uVar4 >> 0x18,_Size);
        }
        else {
          do {
            uStack_15 = (undefined1)(uVar4 >> 0x18);
            *_Dst = uStack_15;
            _Dst = _Dst + iVar3;
            local_8 = local_8 - 1;
          } while (0 < (int)local_8);
        }
      }
      else {
        FUN_004be407(unaff_ESI[2],_Size);
      }
    }
  }
  return;
}

