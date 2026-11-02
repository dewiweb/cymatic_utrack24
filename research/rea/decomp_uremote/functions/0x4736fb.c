// rea decompile_all
// name: FUN_004736fb
// address: 0x4736fb
// body: available
// range: 0x4736fb-0x47378f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

uint FUN_004736fb(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  undefined1 local_1c [4];
  int local_18;
  uint local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x473707;
  local_14 = 0;
  local_18 = FUN_005af82d(0x24);
  local_8 = 0;
  if (local_18 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    uVar2 = (**(code **)(*in_ECX + 4))(local_1c);
    local_8 = CONCAT31(local_8._1_3_,1);
    local_14 = 1;
    puVar3 = (undefined4 *)FUN_00473580(local_18,uVar2);
  }
  local_8 = 2;
  puVar1 = (undefined4 *)in_ECX[3];
  if ((puVar1 != puVar3) && (in_ECX[3] = (int)puVar3, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_8 = 0xffffffff;
  if ((local_14 & 1) != 0) {
    FUN_004652d6();
  }
  uVar4 = FUN_0046d82c(0);
  if ((char)uVar4 == '\0') {
    uVar4 = FUN_004735c5();
  }
  else {
    uVar4 = uVar4 & 0xffffff00;
  }
  return uVar4;
}

