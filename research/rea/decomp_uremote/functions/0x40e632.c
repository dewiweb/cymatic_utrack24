// rea decompile_all
// name: FUN_0040e632
// address: 0x40e632
// body: available
// range: 0x40e632-0x40e6f2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e632(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int local_10;
  undefined4 local_c;
  char local_5;
  
  FUN_004d021d();
  local_10 = FUN_0040e505(param_2,&local_c,&local_5);
  iVar1 = local_10;
  if (local_10 == 0) {
    iVar1 = FUN_0041106d();
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_00411912(local_c,&local_10);
    iVar1 = local_10;
    if ((local_10 == 0) && (iVar1 = FUN_004110b4(uVar2,local_c), iVar1 == 0)) {
      pcVar4 = "cid";
      if (local_5 == '\0') {
        pcVar4 = "type1";
      }
      if (-1 < param_2) {
        param_2 = 0;
      }
      iVar1 = FUN_0040e468(uVar2,local_c,param_2,pcVar4,param_3);
    }
  }
  if ((iVar1 == 2) && (iVar3 = FUN_0041106d(), iVar3 != 0)) {
    return iVar3;
  }
  return iVar1;
}

