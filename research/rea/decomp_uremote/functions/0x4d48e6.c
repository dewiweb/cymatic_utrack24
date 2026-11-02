// rea decompile_all
// name: FUN_004d48e6
// address: 0x4d48e6
// body: available
// range: 0x4d48e6-0x4d4c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d48e6(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  float fVar6;
  undefined4 uVar7;
  undefined *local_68;
  uint uStack_64;
  undefined1 *local_48 [4];
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  uStack_64 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  local_68 = (undefined *)0x4d491a;
  FUN_0047888f();
  local_c = 0;
  if (param_5 == 0) {
    puVar4 = (undefined *)((float)param_4 * 0.7);
    fVar6 = (float)param_3;
    fVar3 = fVar6 * 0.1;
    fVar2 = (float)param_4 * 0.2;
    local_48[0] = (undefined1 *)(fVar6 * 0.5);
    fVar6 = fVar6 * 0.9;
    local_68 = puVar4;
  }
  else if (param_5 == 1) {
    fVar1 = (float)param_4;
    fVar3 = (float)param_3 * 0.3;
    puVar4 = (undefined *)(fVar1 * 0.1);
    fVar2 = fVar1 * 0.5;
    local_48[0] = (undefined1 *)((float)param_3 * 0.8);
    fVar6 = fVar3;
    local_68 = (undefined *)(fVar1 * 0.9);
  }
  else if (param_5 == 2) {
    puVar4 = (undefined *)((float)param_4 * 0.3);
    fVar6 = (float)param_3;
    fVar3 = fVar6 * 0.1;
    fVar2 = (float)param_4 * 0.8;
    local_48[0] = (undefined1 *)(fVar6 * 0.5);
    fVar6 = fVar6 * 0.9;
    local_68 = puVar4;
  }
  else {
    if (param_5 != 3) goto LAB_004d4b6d;
    fVar2 = (float)param_4;
    fVar3 = (float)param_3 * 0.7;
    local_68 = (undefined *)(fVar2 * 0.9);
    puVar4 = (undefined *)(fVar2 * 0.1);
    fVar2 = fVar2 * 0.5;
    local_48[0] = (undefined1 *)((float)param_3 * 0.2);
    fVar6 = fVar3;
  }
  FUN_00479368(local_38,local_48[0],fVar2,fVar3,puVar4,fVar6);
LAB_004d4b6d:
  local_48[0] = (undefined1 *)&local_68;
  ppuVar5 = &local_68;
  if (param_8 == '\0') {
    FUN_004c1e29(&local_68,0x1000400,0);
  }
  else {
    uVar7 = 0x3e4ccccd;
    local_48[0] = (undefined1 *)&local_68;
    FUN_004c1e29(local_48,0x1000400,0);
    FUN_004765bf(ppuVar5,uVar7);
  }
  FUN_0047cda7();
  local_68 = &DAT_0095d798;
  FUN_0047d2ae(local_38);
  local_48[0] = (undefined1 *)&local_68;
  FUN_0047604f();
  FUN_0047cda7();
  local_68 = &DAT_0095d798;
  uVar7 = FUN_0047badf(0x3f000000);
  FUN_0047d2d0(local_38,uVar7);
  local_68 = (undefined *)0x4d4c0c;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

