// rea decompile_all
// name: FUN_004f0185
// address: 0x4f0185
// body: available
// range: 0x4f0185-0x4f0273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004f0185(int *param_1)

{
  int *_Memory;
  int iVar1;
  int *piVar2;
  int unaff_EBX;
  int *piVar3;
  int *local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  local_8 = 0x4f0191;
  local_14 = 0;
  piVar3 = param_1;
  do {
    if (piVar3 == (int *)0x0) {
LAB_004f0216:
      iVar1 = FUN_004f03e7();
      if (iVar1 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(iVar1 + 0x10);
      }
      if (piVar3 != (int *)0x0) {
        local_2c = (int *)0x0;
        local_28 = 0;
        local_24 = 0;
        local_8 = 1;
        (**(code **)(*piVar3 + 8))(&local_2c);
        for (piVar2 = local_2c; piVar2 != local_2c + local_24; piVar2 = piVar2 + 1) {
          _Memory = local_2c;
          if (unaff_EBX == *piVar2) {
LAB_004f01f6:
            local_8 = 0xffffffff;
            _free(_Memory);
            return piVar3;
          }
        }
        local_8 = 0xffffffff;
        _free(local_2c);
      }
      return (int *)0x0;
    }
    local_20 = (int *)0x0;
    local_1c = 0;
    local_18 = 0;
    local_8 = 0;
    (**(code **)(*piVar3 + 8))(&local_20);
    for (piVar2 = local_20; piVar2 != local_20 + local_18; piVar2 = piVar2 + 1) {
      _Memory = local_20;
      if (unaff_EBX == *piVar2) goto LAB_004f01f6;
    }
    piVar3 = (int *)(**(code **)(*piVar3 + 4))();
    local_14 = local_14 + 1;
    if ((100 < local_14) || (piVar3 == param_1)) {
      local_8 = 0xffffffff;
      _free(local_20);
      if (piVar3 != (int *)0x0) {
        return (int *)0x0;
      }
      goto LAB_004f0216;
    }
    local_8 = 0xffffffff;
    _free(local_20);
  } while( true );
}

