// rea decompile_all
// name: FUN_004efcf8
// address: 0x4efcf8
// body: available
// range: 0x4efcf8-0x4efe1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004efcf8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_EAX;
  int *piVar4;
  undefined4 *puVar5;
  int local_50;
  int *local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined1 *local_c;
  
  if (in_EAX == 0) {
    local_4c = (int *)0x4efd0c;
    in_EAX = FUN_004efe3e();
    if (in_EAX == 0) goto LAB_004efe07;
  }
  local_4c = (int *)0x4efd1e;
  cVar3 = FUN_004a4bf9();
  if (cVar3 == '\0') {
    local_c = (undefined1 *)&local_50;
    piVar4 = (int *)FUN_004c2047(&local_38);
    local_50 = piVar4[2] / 2 + *piVar4;
    local_4c = (int *)(piVar4[3] / 2 + piVar4[1]);
    FUN_004c0968(in_EAX);
    local_50 = 0x4efd68;
    local_4c = (int *)in_EAX;
    FUN_004c086e();
    if (*(int *)(param_1 + 0xc) != 0) {
      local_c = (undefined1 *)&local_50;
      local_50 = local_20;
      local_4c = (int *)local_1c;
      piVar4 = (int *)FUN_004c08d2(*(int *)(param_1 + 0xc),0);
      iVar1 = *piVar4;
      iVar2 = piVar4[1];
      local_4c = &local_28;
      local_50 = 0x4efd9f;
      puVar5 = (undefined4 *)FUN_004c2047();
      local_38 = *puVar5;
      local_34 = puVar5[1];
      local_30 = puVar5[2];
      local_2c = puVar5[3];
      local_1c = iVar2;
      local_20 = iVar1;
    }
    local_28 = local_20 - param_2 / 2;
    local_24 = local_1c - param_3 / 2;
    local_1c = param_3;
    local_20 = param_2;
    local_4c = (int *)0x4efdf2;
    FUN_004f5b45();
    local_4c = (int *)0x4efdfd;
    FUN_004f5dd0();
    local_4c = (int *)0x4efe05;
    FUN_004c0c1f();
    return;
  }
LAB_004efe07:
  local_4c = (int *)param_3;
  local_50 = param_2;
  FUN_004c0c77(param_1);
  return;
}

