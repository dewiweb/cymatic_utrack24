// rea decompile_all
// name: FUN_004a293a
// address: 0x4a293a
// body: available
// range: 0x4a293a-0x4a2a7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004a293a(int *param_1)

{
  int *piVar1;
  int *piVar2;
  code *local_1c;
  code *local_18;
  char local_11;
  undefined1 local_8;
  undefined3 uStack_7;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  *param_1 = 0;
  piVar1 = param_1 + 1;
  *piVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_8 = 4;
  uStack_7 = 0;
  FUN_0046537e(&local_18);
  local_8 = 5;
  local_11 = FUN_0046d68c(&local_18);
  _local_8 = CONCAT31(uStack_7,4);
  FUN_004652d6();
  if (local_11 != '\0') {
    FUN_0046537e(&local_18);
    local_1c = (code *)FUN_0046d6c4();
    FUN_004652d6();
    if (local_1c != (code *)0x0) {
      piVar2 = (int *)*param_1;
      local_18 = (code *)0x0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *param_1 = 0;
      (*local_1c)(0,&DAT_0091acdc,&local_18,param_1);
    }
  }
  FUN_0046537e(&local_1c);
  local_8 = 6;
  local_11 = FUN_0046d68c(&local_1c);
  _local_8 = CONCAT31(uStack_7,4);
  FUN_004652d6();
  if (local_11 != '\0') {
    FUN_0046537e(&local_1c);
    local_18 = (code *)FUN_0046d6c4();
    FUN_004652d6();
    if (local_18 != (code *)0x0) {
      piVar2 = (int *)*piVar1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *piVar1 = 0;
      (*local_18)(0,&DAT_0091acec,piVar1);
      local_1c = (code *)*piVar1;
      if (local_1c != (code *)0x0) {
        piVar1 = param_1 + 2;
        piVar2 = (int *)*piVar1;
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 8))(piVar2);
        }
        *piVar1 = 0;
        (**(code **)(*(int *)local_1c + 0xc))(local_1c,piVar1,0);
      }
    }
  }
  return param_1;
}

