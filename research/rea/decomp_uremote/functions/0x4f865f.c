// rea decompile_all
// name: FUN_004f865f
// address: 0x4f865f
// body: available
// range: 0x4f865f-0x4f8750 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f865f(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int in_EAX;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *unaff_EDI;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined1 local_28 [32];
  undefined1 *local_8;
  
  local_38 = 0x4f866e;
  cVar1 = FUN_004c044d();
  if (cVar1 == '\0') {
    local_8 = (undefined1 *)&local_44;
    local_44 = param_1;
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_4;
    puVar4 = (undefined4 *)FUN_004bfb68(local_28);
  }
  else {
    local_38 = 0x4f8679;
    piVar2 = (int *)FUN_004c0453();
    if (piVar2 == (int *)0x0) goto LAB_004f8710;
    local_8 = (undefined1 *)&local_44;
    local_44 = param_1;
    local_40 = param_2;
    local_3c = param_3;
    local_38 = param_4;
    uVar3 = FUN_004f8d79();
    local_8 = (undefined1 *)&local_44;
    (**(code **)(*piVar2 + 0x20))(&local_44,uVar3);
    puVar4 = (undefined4 *)FUN_004f9552();
  }
  param_1 = *puVar4;
  param_2 = puVar4[1];
  param_3 = puVar4[2];
  param_4 = puVar4[3];
LAB_004f8710:
  local_38 = *(int *)(in_EAX + 0x24);
  if (local_38 != 0) {
    local_3c = 0x4f8723;
    puVar4 = (undefined4 *)FUN_004a97ee();
    param_1 = *puVar4;
    param_2 = puVar4[1];
    param_3 = puVar4[2];
    param_4 = puVar4[3];
  }
  *unaff_EDI = param_1;
  unaff_EDI[1] = param_2;
  unaff_EDI[3] = param_4;
  unaff_EDI[2] = param_3;
  return;
}

