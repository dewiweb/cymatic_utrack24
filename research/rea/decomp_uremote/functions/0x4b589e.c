// rea decompile_all
// name: FUN_004b589e
// address: 0x4b589e
// body: available
// range: 0x4b589e-0x4b5985 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b589e(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined1 *_Dst;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  size_t sVar9;
  undefined1 uStack_1d;
  int local_18;
  int local_14;
  size_t local_10;
  int local_c;
  
  iVar2 = *(int *)*in_ECX;
  iVar8 = ((int *)*in_ECX)[2] * 0x10 + iVar2;
  for (; iVar2 != iVar8; iVar2 = iVar2 + 0x10) {
    FUN_004a4c72(&local_18);
    if ((0 < (int)local_10) && (0 < local_c)) {
      iVar6 = local_c + local_14;
      for (iVar1 = local_14; iVar1 < iVar6; iVar1 = iVar1 + 1) {
        piVar3 = (int *)*unaff_ESI;
        iVar7 = piVar3[2] * iVar1 + *piVar3;
        unaff_ESI[1] = iVar7;
        iVar4 = piVar3[3];
        _Dst = (undefined1 *)(iVar4 * local_18 + iVar7);
        if (*(char *)((int)unaff_ESI + 0xb) == -1) {
          uVar5 = unaff_ESI[2];
          sVar9 = local_10;
          if (iVar4 == 1) {
            _memset(_Dst,uVar5 >> 0x18,local_10);
          }
          else {
            do {
              uStack_1d = (undefined1)(uVar5 >> 0x18);
              *_Dst = uStack_1d;
              _Dst = _Dst + iVar4;
              sVar9 = sVar9 - 1;
            } while (0 < (int)sVar9);
          }
        }
        else {
          FUN_004be407(unaff_ESI[2],local_10);
        }
      }
    }
  }
  return;
}

