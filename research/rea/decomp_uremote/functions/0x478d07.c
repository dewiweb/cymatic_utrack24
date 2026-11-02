// rea decompile_all
// name: FUN_00478d07
// address: 0x478d07
// body: available
// range: 0x478d07-0x478de6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00478d07(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *in_EAX;
  
  if (in_EAX[2] == 0) {
    FUN_00478b0d(0,0);
  }
  FUN_00478afa(7);
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = 0x47c35200;
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = param_1;
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = param_2;
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = param_3;
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = param_4;
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = param_5;
  iVar1 = in_EAX[2];
  in_EAX[2] = iVar1 + 1;
  *(undefined4 *)(*in_EAX + iVar1 * 4) = param_6;
  FUN_004787de(param_1,param_2,param_3,param_4);
  FUN_00478781(param_5,param_6);
  return;
}

