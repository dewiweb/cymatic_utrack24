// rea decompile_all
// name: FUN_004d6329
// address: 0x4d6329
// body: available
// range: 0x4d6329-0x4d6655 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d6329(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8,float param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  undefined4 extraout_ECX;
  float10 extraout_ST0;
  float10 fVar8;
  float local_7c;
  undefined1 *local_78;
  undefined1 *local_74;
  undefined *local_70;
  undefined1 **local_6c;
  undefined *local_68;
  uint uStack_64;
  float local_48;
  undefined1 *local_3c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005de620;
  local_14 = ExceptionList;
  uStack_64 = DAT_00955fd4 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  local_3c = (undefined1 *)&local_68;
  local_74 = (undefined1 *)&local_68;
  local_6c = (undefined1 **)0x0;
  local_70 = (undefined *)0x1000b00;
  local_78 = (undefined1 *)0x4d636f;
  FUN_004c1e29();
  local_6c = (undefined1 **)0x4d6377;
  FUN_0047d23a();
  local_68 = (undefined *)0x4d637e;
  cVar6 = FUN_004c3153();
  if (cVar6 != '\0') {
    local_68 = (undefined *)0x0;
    local_6c = (undefined1 **)param_9;
    local_70 = (undefined *)0x4d638e;
    cVar6 = FUN_004c30fb();
    if (cVar6 != '\0') {
      local_3c = (undefined1 *)&local_68;
      local_74 = (undefined1 *)&local_68;
      local_6c = (undefined1 **)0x0;
      local_70 = (undefined *)0x1000d00;
      local_78 = (undefined1 *)0x4d63a3;
      FUN_004c1e29();
      local_6c = (undefined1 **)0x4d63ab;
      FUN_0047cda7();
      local_68 = (undefined *)0x2;
      goto LAB_004d63ce;
    }
  }
  local_3c = (undefined1 *)&local_68;
  local_74 = (undefined1 *)&local_68;
  local_6c = (undefined1 **)0x0;
  local_70 = (undefined *)0x1000c00;
  local_78 = (undefined1 *)0x4d63c4;
  FUN_004c1e29();
  local_6c = (undefined1 **)0x4d63cc;
  FUN_0047cda7();
  local_68 = (undefined *)0x1;
LAB_004d63ce:
  local_6c = (undefined1 **)param_3;
  local_70 = (undefined *)param_2;
  local_74 = (undefined1 *)0x0;
  local_78 = (undefined1 *)param_1;
  local_7c = 7.10716e-39;
  FUN_0047d353();
  local_68 = (undefined *)0x4d63e6;
  cVar6 = FUN_004c3153();
  if (cVar6 == '\0') {
    local_48 = 0.3;
  }
  else if ((char)param_4 == '\0') {
    local_48 = 0.5;
  }
  else {
    local_48 = 1.2;
  }
  local_68 = (undefined *)0x4d6414;
  cVar6 = FUN_004c3153();
  fVar8 = extraout_ST0;
  if (cVar6 != '\0') {
    fVar8 = (float10)1;
  }
  local_68 = (undefined *)(float)fVar8;
  local_6c = &local_3c;
  local_70 = (undefined *)param_4;
  local_74 = (undefined1 *)0x0;
  local_78 = (undefined1 *)0x1;
  local_7c = param_9;
  uVar7 = FUN_004c30fb();
  local_78 = (undefined1 *)(uVar7 & 0xff);
  local_3c = (undefined1 *)&local_7c;
  FUN_004c1e29(&local_7c,0x1000d00,0);
  FUN_004d3245();
  local_70 = (undefined *)0x4d645f;
  FUN_00476237();
  fVar1 = (float)param_8;
  local_68 = (undefined *)0x1;
  local_6c = (undefined1 **)0x1;
  local_70 = (undefined *)0x1;
  local_74 = (undefined1 *)0x1;
  fVar2 = (float)param_7;
  fVar3 = (float)param_6;
  fVar4 = (float)param_5;
  local_78 = (undefined1 *)0xbf800000;
  local_7c = local_48;
  FUN_004dc42b(local_48 + fVar4,local_48 + fVar3,fVar2 - (local_48 + local_48),
               fVar1 - (local_48 + local_48),&local_3c);
  local_68 = (undefined *)0x4d6501;
  cVar6 = FUN_004c3153();
  if (cVar6 != '\0') {
    local_68 = (undefined *)0x4d6512;
    FUN_0047888f();
    local_c = 0;
    local_70 = (undefined *)(fVar1 * 0.45 + fVar3);
    fVar5 = fVar2 * 0.3 + fVar4;
    local_74 = (undefined1 *)(fVar2 * 0.7 + fVar4);
    fVar4 = fVar2 * 0.5 + fVar4;
    local_78 = (undefined1 *)(fVar1 * 0.24999999 + fVar3);
    local_7c = fVar4;
    local_6c = (undefined1 **)fVar5;
    local_68 = local_70;
    local_3c = local_74;
    FUN_00479368(extraout_ECX);
    local_70 = (undefined *)(fVar1 * 0.55 + fVar3);
    local_74 = local_3c;
    local_78 = (undefined1 *)(fVar1 * 0.75 + fVar3);
    local_7c = fVar4;
    local_6c = (undefined1 **)fVar5;
    local_68 = local_70;
    local_3c = local_78;
    FUN_00479368(local_38);
    local_3c = (undefined1 *)&local_68;
    local_74 = (undefined1 *)&local_68;
    local_6c = (undefined1 **)0x0;
    local_70 = (undefined *)0x1000e00;
    local_78 = (undefined1 *)0x4d6622;
    FUN_004c1e29();
    local_6c = (undefined1 **)0x4d6629;
    FUN_0047cda7();
    local_68 = &DAT_0095d798;
    local_6c = (undefined1 **)local_38;
    local_70 = (undefined *)0x4d6638;
    FUN_0047d2ae();
    local_68 = (undefined *)0x4d6641;
    FUN_004f7994();
  }
  ExceptionList = local_14;
  return;
}

