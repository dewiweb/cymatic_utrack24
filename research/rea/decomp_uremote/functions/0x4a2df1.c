// rea decompile_all
// name: FUN_004a2df1
// address: 0x4a2df1
// body: available
// range: 0x4a2df1-0x4a2eb9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

float10 FUN_004a2df1(int *param_1)

{
  int iVar1;
  float fVar2;
  void *_Memory;
  void *_Memory_00;
  int *piVar3;
  int in_ECX;
  int iVar4;
  
  FUN_00466b09(&param_1);
  piVar3 = param_1;
  iVar4 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    iVar4 = iVar4 + 1;
    iVar1 = param_1[iVar4];
  }
  _Memory = _malloc(iVar4 * 2);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x2c))(*(int **)(in_ECX + 0x30),piVar3,iVar4,_Memory);
  _Memory_00 = _malloc(iVar4 * 0x1c);
  param_1 = _Memory_00;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x28))
            (*(int **)(in_ECX + 0x30),_Memory,iVar4,_Memory_00,0);
  param_1 = (int *)0x0;
  if (iVar4 != 0) {
    piVar3 = (int *)((int)_Memory_00 + 4);
    do {
      fVar2 = (float)*piVar3;
      if (*piVar3 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      piVar3 = piVar3 + 7;
      iVar4 = iVar4 + -1;
      param_1 = (int *)(fVar2 / (float)*(int *)(in_ECX + 0x40) + (float)param_1);
    } while (iVar4 != 0);
  }
  param_1 = (int *)(*(float *)(in_ECX + 0x34) * (float)param_1);
  _free(_Memory_00);
  _free(_Memory);
  return (float10)(float)param_1;
}

