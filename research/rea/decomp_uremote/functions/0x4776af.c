// rea decompile_all
// name: FUN_004776af
// address: 0x4776af
// body: available
// range: 0x4776af-0x4778cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004776af(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  double _X;
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iStack00000010;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  
  *param_1 = 0;
  param_1[1] = *param_2;
  param_1[2] = param_2[1];
  param_1[3] = param_2[2];
  param_1[4] = param_2[3];
  param_1[5] = 0x20;
  param_1[6] = 0x41;
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_00477dfd();
  puVar11 = (undefined4 *)*param_1;
  iVar4 = param_1[4];
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    *puVar11 = 0;
    puVar11 = puVar11 + param_1[6];
  }
  iVar4 = param_1[1];
  iVar1 = param_1[2];
  iVar5 = (param_1[3] + param_1[1]) * 0x100;
  iVar2 = param_1[4];
  FUN_0047b417();
  while (cVar3 = FUN_0047b4ad(), cVar3 != '\0') {
    iVar6 = FUN_004a8e4a();
    iVar7 = FUN_004a8e4a();
    if (iVar6 != iVar7) {
      iVar6 = iVar6 + iVar1 * -0x100;
      iVar7 = iVar7 + iVar1 * -0x100;
      iStack00000010 = -1;
      iVar12 = iVar6;
      if (iVar7 < iVar6) {
        iStack00000010 = 1;
        iVar12 = iVar7;
        iVar7 = iVar6;
      }
      if (iVar12 < 0) {
        iVar12 = 0;
      }
      if (iVar2 << 8 < iVar7) {
        iVar7 = iVar2 << 8;
      }
      if (iVar12 < iVar7) {
        _X = (double)((local_8c - local_94) / (local_88 - local_90));
        _fabs(_X);
        FUN_005b3fb0();
        FUN_00470645(1,0x100);
        do {
          iVar8 = FUN_004a8e78();
          iVar9 = FUN_00470221((double)(((iVar8 >> 1) - iVar6) + iVar12) * _X +
                               (double)(local_94 * 256.0));
          iVar10 = iVar4 << 8;
          if ((iVar4 << 8 <= iVar9) && (iVar10 = iVar9, iVar5 <= iVar9)) {
            iVar10 = iVar5 + -1;
          }
          FUN_00477fa6(iVar10,iVar12 >> 8,iVar8 * iStack00000010);
          iVar12 = iVar12 + iVar8;
        } while (iVar12 < iVar7);
      }
    }
  }
  FUN_00477e77(param_1,*(undefined1 *)(param_3 + 0x1c));
  FUN_0047b476();
  return param_1;
}

