// rea decompile_all
// name: FUN_004c3f5f
// address: 0x4c3f5f
// body: available
// range: 0x4c3f5f-0x4c4046 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004c3f5f(byte param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int in_ECX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 *puStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 *local_c;
  
  local_24 = 0x4c3f79;
  FUN_00467e6f();
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  local_c = (undefined1 *)&local_28;
  local_28 = param_2;
  puStack_2c = &local_14;
  local_24 = param_3;
  uStack_30 = 0x4c3f99;
  (**(code **)(*in_EAX + 0x24))();
  if (((*(byte *)(in_ECX + 0x20) & 0x70) == 0) || ((param_1 & 0x70) == 0)) {
    local_c = (undefined1 *)&uStack_34;
    uStack_38 = 0x4c3fb4;
    FUN_00467e6f();
    local_c = (undefined1 *)&uStack_3c;
    uStack_3c = local_14;
    uStack_38 = local_10;
    uStack_40 = 0x4c3fcb;
    FUN_004c3d7e();
    uStack_30 = 0x4c3fd0;
    iVar2 = FUN_004c3525();
    if (iVar2 == 0) {
      return;
    }
    local_c = (undefined1 *)&uStack_30;
    uStack_34 = 0x4c3fe2;
    FUN_004d076d();
    local_c = (undefined1 *)&uStack_38;
    uStack_3c = 0x4c3ff1;
    FUN_00467e6f();
    local_c = (undefined1 *)&uStack_40;
    uStack_40 = local_14;
    uStack_3c = local_10;
    cVar1 = FUN_004c3a0a();
    if (cVar1 != '\0') {
      return;
    }
    uStack_30 = 0x4c4013;
    iVar2 = FUN_004c3525();
    if (iVar2 == 0) {
      return;
    }
  }
  local_c = (undefined1 *)&uStack_34;
  uStack_38 = 0x4c4026;
  FUN_00467e6f();
  local_c = (undefined1 *)&uStack_3c;
  uStack_3c = local_14;
  uStack_40 = 0;
  uStack_38 = local_10;
  FUN_004c3e12();
  return;
}

