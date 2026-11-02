// rea decompile_all
// name: FUN_004c8f71
// address: 0x4c8f71
// body: available
// range: 0x4c8f71-0x4c8fec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004c8f71(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 local_3c [40];
  undefined4 *local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x4c8f7d;
  FUN_004d002b(local_3c);
  local_8 = 0;
  FUN_004d01bd();
  FUN_004c8e9c();
  puVar1 = (undefined4 *)FUN_004d00e2();
  local_8._0_1_ = 1;
  local_14 = puVar1;
  iVar2 = FUN_005cdbcf(puVar1,0,&juce::Component::RTTI_Type_Descriptor,
                       &juce::Drawable::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    puVar1 = (undefined4 *)0x0;
  }
  local_8 = (uint)local_8._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  local_8 = 0xffffffff;
  FUN_004d0073(local_3c);
  return iVar2;
}

