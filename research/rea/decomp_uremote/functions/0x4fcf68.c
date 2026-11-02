// rea decompile_all
// name: FUN_004fcf68
// address: 0x4fcf68
// body: available
// range: 0x4fcf68-0x4fd016 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fcf68(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  void *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x20;
  local_8 = 0x4fcf74;
  uVar1 = FUN_0047e366();
  uVar2 = FUN_0047e371();
  local_14[0] = (void *)0x0;
  local_8 = 0;
  FUN_0047e7d7(&local_30,0);
  local_8._0_1_ = 1;
  if (local_2c == 1) {
    FUN_004ff453(local_14,local_30,local_28,uVar1);
  }
  else if (local_2c == 2) {
    FUN_004ff3f5(local_14,local_30,local_28);
  }
  else if (local_2c == 3) {
    FUN_004ff4de(local_14,local_30,local_28,uVar1);
  }
  FUN_004fce4d(uVar1,uVar2,local_14[0],1);
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0047e819();
  local_8 = 0xffffffff;
  _free(local_14[0]);
  return;
}

