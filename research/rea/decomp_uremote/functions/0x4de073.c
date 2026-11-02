// rea decompile_all
// name: FUN_004de073
// address: 0x4de073
// body: available
// range: 0x4de073-0x4de2c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004de073(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6,int param_7,int param_8,undefined4 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 *puVar5;
  char cVar6;
  undefined4 extraout_ECX;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined *local_70;
  uint uStack_6c;
  undefined1 *local_44;
  undefined1 *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9526;
  local_14 = ExceptionList;
  uStack_6c = DAT_00955fd4 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_14;
  local_3c = (undefined1 *)&local_70;
  FUN_004c1e29(&local_70,0x1000b00,0);
  FUN_0047d23a();
  local_70 = (undefined *)0x0;
  FUN_004c1e29(&local_3c,0x1000d00);
  local_70 = (undefined *)0x4de0da;
  cVar6 = FUN_004c3153();
  if (cVar6 != '\0') {
    local_70 = (undefined *)0x0;
    cVar6 = FUN_004c30fb(param_9);
    if (cVar6 != '\0') {
      local_40 = (undefined1 *)&local_70;
      FUN_004d076d();
      FUN_0047cda7();
      local_70 = (undefined *)0x2;
      goto LAB_004de122;
    }
  }
  local_40 = (undefined1 *)&local_70;
  FUN_004c1e29(&local_70,0x1000c00,0);
  FUN_0047cda7();
  local_70 = (undefined *)0x1;
LAB_004de122:
  FUN_0047d353(param_1,0,param_2,param_3);
  local_70 = (undefined *)0x4de13a;
  FUN_0047888f();
  fVar1 = (float)param_8;
  local_c = 0;
  fVar2 = (float)param_6;
  local_70 = (undefined *)(fVar1 * 0.45 + fVar2);
  fVar3 = (float)param_7;
  fVar4 = (float)param_5;
  local_44 = (undefined1 *)(fVar3 * 0.3 + fVar4);
  local_40 = (undefined1 *)(fVar3 * 0.7 + fVar4);
  fVar4 = fVar3 * 0.5 + fVar4;
  FUN_00479368(extraout_ECX,fVar4,fVar1 * 0.24999999 + fVar2,local_40,local_70,local_44);
  puVar5 = local_40;
  local_70 = (undefined *)(fVar1 * 0.55 + fVar2);
  local_40 = (undefined1 *)(fVar1 * 0.75 + fVar2);
  FUN_00479368(local_38,fVar4,local_40,puVar5,local_70,local_44);
  local_70 = (undefined *)0x4de255;
  cVar6 = FUN_004c3153();
  if (cVar6 == '\0') {
    uVar8 = 0x3e99999a;
  }
  else {
    uVar8 = 0x3f800000;
  }
  local_44 = (undefined1 *)&local_70;
  ppuVar7 = &local_70;
  local_40 = (undefined1 *)uVar8;
  FUN_004c1e29(&local_44,0x1000e00,0);
  FUN_00476237(ppuVar7,uVar8);
  FUN_0047cda7();
  local_70 = &DAT_0095d798;
  FUN_0047d2ae(local_38);
  local_70 = (undefined *)0x4de2af;
  FUN_004f7994();
  ExceptionList = local_14;
  return;
}

