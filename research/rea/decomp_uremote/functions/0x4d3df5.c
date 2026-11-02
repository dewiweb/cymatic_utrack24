// rea decompile_all
// name: FUN_004d3df5
// address: 0x4d3df5
// body: available
// range: 0x4d3df5-0x4d3f60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_004d3df5(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_005af82d();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_004ec568(iVar2,param_1,param_2);
  }
  if (param_7 == 1) {
    FUN_004c71ba();
    FUN_004c71ba();
  }
  else {
    FUN_004c751a();
    uVar4 = thunk_FUN_0046085c(0);
    FUN_00464f5d(uVar4);
    FUN_004c71a0();
    FUN_004c751a();
    uVar4 = thunk_FUN_0046085c(0);
    FUN_00464f5d(uVar4);
    FUN_004c71a0();
    cVar1 = FUN_004c721b();
    if (cVar1 != '\0') {
      FUN_004c718e();
      FUN_004c71e3();
    }
    if (param_7 == 2) {
      FUN_004c71ba();
      FUN_004ec869(param_3,1);
      FUN_004c71ba();
      param_3 = param_4;
    }
    else {
      if (param_7 != 3) {
        return uVar3;
      }
      FUN_004c718e();
      FUN_004ec869(param_3,1);
      FUN_004c718e();
      FUN_004ec869(param_4,2);
      FUN_004c718e();
      FUN_004c71ba();
      param_3 = param_5;
    }
  }
  FUN_004ec869(param_3,0);
  return uVar3;
}

