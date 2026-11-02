// rea decompile_all
// name: FUN_00470f53
// address: 0x470f53
// body: available
// range: 0x470f53-0x470fdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00470f53(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = in_EAX[2];
  iVar2 = 0;
  if (0 < local_8) {
    do {
      iVar4 = *in_EAX + iVar2 * 4;
      iVar1 = thunk_FUN_004659f8();
      if (iVar1 == 0) goto LAB_00470fc1;
      iVar3 = (local_8 + iVar2) / 2;
      if (iVar3 == iVar2) {
        if (0 < iVar1) {
          iVar2 = iVar2 + 1;
        }
        break;
      }
      iVar4 = *in_EAX + iVar3 * 4;
      iVar1 = thunk_FUN_004659f8();
      if (iVar1 == 0) goto LAB_00470fc1;
      if (0 < iVar1) {
        iVar2 = iVar3;
        iVar3 = local_8;
      }
      local_8 = iVar3;
    } while (iVar2 < local_8);
  }
  FUN_0046e2e9(param_2);
  iVar4 = *in_EAX + iVar2 * 4;
LAB_00470fc1:
  FUN_004652e4(iVar4);
  return param_1;
}

