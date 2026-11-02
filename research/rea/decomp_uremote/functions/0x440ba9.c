// rea decompile_all
// name: FUN_00440ba9
// address: 0x440ba9
// body: available
// range: 0x440ba9-0x440c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_00440ba9(void)

{
  int iVar1;
  int in_ECX;
  undefined4 auStack_2c [6];
  undefined1 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x440bb5;
  if (*(int *)(in_ECX + 0x18) != 0) {
    if (*(int *)(in_ECX + 0x70) < 0) {
      auStack_2c[0] = 0x440bcd;
      thunk_FUN_0046087d();
    }
    local_14[0] = (undefined1 *)auStack_2c;
    FUN_004c751a();
    FUN_00465f7f();
    local_8 = 0;
    auStack_2c[0] = *(undefined4 *)(in_ECX + 0x1c);
    iVar1 = FUN_0044bfc5(*(undefined4 *)(in_ECX + 0x18));
    FUN_0043a9db(local_14,*(undefined4 *)(iVar1 + 0xd8));
    auStack_2c[0] = 0x440c17;
    FUN_0049f5e8();
    auStack_2c[0] = 0x440c1e;
    FUN_004c4d7a();
    auStack_2c[0] = 0x440c26;
    FUN_004652d6();
  }
  return;
}

