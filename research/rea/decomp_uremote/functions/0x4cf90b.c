// rea decompile_all
// name: FUN_004cf90b
// address: 0x4cf90b
// body: available
// range: 0x4cf90b-0x4cfa81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cf90b(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uStack_64;
  int local_60;
  undefined1 *local_5c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_18 [20];
  
  local_48 = *in_EAX;
  local_44 = in_EAX[1];
  local_40 = in_EAX[2];
  local_3c = in_EAX[3];
  iVar1 = *(int *)(param_2 + 0xc);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  if (iVar1 == 0) {
    local_5c = (undefined1 *)0x4cf975;
    piVar2 = (int *)FUN_004c0453();
    if (piVar2 != (int *)0x0) {
      local_5c = local_18;
      local_60 = 0x4cf985;
      puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x4c))();
      local_28 = *puVar4;
      local_24 = puVar4[1];
      local_20 = puVar4[2];
      local_1c = puVar4[3];
    }
    local_5c = (undefined1 *)(local_3c / 2 + local_44);
    local_60 = local_40 / 2 + local_48;
    uStack_64 = 0x4cf9bd;
    FUN_004c4e62();
    uStack_64 = 0x4cf9c5;
    puVar4 = (undefined4 *)FUN_004c53da();
    local_38 = *puVar4;
    local_34 = puVar4[1];
    local_30 = puVar4[2];
    local_2c = puVar4[3];
  }
  else {
    local_2c = *(undefined4 *)(iVar1 + 0x1c);
    local_30 = *(undefined4 *)(iVar1 + 0x18);
  }
  local_5c = (undefined1 *)0x4cf9f4;
  piVar2 = (int *)FUN_004f643a();
  local_48 = *piVar2;
  local_5c = (undefined1 *)param_6;
  local_60 = param_5;
  iVar1 = *param_1;
  uStack_64 = param_4;
  local_44 = piVar2[1];
  local_40 = piVar2[2];
  local_3c = piVar2[3];
  uVar3 = FUN_004f643a(&local_38,param_3);
  (**(code **)(iVar1 + 4))(&local_48,uVar3);
  puVar4 = (undefined4 *)FUN_004f640a();
  uStack_64 = *puVar4;
  local_60 = puVar4[1];
  local_5c = (undefined1 *)puVar4[2];
  (**(code **)(*param_1 + 0x10))(param_2,&uStack_64);
  return;
}

