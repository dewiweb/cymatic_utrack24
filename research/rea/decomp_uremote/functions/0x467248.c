// rea decompile_all
// name: FUN_00467248
// address: 0x467248
// body: available
// range: 0x467248-0x4672d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00467248(undefined4 param_1,char *param_2,char *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  char *local_38;
  char *local_34;
  char *local_30;
  undefined1 *local_1c;
  char *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x467254;
  iVar2 = 0;
  if (*param_2 != '\0') {
    while( true ) {
      local_30 = (char *)param_4;
      local_1c = (undefined1 *)&local_38;
      local_34 = param_3;
      local_38 = param_2;
      FUN_00470e12(local_14);
      local_1c = (undefined1 *)&local_34;
      local_30 = local_14[0];
      local_38 = (char *)0x4672a2;
      local_34 = param_2;
      local_30 = (char *)FUN_004654d6();
      local_8 = 0;
      local_34 = (char *)0x4672af;
      FUN_0046e2c4();
      local_8 = 0xffffffff;
      local_30 = (char *)0x4672ba;
      FUN_004652d6();
      iVar2 = iVar2 + 1;
      if (*local_14[0] == '\0') break;
      local_30 = (char *)0x4672cb;
      puVar1 = (undefined4 *)FUN_004607e3();
      param_2 = (char *)*puVar1;
    }
  }
  return iVar2;
}

