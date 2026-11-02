// rea decompile_all
// name: FUN_004f9431
// address: 0x4f9431
// body: available
// range: 0x4f9431-0x4f9528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f9431(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_28 [32];
  undefined1 *local_8;
  
  if (*(int *)(unaff_EBX + 0x24) != 0) {
    local_38 = 0x4f9447;
    local_38 = FUN_00477489();
    local_3c = 0x4f9453;
    puVar2 = (undefined4 *)FUN_004a97ee();
    param_1 = *puVar2;
    param_2 = puVar2[1];
    param_3 = puVar2[2];
    param_4 = puVar2[3];
  }
  local_38 = 0x4f9471;
  cVar1 = FUN_004c044d();
  if (cVar1 == '\0') {
    local_8 = (undefined1 *)&local_44;
    local_44 = param_1;
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_4;
    puVar2 = (undefined4 *)FUN_004bfb8e(local_28);
  }
  else {
    local_38 = 0x4f947c;
    piVar3 = (int *)FUN_004c0453();
    if (piVar3 == (int *)0x0) goto LAB_004f9510;
    local_8 = (undefined1 *)&local_44;
    local_44 = param_1;
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_4;
    uVar4 = FUN_004f98a2();
    local_8 = (undefined1 *)&local_44;
    (**(code **)(*piVar3 + 0x28))(&local_44,uVar4);
    puVar2 = (undefined4 *)FUN_004f971f();
  }
  param_1 = *puVar2;
  param_2 = puVar2[1];
  param_3 = puVar2[2];
  param_4 = puVar2[3];
LAB_004f9510:
  *unaff_EDI = param_1;
  unaff_EDI[1] = param_2;
  unaff_EDI[3] = param_4;
  unaff_EDI[2] = param_3;
  return;
}

