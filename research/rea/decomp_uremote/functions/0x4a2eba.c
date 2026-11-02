// rea decompile_all
// name: FUN_004a2eba
// address: 0x4a2eba
// body: available
// range: 0x4a2eba-0x4a2fc5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a2eba(int *param_1)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  void *_Memory;
  int in_ECX;
  uint uVar4;
  float local_20;
  int *local_1c;
  float local_18;
  void *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4a2ec6;
  local_1c = (int *)0x0;
  FUN_004a674c(&local_1c);
  FUN_00466b09(&param_1);
  piVar3 = param_1;
  uVar4 = 0;
  iVar1 = *param_1;
  while (iVar1 != 0) {
    uVar4 = uVar4 + 1;
    iVar1 = param_1[uVar4];
  }
  local_14 = _malloc(uVar4 * 2);
  local_8 = 0;
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x2c))(*(int **)(in_ECX + 0x30),piVar3,uVar4,local_14);
  _Memory = _malloc(uVar4 * 0x1c);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x28))(*(int **)(in_ECX + 0x30),local_14,uVar4,_Memory,0)
  ;
  param_1 = (int *)0x0;
  local_18 = 0.0;
  if (uVar4 != 0) {
    local_1c = (int *)((int)_Memory + 4);
    do {
      fVar2 = (float)*local_1c;
      if (*local_1c < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      local_18 = fVar2 / (float)*(int *)(in_ECX + 0x40) + local_18;
      local_20 = *(float *)(in_ECX + 0x34) * local_18;
      FUN_004a674c(&local_20);
      local_20 = (float)(uint)*(ushort *)((int)local_14 + (int)param_1 * 2);
      FUN_0043e86a(&local_20);
      param_1 = (int *)((int)param_1 + 1);
      local_1c = local_1c + 7;
    } while (param_1 < uVar4);
  }
  local_8 = local_8 & 0xffffff00;
  _free(_Memory);
  local_8 = 0xffffffff;
  _free(local_14);
  return;
}

