// rea decompile_all
// name: FUN_004d703d
// address: 0x4d703d
// body: available
// range: 0x4d703d-0x4d71d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d703d(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,float param_6,
                 undefined1 *param_7,int param_8,int param_9,undefined4 param_10)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined4 extraout_EDX;
  undefined1 **ppuVar4;
  undefined4 uVar5;
  undefined1 *local_24;
  float local_20;
  int local_1c;
  undefined4 local_18;
  
  uVar5 = param_10;
  local_24 = (undefined1 *)&local_18;
  local_1c = 0;
  local_20 = 2.35228e-38;
  FUN_004c1e29();
  local_1c = 0x4d7066;
  FUN_0047d23a();
  iVar1 = param_9;
  if ((param_9 != 2) && (param_9 != 3)) {
    local_18 = uVar5;
    local_1c = param_9;
    local_20 = (float)param_8;
    local_24 = param_7;
    (**(code **)(*in_ECX + 8))(param_1,param_2,param_3,param_4,param_5,param_6);
    (**(code **)(*in_ECX + 0xc))
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,iVar1,uVar5);
    return;
  }
  local_18 = uVar5;
  local_1c = 0x4d70dc;
  cVar2 = FUN_004c3305();
  if (cVar2 != '\0') {
    local_18 = 0x4d70e7;
    cVar2 = FUN_004c3153();
    if (cVar2 != '\0') {
      param_8 = CONCAT31(param_8._1_3_,1);
      goto LAB_004d70f1;
    }
  }
  local_18 = uVar5;
  param_8 = (uint)param_8._1_3_ << 8;
  local_1c = 0x4d710a;
  FUN_004c32c9();
LAB_004d70f1:
  local_18 = 0x4d70f8;
  cVar2 = FUN_004c3153();
  if (cVar2 == '\0') {
    uVar5 = 0x3f000000;
  }
  else {
    uVar5 = 0x3f800000;
  }
  local_1c = param_8;
  local_20 = 0.0;
  ppuVar4 = &local_24;
  local_18 = extraout_EDX;
  uVar3 = FUN_004c1e29(&param_9,0x1001300,0);
  FUN_00476450(uVar3,ppuVar4,uVar5);
  FUN_004d3245();
  local_18 = 0x4d7159;
  cVar2 = FUN_004c3153();
  if (cVar2 == '\0') {
    local_18 = 0x3e99999a;
  }
  else {
    local_18 = 0x3f666666;
  }
  if (iVar1 == 3) {
    local_20 = (float)param_5 - param_6;
    local_24 = (undefined1 *)(float)param_4;
  }
  else {
    local_20 = (float)param_5;
    local_24 = (undefined1 *)(param_6 - (float)param_2);
    param_6 = (float)param_3;
  }
  local_1c = 0;
  FUN_004dbbd2((float)param_2,param_6);
  return;
}

