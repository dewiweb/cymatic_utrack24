// rea decompile_all
// name: FUN_004f836a
// address: 0x4f836a
// body: available
// range: 0x4f836a-0x4f8471 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f836a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *unaff_ESI;
  
  for (; in_EAX != 0; in_EAX = *(int *)(in_EAX + 0xc)) {
    if (in_EAX == param_1) goto LAB_004f843b;
    cVar3 = thunk_FUN_004c1278();
    if (cVar3 != '\0') goto LAB_004f8463;
    puVar5 = (undefined4 *)FUN_004f865f();
    param_2 = *puVar5;
    param_3 = puVar5[1];
    param_4 = puVar5[2];
    param_5 = puVar5[3];
  }
  if (param_1 == 0) {
LAB_004f843b:
    unaff_ESI[1] = param_3;
    unaff_ESI[2] = param_4;
    *unaff_ESI = param_2;
  }
  else {
    iVar4 = thunk_FUN_004c1265();
    puVar5 = (undefined4 *)FUN_004f9431();
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    param_5 = puVar5[3];
    if (iVar4 != param_1) {
LAB_004f8463:
      FUN_004f93d8();
      return;
    }
    *unaff_ESI = *puVar5;
    unaff_ESI[1] = uVar1;
    unaff_ESI[2] = uVar2;
  }
  unaff_ESI[3] = param_5;
  return;
}

