// rea decompile_all
// name: FUN_004c4047
// address: 0x4c4047
// body: available
// range: 0x4c4047-0x4c40f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004c4047(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *unaff_EBX;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 local_c [4];
  undefined1 *local_8;
  
  local_18 = 0x4c4060;
  FUN_00467e6f();
  *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
  local_8 = (undefined1 *)&local_1c;
  local_1c = param_1;
  puStack_20 = local_c;
  local_18 = param_2;
  uStack_24 = 0x4c4080;
  puVar1 = (undefined4 *)(**(code **)(*in_EAX + 0x24))();
  *unaff_EBX = *puVar1;
  local_8 = auStack_28;
  unaff_EBX[1] = puVar1[1];
  uStack_2c = 0x4c4099;
  FUN_00467e6f();
  uStack_30 = *unaff_EBX;
  local_8 = (undefined1 *)&uStack_30;
  uStack_2c = unaff_EBX[1];
  FUN_004c3d7e();
  uStack_2c = 0x4c40be;
  local_8 = auStack_28;
  FUN_00467e6f();
  uStack_30 = *unaff_EBX;
  local_8 = (undefined1 *)&uStack_30;
  uStack_2c = unaff_EBX[1];
  FUN_004c3e12(0);
  uStack_24 = 0x4c40df;
  FUN_0047433f();
  if (((*(byte *)(in_ECX + 0x20) & 0x70) == 0) && (*(int *)(in_ECX + 0x28) != 0)) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 8);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

