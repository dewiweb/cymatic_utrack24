// rea decompile_all
// name: FUN_004fc786
// address: 0x4fc786
// body: available
// range: 0x4fc786-0x4fc81c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004fc786(void)

{
  int iVar1;
  int in_ECX;
  undefined1 local_24 [28];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x4fc792;
  iVar1 = FUN_005af82d(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004fc71e(*(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0xc),
                         *(undefined4 *)(in_ECX + 0x10));
  }
  LOCK();
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  UNLOCK();
  FUN_0047e2f2();
  local_8 = 0;
  FUN_0047cc87();
  FUN_0047e2f2();
  local_8._0_1_ = 2;
  FUN_0047d915(local_24,0,0,0);
  FUN_004c4d7a();
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_0047cca3();
  FUN_004c4d7a();
  LOCK();
  *(undefined4 *)(iVar1 + 4) = 0;
  UNLOCK();
  return iVar1;
}

