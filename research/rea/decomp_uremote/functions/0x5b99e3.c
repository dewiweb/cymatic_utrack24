// rea decompile_all
// name: __except1
// address: 0x5b99e3
// body: available
// range: 0x5b99e3-0x5b9aab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __except1
   
   Library: Visual Studio 2008 Release */

void __except1(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
              undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffff0;
  iVar2 = __handle_exc(param_1,&param_4,param_5);
  if (iVar2 == 0) {
    __raise_exc();
  }
  iVar2 = __errcode(param_1);
  if ((DAT_00957070 == 0) && (iVar2 != 0)) {
    __umatherr(iVar2,param_2,param_3,0,param_4,param_5);
  }
  else {
    __set_errno_from_matherr(iVar2);
    __ctrlfp();
  }
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffff0);
  return;
}

