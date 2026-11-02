// rea decompile_all
// name: FUN_004645b2
// address: 0x4645b2
// body: available
// range: 0x4645b2-0x46466a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004645b2(int param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 4);
  FUN_0046586b(iVar3);
  local_8 = 0;
  thunk_FUN_0046087d();
  FUN_00465353();
  local_14[0] = (byte *)*param_2;
  FUN_00460825(local_14);
  *local_14[0] = 0x2e;
  local_14[0] = local_14[0] + 1;
  for (uVar2 = (iVar3 * 8 + 5U) / 6; uVar2 != 0; uVar2 = uVar2 - 1) {
    iVar3 = FUN_00464545();
    bVar1 = ".ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+"[iVar3];
    if (bVar1 < 0x80) {
      *local_14[0] = bVar1;
      local_14[0] = local_14[0] + 1;
    }
    else {
      FUN_004608c3(bVar1);
    }
  }
  *local_14[0] = 0;
  return param_2;
}

