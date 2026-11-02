// rea decompile_all
// name: FUN_004f8214
// address: 0x4f8214
// body: available
// range: 0x4f8214-0x4f82c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f8214(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 extraout_EDX;
  undefined4 *unaff_EDI;
  undefined8 uVar3;
  undefined1 local_10 [12];
  
  for (; in_EAX != 0; in_EAX = *(int *)(in_EAX + 0xc)) {
    if (in_EAX == param_1) goto LAB_004f829c;
    cVar1 = thunk_FUN_004c1278(in_EAX);
    if (cVar1 != '\0') goto LAB_004f82b4;
    puVar2 = (undefined4 *)FUN_004f8542(extraout_EDX,param_3);
    param_2 = *puVar2;
    param_3 = puVar2[1];
  }
  if (param_1 == 0) {
LAB_004f829c:
    *unaff_EDI = param_2;
  }
  else {
    uVar3 = thunk_FUN_004c1265();
    puVar2 = (undefined4 *)FUN_004f8472(local_10,(int)((ulonglong)uVar3 >> 0x20),param_3);
    param_3 = puVar2[1];
    if ((int)uVar3 != param_1) {
LAB_004f82b4:
      FUN_004f915a();
      return;
    }
    *unaff_EDI = *puVar2;
  }
  unaff_EDI[1] = param_3;
  return;
}

