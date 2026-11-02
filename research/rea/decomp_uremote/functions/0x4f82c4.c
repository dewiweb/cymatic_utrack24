// rea decompile_all
// name: FUN_004f82c4
// address: 0x4f82c4
// body: available
// range: 0x4f82c4-0x4f8369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f82c4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  undefined1 local_c [8];
  
  for (; in_EAX != 0; in_EAX = *(int *)(in_EAX + 0xc)) {
    if (in_EAX == unaff_EBX) goto LAB_004f835d;
    cVar1 = thunk_FUN_004c1278(in_EAX);
    if (cVar1 != '\0') goto LAB_004f8349;
    puVar3 = (undefined4 *)FUN_004f91ea(local_c,param_1,param_2);
    param_1 = *puVar3;
    param_2 = puVar3[1];
  }
  if (unaff_EBX != 0) {
    iVar2 = thunk_FUN_004c1265();
    puVar3 = (undefined4 *)FUN_004f92e9(local_c,param_1,param_2);
    param_1 = *puVar3;
    param_2 = puVar3[1];
    if (iVar2 != unaff_EBX) {
LAB_004f8349:
      FUN_004f91a3();
      return;
    }
  }
LAB_004f835d:
  *unaff_EDI = param_1;
  unaff_EDI[1] = param_2;
  return;
}

