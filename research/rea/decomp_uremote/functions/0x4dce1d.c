// rea decompile_all
// name: FUN_004dce1d
// address: 0x4dce1d
// body: available
// range: 0x4dce1d-0x4dd032 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004dce1d(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 int param_6,char param_7,int param_8,int param_9,char param_10,char param_11)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined *local_68;
  uint uStack_64;
  float local_50;
  undefined1 *local_4c;
  undefined1 *local_48;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  uStack_64 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  local_68 = (undefined *)0x4dce52;
  FUN_0047888f();
  local_c = 0;
  if (0 < param_9) {
    iVar3 = param_5;
    if (param_7 == '\0') {
      iVar3 = param_6;
    }
    fVar1 = (float)iVar3 * 0.25;
    local_50 = fVar1 + fVar1;
    if (param_7 == '\0') {
      fVar6 = (float)param_6 - local_50;
      fVar5 = (float)param_9 - local_50;
      fVar2 = fVar6;
      param_3 = param_8;
    }
    else {
      fVar5 = (float)param_5 - local_50;
      fVar6 = (float)param_9 - local_50;
      fVar2 = fVar5;
      param_4 = param_8;
    }
    local_4c = (undefined1 *)(fVar1 + (float)param_3);
    local_68 = (undefined *)(fVar2 * 0.5);
    FUN_0047932d(local_38,local_4c,fVar1 + (float)param_4,fVar5,fVar6);
  }
  local_68 = (undefined *)0x1;
  FUN_004c1e29(&local_50,0x1000400);
  if ((param_10 != '\0') || (param_11 != '\0')) {
    local_68 = (undefined *)0x40000000;
    FUN_00476237(&local_4c);
    local_68 = (undefined *)0x4dcf92;
    FUN_004d076d();
  }
  local_4c = (undefined1 *)&local_68;
  FUN_004d076d();
  FUN_0047cda7();
  local_68 = &DAT_0095d798;
  FUN_0047d2ae(local_38);
  if ((param_10 == '\0') && (param_11 == '\0')) {
    local_4c = (undefined1 *)0x3dcccccd;
  }
  else {
    local_4c = (undefined1 *)0x3e4ccccd;
  }
  local_48 = (undefined1 *)&local_68;
  FUN_004765bf(&local_68,local_4c);
  FUN_0047cda7();
  local_68 = &DAT_0095d798;
  uVar4 = FUN_0047badf(0x3f800000);
  FUN_0047d2d0(local_38,uVar4);
  local_68 = (undefined *)0x4dd01e;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

