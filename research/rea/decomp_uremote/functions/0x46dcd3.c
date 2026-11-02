// rea decompile_all
// name: FUN_0046dcd3
// address: 0x46dcd3
// body: available
// range: 0x46dcd3-0x46dd95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046dcd3(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char extraout_CL;
  int iVar4;
  void *local_24 [2];
  int local_1c;
  undefined4 local_18;
  undefined1 local_11;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x46dcdf;
  iVar4 = 0;
  local_18 = 0;
  FUN_00466bf6();
  uVar2 = FUN_00466b7c();
  FUN_00471007(local_24,uVar2);
  local_8 = 0;
  if (0 < local_1c) {
    do {
      local_11 = *(undefined1 *)((int)local_24[0] + iVar4);
      cVar1 = FUN_00464f9e();
      if (cVar1 == '\0') {
        iVar3 = FUN_00470235("_-.*!\'()",(int)extraout_CL);
        if (iVar3 < 0) {
          FUN_0046e764();
          FUN_0046e701(iVar4 + 1);
          iVar4 = iVar4 + 2;
          FUN_0046e701(iVar4);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_1c);
  }
  FUN_00466c04();
  local_8 = 0xffffffff;
  _free(local_24[0]);
  return param_1;
}

