// rea decompile_all
// name: FUN_004434e5
// address: 0x4434e5
// body: available
// range: 0x4434e5-0x4435c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004434e5(void)

{
  char cVar1;
  int in_ECX;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30 [6];
  undefined1 *local_18;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4434f1;
  local_30[0] = 0x4434fe;
  cVar1 = FUN_00443343();
  *(char *)(in_ECX + 8) = '\x01' - (cVar1 != '\0');
  local_30[0] = *(int *)(*(int *)(in_ECX + 4) + 0x7c);
  uStack_34 = 0x443515;
  FUN_0045d6af();
  local_8 = 0;
  local_18 = (undefined1 *)local_30;
  local_30[0] = 0x21;
  uStack_34 = 0x443532;
  FUN_0043f850();
  local_8 = 0xffffffff;
  local_30[0] = 0x44353e;
  FUN_004652d6();
  if (*(char *)(in_ECX + 8) != '\0') {
    local_30[0] = 0x443554;
    FUN_0045d71f();
  }
  local_18 = (undefined1 *)local_30;
  uStack_34 = 0x443571;
  FUN_004d076d();
  local_18 = (undefined1 *)&uStack_34;
  uStack_38 = 0x44357e;
  FUN_004d076d();
  local_18 = (undefined1 *)&uStack_38;
  uStack_3c = 0x44358b;
  FUN_004d076d();
  local_18 = (undefined1 *)&uStack_3c;
  uStack_40 = 0x443598;
  FUN_004d076d();
  local_18 = (undefined1 *)&uStack_40;
  uStack_44 = 0x4435a5;
  FUN_004d076d();
  local_18 = (undefined1 *)&uStack_44;
  FUN_004d076d();
  FUN_0043f8fb();
  uStack_34 = 0x4435bf;
  local_30[0] = in_ECX + -0x178;
  FUN_004c1613();
  return;
}

