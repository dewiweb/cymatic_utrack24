// rea decompile_all
// name: FUN_0040e940
// address: 0x40e940
// body: available
// range: 0x40e940-0x40ea38 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e940(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  void *_Buf1;
  char *pcVar3;
  
  if (in_EAX == -1) {
    in_EAX = 0;
  }
  if (param_3 <= in_EAX) {
    return 1;
  }
  param_3 = FUN_0041106d();
  if (param_3 != 0) {
    return param_3;
  }
  iVar1 = FUN_0041148f();
  if (param_3 != 0) {
    return param_3;
  }
  if (iVar1 == -1) {
    return 1;
  }
  param_3 = FUN_0040e632(param_1,in_EAX,param_4);
  if (param_3 == 0) {
    return 0;
  }
  iVar2 = FUN_0041106d();
  if (iVar2 != 0) {
    return param_3;
  }
  _Buf1 = (void *)FUN_00411912(iVar1,&param_3);
  if (param_3 != 0) {
    return param_3;
  }
  param_3 = FUN_004110b4(_Buf1,iVar1);
  if (param_3 != 0) {
    return param_3;
  }
  if (4 < iVar1) {
    iVar2 = _memcmp(_Buf1,&DAT_0090ed80,4);
    pcVar3 = "cff";
    if (iVar2 == 0) goto LAB_0040ea1b;
  }
  pcVar3 = "truetype";
LAB_0040ea1b:
  iVar1 = FUN_0040e468(_Buf1,iVar1,0,pcVar3,param_4);
  return iVar1;
}

