// rea decompile_all
// name: FUN_00473a27
// address: 0x473a27
// body: available
// range: 0x473a27-0x473b0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00473a27(void)

{
  int *piVar1;
  void **ppvVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  void *local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 *local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x1c;
  iVar5 = 0;
  local_20 = (void *)0x0;
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  local_14 = &DAT_0095d790;
  FUN_00467a53();
  local_8 = CONCAT31(local_8._1_3_,1);
  ppvVar2 = (void **)FUN_00473b0b();
  if (&local_20 != ppvVar2) {
    FUN_0043e81a(&local_2c);
    iVar5 = local_24;
    local_20 = local_2c;
    local_2c = (void *)0x0;
    local_1c = local_28;
    local_28 = 0;
    local_18 = local_24;
    local_24 = 0;
    _free((void *)0x0);
  }
  local_8 = local_8 & 0xffffff00;
  LOCK();
  DAT_0095d790 = 0;
  UNLOCK();
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      puVar6 = (undefined4 *)FUN_00473b0b();
      if (puVar6[1] != 0) {
        _free((void *)*puVar6);
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      local_8 = 0xffffffff;
      puVar6[2] = 0;
      _free(local_20);
      return;
    }
    puVar6 = *(undefined4 **)((int)local_20 + iVar5 * 4);
    FUN_00467a53();
    puVar3 = (undefined4 *)FUN_00473b0b();
    piVar4 = (int *)*puVar3;
    piVar1 = piVar4 + puVar3[2];
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      if (puVar6 == (undefined4 *)*piVar4) goto LAB_00473ac5;
    }
    puVar6 = (undefined4 *)0x0;
LAB_00473ac5:
    LOCK();
    DAT_0095d790 = 0;
    UNLOCK();
    if (puVar6 != (undefined4 *)0x0) {
      (**(code **)*puVar6)(1);
    }
  } while( true );
}

