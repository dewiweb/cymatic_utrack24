// rea decompile_all
// name: FUN_004f4889
// address: 0x4f4889
// body: available
// range: 0x4f4889-0x4f498c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004f4889(int *param_1,int *param_2,HIMC param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  uint dwBufLen;
  int *lpBuf;
  LONG LVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((param_3 != (HIMC)0x0) && ((param_4 & 0x20) != 0)) {
    dwBufLen = ImmGetCompositionStringW(param_3,0x20,(LPVOID)0x0,0);
    if (0 < (int)dwBufLen) {
      uVar7 = dwBufLen >> 2;
      lpBuf = _malloc(uVar7 << 2);
      LVar3 = ImmGetCompositionStringW(param_3,0x20,lpBuf,dwBufLen);
      if ((0 < LVar3) && (1 < uVar7)) {
        param_3 = (HIMC)0x1;
        piVar5 = lpBuf;
        do {
          iVar4 = *param_1;
          iVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          FUN_00439b5a(iVar6);
          iVar6 = iVar6 + iVar4;
          iVar4 = FUN_00439b5a(iVar6);
          if (param_2[1] < param_2[2] + 1) {
            FUN_004f792c();
          }
          iVar2 = param_2[2];
          param_2[2] = iVar2 + 1;
          piVar1 = (int *)(*param_2 + iVar2 * 8);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar6;
            piVar1[1] = iVar4;
          }
          param_3 = (HIMC)((int)param_3 + 1);
        } while (param_3 < uVar7);
      }
      _free(lpBuf);
    }
  }
  return param_2;
}

